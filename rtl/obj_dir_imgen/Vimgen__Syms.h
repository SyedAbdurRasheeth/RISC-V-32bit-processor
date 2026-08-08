// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIMGEN__SYMS_H_
#define VERILATED_VIMGEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vimgen.h"

// INCLUDE MODULE CLASSES
#include "Vimgen___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vimgen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vimgen* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vimgen___024root               TOP;

    // CONSTRUCTORS
    Vimgen__Syms(VerilatedContext* contextp, const char* namep, Vimgen* modelp);
    ~Vimgen__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
