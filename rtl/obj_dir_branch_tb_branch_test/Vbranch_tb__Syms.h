// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBRANCH_TB__SYMS_H_
#define VERILATED_VBRANCH_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbranch_tb.h"

// INCLUDE MODULE CLASSES
#include "Vbranch_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbranch_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbranch_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbranch_tb___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_branch_tb;

    // CONSTRUCTORS
    Vbranch_tb__Syms(VerilatedContext* contextp, const char* namep, Vbranch_tb* modelp);
    ~Vbranch_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
