// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VC_DECODE__SYMS_H_
#define VERILATED_VC_DECODE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vc_decode.h"

// INCLUDE MODULE CLASSES
#include "Vc_decode___024root.h"

// SYMS CLASS (contains all model state)
class Vc_decode__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vc_decode* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vc_decode___024root            TOP;

    // CONSTRUCTORS
    Vc_decode__Syms(VerilatedContext* contextp, const char* namep, Vc_decode* modelp);
    ~Vc_decode__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
