// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Main_processor.h for the primary calling header

#ifndef VERILATED_VTB_MAIN_PROCESSOR___024ROOT_H_
#define VERILATED_VTB_MAIN_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vtb_Main_processor__Syms;

class Vtb_Main_processor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_Main_processor__DOT__clk;
        CData/*0:0*/ tb_Main_processor__DOT__reset;
        CData/*3:0*/ tb_Main_processor__DOT__OG__DOT__alu_op;
        CData/*2:0*/ tb_Main_processor__DOT__OG__DOT__mask;
        CData/*2:0*/ tb_Main_processor__DOT__OG__DOT__br_type;
        CData/*1:0*/ tb_Main_processor__DOT__OG__DOT__wb_sel;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__reg_wr;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__rd_en;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__wr_en;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__sel_A;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__sel_B;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__br_taken;
        CData/*1:0*/ tb_Main_processor__DOT__OG__DOT__wb_selMW;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__reg_wrMW;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__rd_enMW;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__wr_enMW;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__For_A;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__For_B;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Stall;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Stall_MW;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Flush;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Br_taken;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__pc_half_o;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__stall_o;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign;
        CData/*0:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned;
        CData/*1:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state;
        CData/*1:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state;
        CData/*4:0*/ __VdfgTmp_hbc79abe5__0;
        CData/*0:0*/ __Vintraval_h3aede0df__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Main_processor__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__upper_16;
        SData/*11:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li;
        SData/*15:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst;
        SData/*11:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch;
        SData/*9:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0;
        SData/*11:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__plus4;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__wdata;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__rdata;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__index;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__A;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__B;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__B_i;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__instruction;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__alu_out;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__IR_fetch_decode;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__PC_fetch_decode;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__ALU_execute_memory;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__WD_execute_memory;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__PC_execute_memory;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__IR_execute_memory;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__A_for;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__B_for;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__pc_realigned_o;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__instr_o;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__conc_32_misallign;
        IData/*19:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_type;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_comp_type;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_nop;
        IData/*19:0*/ tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0;
    };
    struct {
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data;
        IData/*31:0*/ tb_Main_processor__DOT__OG__DOT__data_memory__DOT____Vlvbound_h8840d524__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile;
        VlUnpacked<IData/*31:0*/, 101> tb_Main_processor__DOT__OG__DOT__data_memory__DOT__memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Main_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Main_processor___024root(Vtb_Main_processor__Syms* symsp, const char* v__name);
    ~Vtb_Main_processor___024root();
    VL_UNCOPYABLE(Vtb_Main_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
