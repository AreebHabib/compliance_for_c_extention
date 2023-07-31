// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_Main_processor__Syms.h"
#include "Vtb_Main_processor.h"
#include "Vtb_Main_processor___024root.h"

// FUNCTIONS
Vtb_Main_processor__Syms::~Vtb_Main_processor__Syms()
{
}

Vtb_Main_processor__Syms::Vtb_Main_processor__Syms(VerilatedContext* contextp, const char* namep, Vtb_Main_processor* modelp)
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
