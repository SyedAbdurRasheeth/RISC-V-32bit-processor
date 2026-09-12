// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjump_test_tb__pch.h"
#include "Vjump_test_tb.h"
#include "Vjump_test_tb___024root.h"

// FUNCTIONS
Vjump_test_tb__Syms::~Vjump_test_tb__Syms()
{
}

Vjump_test_tb__Syms::Vjump_test_tb__Syms(VerilatedContext* contextp, const char* namep, Vjump_test_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(182);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_jump_test_tb.configure(this, name(), "jump_test_tb", "jump_test_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
