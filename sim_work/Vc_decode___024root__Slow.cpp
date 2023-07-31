// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vc_decode.h for the primary calling header

#include "verilated.h"

#include "Vc_decode__Syms.h"
#include "Vc_decode__Syms.h"
#include "Vc_decode___024root.h"

void Vc_decode___024root___ctor_var_reset(Vc_decode___024root* vlSelf);

Vc_decode___024root::Vc_decode___024root(Vc_decode__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vc_decode___024root___ctor_var_reset(this);
}

void Vc_decode___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vc_decode___024root::~Vc_decode___024root() {
}
