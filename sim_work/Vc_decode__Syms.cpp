// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vc_decode__Syms.h"
#include "Vc_decode.h"
#include "Vc_decode___024root.h"

// FUNCTIONS
Vc_decode__Syms::~Vc_decode__Syms()
{
}

Vc_decode__Syms::Vc_decode__Syms(VerilatedContext* contextp, const char* namep, Vc_decode* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
