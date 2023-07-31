// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vc_decode.h for the primary calling header

#include "verilated.h"

#include "Vc_decode__Syms.h"
#include "Vc_decode__Syms.h"
#include "Vc_decode___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vc_decode___024root___dump_triggers__stl(Vc_decode___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vc_decode___024root___eval_triggers__stl(Vc_decode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vc_decode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vc_decode___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vc_decode___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
