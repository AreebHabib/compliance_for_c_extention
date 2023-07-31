// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Main_processor__Syms.h"


void Vtb_Main_processor___024root__trace_chg_sub_0(Vtb_Main_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_Main_processor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_Main_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Main_processor___024root*>(voidSelf);
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_Main_processor___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_Main_processor___024root__trace_chg_sub_0(Vtb_Main_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[31]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+64,(vlSelf->tb_Main_processor__DOT__OG__DOT__index),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_Main_processor__DOT__OG__DOT__B_i),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_Main_processor__DOT__OG__DOT__instruction),32);
        bufp->chgCData(oldp+67,(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op),4);
        bufp->chgCData(oldp+68,(vlSelf->tb_Main_processor__DOT__OG__DOT__mask),3);
        bufp->chgCData(oldp+69,(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type),3);
        bufp->chgCData(oldp+70,(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel),2);
        bufp->chgBit(oldp+71,(vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr));
        bufp->chgBit(oldp+72,(vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en));
        bufp->chgBit(oldp+73,(vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en));
        bufp->chgBit(oldp+74,(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A));
        bufp->chgBit(oldp+75,(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B));
        bufp->chgBit(oldp+76,(vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken));
        bufp->chgIData(oldp+77,(vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_Main_processor__DOT__OG__DOT__PC_fetch_decode),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_Main_processor__DOT__OG__DOT__PC_execute_memory),32);
        bufp->chgIData(oldp+82,(vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory),32);
        bufp->chgCData(oldp+83,(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW),2);
        bufp->chgBit(oldp+84,(vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wrMW));
        bufp->chgBit(oldp+85,(vlSelf->tb_Main_processor__DOT__OG__DOT__rd_enMW));
        bufp->chgBit(oldp+86,(vlSelf->tb_Main_processor__DOT__OG__DOT__wr_enMW));
        bufp->chgBit(oldp+87,(vlSelf->tb_Main_processor__DOT__OG__DOT__For_A));
        bufp->chgBit(oldp+88,(vlSelf->tb_Main_processor__DOT__OG__DOT__For_B));
        bufp->chgBit(oldp+89,(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall));
        bufp->chgBit(oldp+90,(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW));
        bufp->chgBit(oldp+91,(vlSelf->tb_Main_processor__DOT__OG__DOT__Flush));
        bufp->chgIData(oldp+92,(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o),32);
        bufp->chgIData(oldp+93,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o)
                                  ? vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o
                                  : vlSelf->tb_Main_processor__DOT__OG__DOT__index)),32);
        bufp->chgBit(oldp+94,(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o));
        bufp->chgBit(oldp+95,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign));
        bufp->chgBit(oldp+96,((1U & (vlSelf->tb_Main_processor__DOT__OG__DOT__index 
                                     >> 1U))));
        bufp->chgSData(oldp+97,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__upper_16),16);
        bufp->chgBit(oldp+98,((3U == (3U & (vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+99,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned));
        bufp->chgCData(oldp+100,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state),2);
        bufp->chgCData(oldp+101,((0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)),7);
        bufp->chgBit(oldp+102,((0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))));
        bufp->chgCData(oldp+103,((7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+104,((vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+105,((0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)),7);
        bufp->chgIData(oldp+106,(vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data),32);
        bufp->chgBit(oldp+107,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Stall) 
                                | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o))));
        bufp->chgCData(oldp+108,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+109,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory 
                                           >> 7U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+111,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))));
        bufp->chgIData(oldp+112,(vlSelf->tb_Main_processor__DOT__OG__DOT__wdata),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_Main_processor__DOT__OG__DOT__rdata),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_Main_processor__DOT__OG__DOT__A),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_Main_processor__DOT__OG__DOT__B),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_out),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_Main_processor__DOT__OG__DOT__A_for),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_Main_processor__DOT__OG__DOT__B_for),32);
        bufp->chgBit(oldp+119,(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken));
        bufp->chgIData(oldp+120,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction),32);
        bufp->chgCData(oldp+121,((3U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))),2);
        bufp->chgSData(oldp+122,((0xfffU & ((0xc0U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   >> 7U)) 
                                               | (0x1cU 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 2U)))))),12);
        bufp->chgSData(oldp+123,((0xfffU & ((0xc0U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 1U)) 
                                            | (0x3cU 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 7U))))),12);
        bufp->chgSData(oldp+124,((0xfffU & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                            << 2U))),12);
        bufp->chgSData(oldp+125,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li),12);
        bufp->chgCData(oldp+126,((0x1fU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 2U))),5);
        bufp->chgCData(oldp+127,((0x1fU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 7U))),5);
        bufp->chgIData(oldp+128,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump),20);
        bufp->chgIData(oldp+129,(((0xc0000U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              >> 0xcU)))) 
                                               << 0x12U)) 
                                  | ((0x20000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 5U)) 
                                     | (0x1f000U & 
                                        ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                         << 0xaU))))),20);
        bufp->chgIData(oldp+130,(((0xffc00U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              >> 0xcU)))) 
                                               << 0xaU)) 
                                  | ((0x200U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 3U)) 
                                     | ((0x180U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 4U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             << 1U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 3U)) 
                                              | (0x10U 
                                                 & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                    >> 2U)))))))),20);
        bufp->chgCData(oldp+131,((7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 0xdU))),3);
        bufp->chgCData(oldp+132,((8U | (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              >> 7U)))),5);
        bufp->chgCData(oldp+133,((8U | (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              >> 2U)))),5);
        bufp->chgSData(oldp+134,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst),16);
        bufp->chgBit(oldp+135,((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))));
        bufp->chgCData(oldp+136,((0xffU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 5U))),8);
        bufp->chgSData(oldp+137,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch),12);
        bufp->chgSData(oldp+138,((0xfffU & ((0xf00U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 1U)) 
                                            | ((0xc0U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   >> 5U)) 
                                               | ((0x20U 
                                                   & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)) 
                                                  | (0x10U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        >> 2U))))))),12);
        bufp->chgIData(oldp+139,((0x40403U | ((0xfff00000U 
                                               & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                                  << 0x16U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | ((0x7000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        >> 1U)) 
                                                    | (0x380U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                          << 5U))))))),32);
        bufp->chgIData(oldp+140,((0x842023U | ((0xfe000000U 
                                                & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                                   << 0x16U)) 
                                               | ((0x700000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (0xf80U 
                                                        & ((IData)(vlSelf->__VdfgTmp_hbc79abe5__0) 
                                                           << 9U))))))),32);
        bufp->chgIData(oldp+141,((0x10003U | ((0xfff00000U 
                                               & ((0xc000000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x18U)) 
                                                  | ((0x2000000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 0xdU)) 
                                                     | (0x1c00000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U))))) 
                                              | ((0x7000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 1U)) 
                                                 | (0xf80U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+142,((0x12023U | ((0xfe000000U 
                                               & ((0xc000000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x13U)) 
                                                  | (0x2000000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 0xdU)))) 
                                              | ((0x1f00000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & ((0x2000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 6U)) 
                                                       | (0x1e00U 
                                                          & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))))),32);
        bufp->chgIData(oldp+143,((0xefU | ((0x80000000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x13U)) 
                                           | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0xcU)) 
                                                 | (0xff000U 
                                                    & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                       << 1U))))))),32);
        bufp->chgIData(oldp+144,((0x6fU | ((0x80000000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x13U)) 
                                           | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0xcU)) 
                                                 | (0xff000U 
                                                    & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                       << 1U))))))),32);
        bufp->chgIData(oldp+145,((0xe7U | (0xf8000U 
                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              << 8U)))),32);
        bufp->chgIData(oldp+146,((0x67U | (0xf8000U 
                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              << 8U)))),32);
        bufp->chgIData(oldp+147,((0x41000U | ((0x80000000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x13U)) 
                                              | ((0x7e000000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                     << 0x15U)) 
                                                 | ((0x38000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 8U)) 
                                                    | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0)))))),32);
        bufp->chgIData(oldp+148,((0x40000U | ((0x80000000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x13U)) 
                                              | ((0x7e000000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                     << 0x15U)) 
                                                 | ((0x38000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 8U)) 
                                                    | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0)))))),32);
        bufp->chgIData(oldp+149,((0x13U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                            << 0x14U) 
                                           | (0xf80U 
                                              & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+150,((0x37U | ((((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                            >> 0xcU)))) 
                                             << 0x1eU) 
                                            | ((0x20000000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x11U)) 
                                               | (0x1f000000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0x16U)))) 
                                           | (0xf80U 
                                              & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+151,((0x13U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                            << 0x14U) 
                                           | ((0xf8000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | ((0x7000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 1U)) 
                                                 | (0xf80U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))),32);
        bufp->chgIData(oldp+152,((0x137U | (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                            >> 0xcU)))) 
                                             << 0x16U) 
                                            | ((0x200000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 9U)) 
                                               | ((0x180000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x10U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 0xdU)) 
                                                     | ((0x20000U 
                                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                            << 0xfU)) 
                                                        | (0x10000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 0xaU))))))))),32);
        bufp->chgIData(oldp+153,((0x10413U | ((0xfff00000U 
                                               & ((0xf0000000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x15U)) 
                                                  | ((0xc000000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 0xfU)) 
                                                     | ((0x2000000U 
                                                         & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                            << 0x14U)) 
                                                        | (0x1000000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 0x12U)))))) 
                                              | ((0x7000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 1U)) 
                                                 | (0x380U 
                                                    & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                       << 5U)))))),32);
        bufp->chgIData(oldp+154,((0x1013U | ((0x1f00000U 
                                              & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | ((0xf8000U 
                                                 & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0xf80U 
                                                   & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+155,(((0x1f00000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 0x12U)) 
                                  | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0)),32);
        bufp->chgIData(oldp+156,((0x40000000U | ((0x1f00000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0x12U)) 
                                                 | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0))),32);
        bufp->chgIData(oldp+157,((0x33U | ((0x1f00000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | ((0xf8000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0xf80U 
                                                 & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+158,((0x47413U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                               << 0x14U) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+159,((0x33U | ((0x1f00000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | (0xf80U 
                                              & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+160,((0x847433U | ((0x700000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+161,((0x846433U | ((0x700000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+162,((0x844433U | ((0x700000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+163,((0x40840433U | ((0x700000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 0x12U)) 
                                                 | ((0x38000U 
                                                     & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+164,(vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data),32);
    }
    bufp->chgBit(oldp+165,(vlSelf->tb_Main_processor__DOT__clk));
    bufp->chgBit(oldp+166,(vlSelf->tb_Main_processor__DOT__reset));
    bufp->chgIData(oldp+167,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                               ? ((IData)(2U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                               : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                   ? ((IData)(4U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                   : ((IData)(4U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)))),32);
    bufp->chgIData(oldp+168,(((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken)
                               ? vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory
                               : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                   ? ((IData)(2U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                   : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                                       ? ((IData)(4U) 
                                          + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                                       : ((IData)(4U) 
                                          + vlSelf->tb_Main_processor__DOT__OG__DOT__index))))),32);
    bufp->chgIData(oldp+169,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
                             [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+170,(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
                             [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+171,(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o),32);
    bufp->chgBit(oldp+172,(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o));
    bufp->chgIData(oldp+173,(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__conc_32_misallign),32);
    bufp->chgCData(oldp+174,(((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                               ? ((3U == (3U & (vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
                                                >> 0x10U)))
                                   ? 1U : 0U) : ((1U 
                                                  == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                                                  ? 
                                                 ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                                                   ? 0U
                                                   : 2U)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned)
                                                     ? 1U
                                                     : 0U))
                                                   : 0U)))),2);
    bufp->chgBit(oldp+175,(((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)) 
                            & ((4U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                ? ((2U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                    ? ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                        ? VL_GTES_III(32, vlSelf->tb_Main_processor__DOT__OG__DOT__A_for, vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                        : VL_LTS_III(32, vlSelf->tb_Main_processor__DOT__OG__DOT__A_for, vlSelf->tb_Main_processor__DOT__OG__DOT__B_for))
                                    : ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                        ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                           >= vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                        : (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                           < vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)))
                                : ((~ ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                                   ? 
                                                  (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                                   != vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                                   : 
                                                  (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                                   == vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)))))));
}

void Vtb_Main_processor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root__trace_cleanup\n"); );
    // Init
    Vtb_Main_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Main_processor___024root*>(voidSelf);
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
