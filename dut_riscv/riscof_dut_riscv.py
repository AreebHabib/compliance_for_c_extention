#*********************************************************************
#  * Filename :    riscof_pcore.py
#  * Date     :    02-5-2022
#  * Author   :    @abdulwadoodd
#  *
#  * Description:  RISCOF plugin for PCORE to compile architecture tests,
#                  compile the pcore RTL, simulate it and run the arch 
#                  tests on Pcore.
#  *********************************************************************

import os
import logging

import riscof.utils as utils
from riscof.pluginTemplate import pluginTemplate

logger = logging.getLogger()

class dut_riscv(pluginTemplate):
    __model__   = "dut_riscv"
    __version__ = "1.0.1"

    def __init__(self, *args, **kwargs):
        
        super().__init__(*args, **kwargs)
        config = kwargs.get('config')

        if config is None:
            print("Please enter input file paths in configuration.")
            raise SystemExit(1)
        
        self.dut_exe = os.path.join(config['PATH'] if 'PATH' in config else "","dut_riscv")
        self.num_jobs = str(config['jobs'] if 'jobs' in config else 1)
        self.pluginpath=os.path.abspath(config['pluginpath'])
        self.isa_spec = os.path.abspath(config['ispec'])
        self.platform_spec = os.path.abspath(config['pspec'])
        if 'target_run' in config and config['target_run']=='0':
            self.target_run = False
        else:
            self.target_run = True

    def initialise(self, suite, work_dir, archtest_env):
       
       self.work_dir = work_dir
       self.suite_dir = suite
       self.compile_cmd = 'riscv64-unknown-elf-gcc -march={0} \
         -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g\
         -T '+self.pluginpath+'/env/link.ld\
         -I '+self.pluginpath+'/env/\
         -I ' + archtest_env + ' {1} -o {2} {3}'
       
       self.objcopy_cmd = 'riscv64-unknown-elf-objcopy -O binary {0} {1}.bin'
       self.objdump_cmd = 'riscv64-unknown-elf-objdump -D {0} > {1}.disasm'
       self.hexgen_cmd  = 'python3 makehex.py {0}/{1}.bin > {0}/{1}.hex'

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

       # Simulate
       self.sim_pcore = './{0}/V{1} \
        +max_cycles=100000000 \
        +imem={2}/{3}.hex'
#       -I../rtl/defines/ --top-module {1} \
    def build(self, isa_yaml, platform_yaml):

      ispec = utils.load_yaml(isa_yaml)['hart0']
      self.xlen = ('64' if 64 in ispec['supported_xlen'] else '32')
      self.isa = 'rv' + self.xlen
      if "I" in ispec["ISA"]:
          self.isa += 'i'
      if "M" in ispec["ISA"]:
          self.isa += 'm'
      if "C" in ispec["ISA"]:
          self.isa += 'c'

      self.compile_cmd = self.compile_cmd+' -mabi='+('lp64 ' if 64 in ispec['supported_xlen'] else 'ilp32 ')

    def runTests(self, testList):
      for testname in testList:
          testentry  = testList[testname]
          test       = testentry['test_path']
          test_dir   = testentry['work_dir']
          file_name  = 'dut_riscv'

          elf            = '{0}.elf'.format(file_name)
          compile_macros = ' -D' + " -D".join(testentry['macros'])
          marchstr = testentry['isa'].lower()
          compile_run    = self.compile_cmd.format(marchstr, test, elf, compile_macros)
          utils.shellCommand(compile_run).run(cwd=test_dir)

          objcopy_run    = self.objcopy_cmd.format(elf,file_name)
          utils.shellCommand(objcopy_run).run(cwd=test_dir)

          objdump_run    = self.objdump_cmd.format(elf,file_name)
          utils.shellCommand(objdump_run).run(cwd=test_dir)

          hexgen_run     = self.hexgen_cmd.format(test_dir,file_name)
          utils.shellCommand(hexgen_run).run()

          run_sim        = self.sim_pcore.format(self.buidldir,self.toplevel,test_dir,file_name)
          utils.shellCommand(run_sim).run()
          
          cp_sig = 'cp -f *.signature {0}/.'.format(test_dir)
          utils.shellCommand(cp_sig).run()

      utils.shellCommand('rm *.signature').run()

      if not self.target_run:
          raise SystemExit

    
