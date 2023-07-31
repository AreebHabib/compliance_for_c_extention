// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Main_processor.h for the primary calling header

#include "verilated.h"

#include "Vtb_Main_processor__Syms.h"
#include "Vtb_Main_processor___024root.h"

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_static(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___eval_static\n"); );
}

extern const VlWide<13>/*415:0*/ Vtb_Main_processor__ConstPool__CONST_h54224645_0;
extern const VlWide<14>/*447:0*/ Vtb_Main_processor__ConstPool__CONST_he278731b_0;
extern const VlWide<15>/*479:0*/ Vtb_Main_processor__ConstPool__CONST_h6aebc7c9_0;

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_initial__TOP(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(13, Vtb_Main_processor__ConstPool__CONST_h54224645_0)
                 ,  &(vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(14, Vtb_Main_processor__ConstPool__CONST_he278731b_0)
                 ,  &(vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 101, 0, VL_CVT_PACK_STR_NW(15, Vtb_Main_processor__ConstPool__CONST_h6aebc7c9_0)
                 ,  &(vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_final(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_triggers__stl(Vtb_Main_processor___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Main_processor___024root___dump_triggers__stl(Vtb_Main_processor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_Main_processor___024root___eval_stl(Vtb_Main_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_settle(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_Main_processor___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_Main_processor___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../ateeb_riscv-main/tb_Main_processor.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_Main_processor___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Main_processor___024root___dump_triggers__stl(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Main_processor___024root___stl_sequent__TOP__0(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x33U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op 
            = ((0x4000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                ? ((0x2000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                    ? ((0x1000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                        ? 8U : 7U) : ((0x1000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                       ? ((0x20U == 
                                           (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                            >> 0x19U))
                                           ? 6U : 5U)
                                       : 4U)) : ((0x2000U 
                                                  & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                   ? 1U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                     >> 0x19U))
                                                    ? 9U
                                                    : 0U))));
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op 
            = ((0x4000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                ? ((0x2000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                    ? ((0x1000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                        ? 8U : 7U) : ((0x1000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                       ? ((0x20U == 
                                           (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                            >> 0x19U))
                                           ? 6U : 5U)
                                       : 4U)) : ((0x2000U 
                                                  & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)
                                                   ? 1U
                                                   : 0U)));
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 1U;
    } else if ((3U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 1U;
    } else if ((0x23U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 1U;
    } else if ((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 0U;
    } else if ((0x37U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 1U;
    } else if ((0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = 2U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = 0U;
    }
    if ((0x33U != (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        if ((0x13U != (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
            if ((3U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = 0U;
                vlSelf->tb_Main_processor__DOT__OG__DOT__mask 
                    = (7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                             >> 0xcU));
            } else if ((0x23U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = 1U;
                vlSelf->tb_Main_processor__DOT__OG__DOT__mask 
                    = (7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                             >> 0xcU));
            } else if ((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = 0U;
            } else if ((0x37U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = 0U;
            } else if ((0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = 0U;
            }
            if ((3U != (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                if ((0x23U != (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                    if ((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
                        vlSelf->tb_Main_processor__DOT__OG__DOT__br_type 
                            = (7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                     >> 0xcU));
                    }
                }
            }
        }
    }
    if (vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wrMW) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Flush = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Stall = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW = 0U;
        if ((0x33U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_A 
                = ((0U != (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                    >> 0xfU))) & ((0x1fU 
                                                   & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                      >> 0xfU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory 
                                                      >> 7U))));
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_B 
                = ((0U != (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                    >> 0x14U))) & (
                                                   (0x1fU 
                                                    & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                       >> 0x14U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory 
                                                       >> 7U))));
        } else {
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_A 
                = ((0x13U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)) 
                   & ((0U != (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                       >> 0xfU))) & 
                      ((0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                 >> 0xfU)) == (0x1fU 
                                               & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory 
                                                  >> 7U)))));
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_B = 0U;
        }
        if (vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken) {
            vlSelf->tb_Main_processor__DOT__OG__DOT__Flush = 1U;
            vlSelf->tb_Main_processor__DOT__OG__DOT__Stall = 0U;
            vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW = 0U;
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_A = 0U;
            vlSelf->tb_Main_processor__DOT__OG__DOT__For_B = 0U;
        }
    } else {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Flush 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Stall = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__For_A = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__For_B = 0U;
    }
    if ((0x13U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (((1U == (7U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                              >> 0xcU))) | (5U == (7U 
                                                   & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                      >> 0xcU))))
                ? VL_EXTENDS_II(32,5, (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                >> 0x14U)))
                : VL_EXTENDS_II(32,12, (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                        >> 0x14U)));
    } else if ((3U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
               >> 0x14U);
    } else if ((0x23U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (((- (IData)((vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                            >> 0x1fU))) << 0xcU) | 
               ((0xfe0U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                           >> 0x14U)) | (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                  >> 7U))));
    } else if ((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (((- (IData)((vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                            >> 0x1fU))) << 0xcU) | 
               ((0xfe0U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                           >> 0x14U)) | (0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                  >> 7U))));
    } else if ((0x37U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (0xfffff000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode);
    } else if ((0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__B_i 
            = (((- (IData)((vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                            >> 0x1fU))) << 0x14U) | 
               ((0xff000U & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode) 
                | ((0x800U & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                              >> 9U)) | (0x7feU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                                                   >> 0x14U)))));
    }
    if (vlSelf->tb_Main_processor__DOT__OG__DOT__rd_enMW) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
            = ((0x64U >= (0x7fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory 
                                   >> 2U))) ? vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__memory
               [(0x7fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory 
                          >> 2U))] : 0U);
        vlSelf->tb_Main_processor__DOT__OG__DOT__rdata 
            = ((4U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                ? ((2U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                    ? 0U : ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                             ? ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)
                                 ? ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)
                                     ? (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                        >> 0x10U) : 0U)
                                 : (0xffffU & vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data))
                             : ((0U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                 ? (0xffU & vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data)
                                 : ((1U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                     ? (0xffU & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                 >> 8U))
                                     : ((2U == (3U 
                                                & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                         ? (0xffU & 
                                            (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                             >> 0x10U))
                                         : ((3U == 
                                             (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                             ? (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                >> 0x18U)
                                             : 0U))))))
                : ((2U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                    ? ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                        ? 0U : vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data)
                    : ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))
                        ? ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)
                            ? ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)
                                ? (((- (IData)((vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                >> 0x1fU))) 
                                    << 0x10U) | (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                 >> 0x10U))
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data)))
                        : ((0U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                            ? (((- (IData)((1U & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data))
                            : ((1U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                ? (((- (IData)((1U 
                                                & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                   >> 0xfU)))) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                 >> 8U)))
                                : ((2U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                       >> 0x17U)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                     >> 0x10U)))
                                    : ((3U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))
                                        ? (((- (IData)(
                                                       (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data 
                                              >> 0x18U))
                                        : 0U)))))));
    } else {
        vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data = 0U;
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign = 0U;
    vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o = 0U;
    vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o 
        = vlSelf->tb_Main_processor__DOT__OG__DOT__index;
    if (vlSelf->tb_Main_processor__DOT__OG__DOT__wr_enMW) {
        if ((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))) {
            if ((0U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                    = (0xffU & vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory);
            } else if ((1U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                    = (0xffU & (vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory 
                                >> 8U));
            } else if ((2U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                    = (0xffU & (vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory 
                                >> 0x10U));
            } else if ((3U == (3U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory))) {
                vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                    = (vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory 
                       >> 0x18U);
            }
        } else if ((1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))) {
            if ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)) {
                if ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory)) {
                    vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                        = (vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory 
                           >> 0x10U);
                }
            } else {
                vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                    = (0xffffU & vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory);
            }
        } else if ((2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__mask))) {
            vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data 
                = vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory;
        }
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
        = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__For_A)
            ? vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory
            : vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
           [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                      >> 0xfU))]);
    vlSelf->tb_Main_processor__DOT__OG__DOT__B_for 
        = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__For_B)
            ? vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory
            : vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile
           [(0x1fU & (vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode 
                      >> 0x14U))]);
    if ((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__index;
    } else if ((1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o 
            = ((IData)(2U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index);
    } else if ((2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign = 1U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o = 0U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__index;
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
        = vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory
        [(0x1fU & (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o)
                     ? vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o
                     : vlSelf->tb_Main_processor__DOT__OG__DOT__index) 
                   >> 2U))];
    if ((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wdata 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory;
    } else if ((1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wdata 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__rdata;
    } else if ((2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__wdata 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__PC_execute_memory;
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__A = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A)
                                                   ? vlSelf->tb_Main_processor__DOT__OG__DOT__A_for
                                                   : vlSelf->tb_Main_processor__DOT__OG__DOT__PC_fetch_decode);
    vlSelf->tb_Main_processor__DOT__OG__DOT__B = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B)
                                                   ? vlSelf->tb_Main_processor__DOT__OG__DOT__B_i
                                                   : vlSelf->tb_Main_processor__DOT__OG__DOT__B_for);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken 
        = (((0x63U == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)) 
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
                       >> 1U)) & ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__br_type))
                                   ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                      != vlSelf->tb_Main_processor__DOT__OG__DOT__B_for)
                                   : (vlSelf->tb_Main_processor__DOT__OG__DOT__A_for 
                                      == vlSelf->tb_Main_processor__DOT__OG__DOT__B_for))))) 
           | (0x6fU == (0x7fU & vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode)));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction 
        = vlSelf->tb_Main_processor__DOT__OG__DOT__instruction;
    if ((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction 
            = vlSelf->tb_Main_processor__DOT__OG__DOT__instruction;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state 
            = ((3U == (3U & (vlSelf->tb_Main_processor__DOT__OG__DOT__instruction 
                             >> 0x10U))) ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction = 0x13U;
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state 
            = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                ? 0U : 2U);
    } else if ((2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state))) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction 
            = ((vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__conc_32_misallign 
                << 0x10U) | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__upper_16));
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state 
            = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken)
                ? 0U : ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned)
                         ? 1U : 0U));
    } else {
        vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state = 0U;
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__alu_out 
        = (((((((((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op)) 
                  | (1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
                 | (2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
                | (3U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
               | (4U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
              | (5U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
             | (6U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))) 
            | (7U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op)))
            ? ((0U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                   + vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                : ((1U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                    ? ((0x1fU >= vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                        ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                           << vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                        : 0U) : ((2U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                                  ? VL_LTS_III(32, vlSelf->tb_Main_processor__DOT__OG__DOT__A, vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                  : ((3U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                                      ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                                         < vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                      : ((4U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                                          ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                                             ^ vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                          : ((5U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                                              ? ((0x1fU 
                                                  >= vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                                  ? 
                                                 (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                                                  >> vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                                  : 0U)
                                              : ((6U 
                                                  == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                                                  ? 
                                                 ((0x1fU 
                                                   >= vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                                   ? 
                                                  (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                                                   >> vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                                                   : 0U)
                                                  : 
                                                 (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                                                  | vlSelf->tb_Main_processor__DOT__OG__DOT__B))))))))
            : ((8U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                   & vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                : ((9U == (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op))
                    ? (vlSelf->tb_Main_processor__DOT__OG__DOT__A 
                       - vlSelf->tb_Main_processor__DOT__OG__DOT__B)
                    : 0U)));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst 
        = (0xffffU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign)
                       ? vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction
                       : ((2U & vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                           ? (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction 
                              >> 0x10U) : vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction)));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch 
        = ((0xe00U & ((- (IData)((1U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 0xcU)))) 
                      << 9U)) | ((0x100U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            >> 4U)) 
                                 | ((0xc0U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              << 1U)) 
                                    | ((0x20U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 3U)) 
                                       | ((0x18U & 
                                           ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (6U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   >> 2U)))))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li 
        = ((0xfc0U & ((- (IData)((1U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                        >> 0xcU)))) 
                      << 6U)) | ((0x20U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           >> 7U)) 
                                 | (0x1fU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             >> 2U))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0 
        = (0x63U | ((0x800U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                               << 1U)) | ((0x600U & 
                                           ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            << 6U)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 5U)))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0 
        = (0x45413U | ((0x38000U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                    << 8U)) | (0x380U 
                                               & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))));
    vlSelf->__VdfgTmp_hbc79abe5__0 = ((0x10U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 1U)) 
                                      | ((0xeU & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 9U)) 
                                         | (1U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 6U))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o 
        = (1U & ((~ (IData)(vlSelf->tb_Main_processor__DOT__reset)) 
                 & ((~ (IData)((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))) 
                    | (IData)((3U != (3U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0 
        = ((0x300U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                      >> 1U)) | ((0x80U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                           << 1U)) 
                                 | ((0x40U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              >> 1U)) 
                                    | ((0x20U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (0xeU & 
                                             ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                              >> 2U)))))));
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
        = ((0xff000U & ((- (IData)((1U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                          >> 0xcU)))) 
                        << 0xcU)) | ((0x800U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                >> 1U)) 
                                     | ((0x400U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 2U)) 
                                        | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0))));
    if (vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__plus4 
            = ((IData)(2U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index);
        if ((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
            if ((2U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                if ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                    vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                        = vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction;
                } else if ((0x8000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                    if ((0x4000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                        vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                            = ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                ? 0x13U : (0x12023U 
                                           | ((0xfe000000U 
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
                                                          & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))));
                    } else if ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                        vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o = 0x13U;
                    } else if ((0x1000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                        if ((0x1000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) {
                            vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                                = ((IData)((0U == (0xffcU 
                                                   & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))
                                    ? 0x100073U : ((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x7cU 
                                                              & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) 
                                                            & (0U 
                                                               != 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                                   >> 7U)))))
                                                    ? 
                                                   (0xe7U 
                                                    | (0xf8000U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                          << 8U)))
                                                    : 
                                                   (0x33U 
                                                    | ((0x1f00000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0xf8000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))));
                        }
                    } else {
                        vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                            = ((IData)(((0U == (0x7cU 
                                                & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) 
                                        & (0U != (0x1fU 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     >> 7U)))))
                                ? (0x67U | (0xf8000U 
                                            & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                               << 8U)))
                                : (0x33U | ((0x1f00000U 
                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))));
                    }
                } else {
                    vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                        = ((0x4000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                            ? ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                ? 0x13U : (0x10003U 
                                           | ((0xfff00000U 
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
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))
                            : ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                ? 0x13U : (0x1013U 
                                           | ((0x1f00000U 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))));
                }
            } else {
                vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
                    = ((1U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                        ? ((0x8000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                            ? ((0x4000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                ? ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                    ? (0x41000U | (
                                                   (0x80000000U 
                                                    & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                       << 0x13U)) 
                                                   | ((0x7e000000U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                          << 0x15U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0)))))
                                    : (0x40000U | (
                                                   (0x80000000U 
                                                    & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                       << 0x13U)) 
                                                   | ((0x7e000000U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch) 
                                                          << 0x15U)) 
                                                      | ((0x38000U 
                                                          & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0))))))
                                : ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                    ? (0x6fU | ((0x80000000U 
                                                 & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                    << 0x13U)) 
                                                | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                          << 0xcU)) 
                                                      | (0xff000U 
                                                         & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                            << 1U))))))
                                    : ((0x800U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                        ? ((0x400U 
                                            & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                            ? ((0x40U 
                                                & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                                    ? 
                                                   (0x847433U 
                                                    | ((0x700000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0x380U 
                                                             & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))
                                                    : 
                                                   (0x846433U 
                                                    | ((0x700000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0x380U 
                                                             & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                                    ? 
                                                   (0x844433U 
                                                    | ((0x700000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0x380U 
                                                             & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))
                                                    : 
                                                   (0x40840433U 
                                                    | ((0x700000U 
                                                        & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0x380U 
                                                             & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))))
                                            : (0x47413U 
                                               | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                                   << 0x14U) 
                                                  | ((0x38000U 
                                                      & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))
                                        : ((0x400U 
                                            & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                            ? (0x40000000U 
                                               | ((0x1f00000U 
                                                   & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                      << 0x12U)) 
                                                  | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0))
                                            : ((0x1f00000U 
                                                & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0)))))
                            : ((0x4000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                ? ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                    ? ((IData)(((0x100U 
                                                 == 
                                                 (0xf80U 
                                                  & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                       >> 7U)))))
                                        ? (0x137U | 
                                           (((- (IData)(
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
                                                              << 0xaU))))))))
                                        : (0x37U | 
                                           ((((- (IData)(
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
                                               & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))
                                    : (0x13U | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                                 << 0x14U) 
                                                | (0xf80U 
                                                   & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst)))))
                                : ((0x2000U & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                                    ? (0xefU | ((0x80000000U 
                                                 & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                    << 0x13U)) 
                                                | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                          << 0xcU)) 
                                                      | (0xff000U 
                                                         & (vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump 
                                                            << 1U))))))
                                    : ((0U == (0x1fU 
                                               & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                  >> 7U)))
                                        ? 0x13U : (0x13U 
                                                   | (((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li) 
                                                       << 0x14U) 
                                                      | ((0xf8000U 
                                                          & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | ((0x7000U 
                                                             & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                                >> 1U)) 
                                                            | (0xf80U 
                                                               & (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))))))))))
                        : ((0U == (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                         >> 0xdU)))
                            ? (0x10413U | ((0xfff00000U 
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
                                                    << 5U)))))
                            : ((2U == (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                             >> 0xdU)))
                                ? (0x40403U | ((0xfff00000U 
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
                                                           << 5U))))))
                                : ((6U == (7U & ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst) 
                                                 >> 0xdU)))
                                    ? (0x842023U | 
                                       ((0xfe000000U 
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
                                                    << 9U))))))
                                    : 0x13U))));
            }
        } else {
            vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o = 0x13U;
        }
    } else {
        vlSelf->tb_Main_processor__DOT__OG__DOT__plus4 
            = ((IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o)
                ? ((IData)(4U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index)
                : ((IData)(4U) + vlSelf->tb_Main_processor__DOT__OG__DOT__index));
        vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o 
            = ((0U != (IData)(vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst))
                ? vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction
                : 0x13U);
    }
}

VL_ATTR_COLD void Vtb_Main_processor___024root___eval_stl(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_Main_processor___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Main_processor___024root___dump_triggers__act(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_Main_processor.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_Main_processor.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Main_processor___024root___dump_triggers__nba(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_Main_processor.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_Main_processor.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Main_processor___024root___ctor_var_reset(Vtb_Main_processor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_Main_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Main_processor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_Main_processor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__plus4 = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__index = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__B_i = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->tb_Main_processor__DOT__OG__DOT__mask = VL_RAND_RESET_I(3);
    vlSelf->tb_Main_processor__DOT__OG__DOT__br_type = VL_RAND_RESET_I(3);
    vlSelf->tb_Main_processor__DOT__OG__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__sel_A = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__sel_B = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__IR_fetch_decode = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__PC_fetch_decode = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__ALU_execute_memory = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__WD_execute_memory = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__PC_execute_memory = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__IR_execute_memory = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__A_for = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__B_for = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__wb_selMW = VL_RAND_RESET_I(2);
    vlSelf->tb_Main_processor__DOT__OG__DOT__reg_wrMW = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__rd_enMW = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__wr_enMW = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__For_A = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__For_B = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Stall = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Stall_MW = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Flush = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Br_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__pc_realigned_o = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__instr_o = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__pc_half_o = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__stall_o = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__pc_misalign = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__upper_16 = VL_RAND_RESET_I(16);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__conc_32_misallign = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_misaligned = VL_RAND_RESET_I(1);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__misalign__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_Li = VL_RAND_RESET_I(12);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__imm_jump = VL_RAND_RESET_I(20);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_inst = VL_RAND_RESET_I(16);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__comp_imm_branch = VL_RAND_RESET_I(12);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_type = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_r_comp_type = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT__inst_nop = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h8edfb114__0 = 0;
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h38e9dc89__0 = 0;
    vlSelf->tb_Main_processor__DOT__OG__DOT__Extension_Unit__DOT__decode__DOT____VdfgTmp_h2395e5cd__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__instr_memory__DOT__instruction_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__register_file__DOT__registerfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 101; ++__Vi0) {
        vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_Main_processor__DOT__OG__DOT__data_memory__DOT____Vlvbound_h8840d524__0 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hbc79abe5__0 = 0;
    vlSelf->__Vintraval_h3aede0df__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Main_processor__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
