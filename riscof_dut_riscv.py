import os
import re
import shutil
import subprocess
import shlex
import logging
import random
import string
from string import Template
import sys

import riscof.utils as utils
from riscof.pluginTemplate import pluginTemplate
import riscof.constants as constants

logger = logging.getLogger()

class dut_riscv(pluginTemplate):
    __model__ = "dut_riscv"
    __version__ = "1.0.1"

    def __init__(self, *args, **kwargs):
        sclass = super().__init__(*args, **kwargs)

        config = kwargs.get('config')
        self.dut_exe = os.path.join(config['PATH'] if 'PATH' in config else "","dut_riscv")
        if config is None:
            print("Please enter input file paths in configuration.")
            raise SystemExit
        try:
            self.isa_spec = os.path.abspath(config['ispec'])
            self.platform_spec = os.path.abspath(config['pspec'])
            self.pluginpath = os.path.abspath(config['pluginpath'])
        except KeyError as e:
            logger.error("Please check the dut_riscv section in config for missing values.")
            logger.error(e)
            raise SystemExit
        logger.debug("DUT Riscv plugin initialised using the following configuration.")
        for entry in config:
            logger.debug(entry+' : '+config[entry])

        return sclass

    def initialise(self, suite, work_dir, compliance_env):
        self.work_dir = work_dir
        self.compile_cmd = 'riscv{1}-unknown-elf-gcc -march={0} \
         -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles\
         -T '+self.pluginpath+'/env/link.ld\
         -I '+self.pluginpath+'/env/\
         -I ' + compliance_env

        # build simulation model
        self.toplevel = 'tb_Main_processor'
        self.buidldir = 'sim_work'
        comp_pcore = 'verilator --Mdir {0} +define+COMPLIANCE=1 -cc \
         $(find ../ateeb_riscv-main/ -type f -name "*.sv")\
         ../ateeb_riscv-main/tb_Main_processor.sv  \
         -Wno-TIMESCALEMOD -Wno-MULTIDRIVEN -Wno-CASEOVERLAP \
         -Wno-WIDTH -Wno-UNOPTFLAT -Wno-IMPLICIT -Wno-PINMISSING \
         --exe ../ateeb_riscv-main/tb_Main_processor.cpp --timing --trace --trace-structs'.format(self.buidldir, self.toplevel)
        utils.shellCommand(comp_pcore).run()
        build_pcore = 'make -C /home/force/Desktop/work/compliance_testing/our_riscv/ateeb_riscv-main -f Makefile'.format(self.buidldir, self.toplevel)
        utils.shellCommand(build_pcore).run()
#-I../rtl/defines/ --top-module {1} \
        # Simulate
        self.sim_pcore = './{0}/V{1} \
         +max_cycles=100000000 \
         +imem={2}/{3}.hex'
        
        
    def build(self, isa_yaml, platform_yaml):
        ispec = utils.load_yaml(isa_yaml)['hart0']
        self.xlen = ('64' if 64 in ispec['supported_xlen'] else '32')
        self.isa = 'rv' + self.xlen
        if "64I" in ispec["ISA"]:
            self.compile_cmd = self.compile_cmd+' -mabi='+'lp64 '
        elif "32I" in ispec["ISA"]:
            self.compile_cmd = self.compile_cmd+' -mabi='+'ilp32 '
        elif "32E" in ispec["ISA"]:
            self.compile_cmd = self.compile_cmd+' -mabi='+'ilp32e '
        if "I" in ispec["ISA"]:
            self.isa += 'i'
            if "M" in ispec["ISA"]:
                self.isa += 'm'
            if "C" in ispec["ISA"]:
                self.isa += 'c'
        compiler = "riscv{0}-unknown-elf-gcc".format(self.xlen)
        if shutil.which(compiler) is None:
            logger.error(compiler+": executable not found. Please check environment setup.")
            raise SystemExit
        if shutil.which(self.dut_exe) is None:
            logger.error(self.dut_exe+ ": executable not found. Please check environment setup.")
            raise SystemExit

    def runTests(self, testList):
        for file in testList:
            testentry = testList[file]
            test = testentry['test_path']
            test_dir = testentry['work_dir']

            elf = 'my.elf'
            sig_file = os.path.join(test_dir, self.name[:-1] + ".signature")

            cmd = self.compile_cmd.format(testentry['isa'].lower(), self.xlen) + ' ' + test + ' -o ' + elf
            compile_cmd = cmd + ' -D' + " -D".join(testentry['macros'])
            logger.debug('Compiling test: ' + test)
            utils.shellCommand(compile_cmd).run(cwd=test_dir)

            execute = self.dut_exe + ' --isa={0} +signature={1} +signature-granularity=4 {2}'.format(self.isa, sig_file, elf)
            logger.debug('Executing on dut_riscv ' + execute)
            utils.shellCommand(execute).run(cwd=test_dir)
