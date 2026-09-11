// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLOADSTORE_TB__SYMS_H_
#define VERILATED_VLOADSTORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vloadstore_tb.h"

// INCLUDE MODULE CLASSES
#include "Vloadstore_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vloadstore_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vloadstore_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vloadstore_tb___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_loadstore_tb;

    // CONSTRUCTORS
    Vloadstore_tb__Syms(VerilatedContext* contextp, const char* namep, Vloadstore_tb* modelp);
    ~Vloadstore_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
