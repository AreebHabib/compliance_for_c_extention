// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vc_decode.h for the primary calling header

#include "verilated.h"

#include "Vc_decode__Syms.h"
#include "Vc_decode__Syms.h"
#include "Vc_decode___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vc_decode___024root___dump_triggers__act(Vc_decode___024root* vlSelf);
#endif  // VL_DEBUG

void Vc_decode___024root___eval_triggers__act(Vc_decode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vc_decode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vc_decode___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_Main_processor__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Main_processor__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->tb_Main_processor__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Main_processor__DOT__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_Main_processor__DOT__clk__0 
        = vlSelf->tb_Main_processor__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vc_decode___024root___dump_triggers__act(vlSelf);
    }
#endif
}
