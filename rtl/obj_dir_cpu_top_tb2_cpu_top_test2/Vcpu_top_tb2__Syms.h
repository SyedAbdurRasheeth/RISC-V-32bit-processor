// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCPU_TOP_TB2__SYMS_H_
#define VERILATED_VCPU_TOP_TB2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcpu_top_tb2.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_top_tb2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcpu_top_tb2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcpu_top_tb2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcpu_top_tb2___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_cpu_top_tb2;

    // CONSTRUCTORS
    Vcpu_top_tb2__Syms(VerilatedContext* contextp, const char* namep, Vcpu_top_tb2* modelp);
    ~Vcpu_top_tb2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
