// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu_top_tb__pch.h"
#include "Vcpu_top_tb.h"
#include "Vcpu_top_tb___024root.h"

// FUNCTIONS
Vcpu_top_tb__Syms::~Vcpu_top_tb__Syms()
{
}

Vcpu_top_tb__Syms::Vcpu_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vcpu_top_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(134);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_cpu_top_tb.configure(this, name(), "cpu_top_tb", "cpu_top_tb", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
