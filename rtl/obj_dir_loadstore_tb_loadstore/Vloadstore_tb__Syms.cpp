// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vloadstore_tb__pch.h"
#include "Vloadstore_tb.h"
#include "Vloadstore_tb___024root.h"

// FUNCTIONS
Vloadstore_tb__Syms::~Vloadstore_tb__Syms()
{
}

Vloadstore_tb__Syms::Vloadstore_tb__Syms(VerilatedContext* contextp, const char* namep, Vloadstore_tb* modelp)
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
    __Vscope_loadstore_tb.configure(this, name(), "loadstore_tb", "loadstore_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
