// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTINYALU__SYMS_H_
#define VERILATED_VTINYALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtinyalu.h"

// INCLUDE MODULE CLASSES
#include "Vtinyalu___024root.h"
#include "Vtinyalu___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtinyalu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtinyalu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtinyalu___024root             TOP;

    // COVERAGE
    uint32_t __Vcoverage[566];

    // CONSTRUCTORS
    Vtinyalu__Syms(VerilatedContext* contextp, const char* namep, Vtinyalu* modelp);
    ~Vtinyalu__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
