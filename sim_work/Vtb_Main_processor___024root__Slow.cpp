// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Main_processor.h for the primary calling header

#include "verilated.h"

#include "Vtb_Main_processor__Syms.h"
#include "Vtb_Main_processor__Syms.h"
#include "Vtb_Main_processor___024root.h"

void Vtb_Main_processor___024root___ctor_var_reset(Vtb_Main_processor___024root* vlSelf);

Vtb_Main_processor___024root::Vtb_Main_processor___024root(Vtb_Main_processor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Main_processor___024root___ctor_var_reset(this);
}

void Vtb_Main_processor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_Main_processor___024root::~Vtb_Main_processor___024root() {
}
