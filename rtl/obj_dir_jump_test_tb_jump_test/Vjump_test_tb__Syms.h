// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJUMP_TEST_TB__SYMS_H_
#define VERILATED_VJUMP_TEST_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vjump_test_tb.h"

// INCLUDE MODULE CLASSES
#include "Vjump_test_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vjump_test_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjump_test_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjump_test_tb___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_jump_test_tb;

    // CONSTRUCTORS
    Vjump_test_tb__Syms(VerilatedContext* contextp, const char* namep, Vjump_test_tb* modelp);
    ~Vjump_test_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
