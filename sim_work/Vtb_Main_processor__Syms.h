// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MAIN_PROCESSOR__SYMS_H_
#define VERILATED_VTB_MAIN_PROCESSOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_Main_processor.h"

// INCLUDE MODULE CLASSES
#include "Vtb_Main_processor___024root.h"

// SYMS CLASS (contains all model state)
class Vtb_Main_processor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_Main_processor* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_Main_processor___024root   TOP;

    // CONSTRUCTORS
    Vtb_Main_processor__Syms(VerilatedContext* contextp, const char* namep, Vtb_Main_processor* modelp);
    ~Vtb_Main_processor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
