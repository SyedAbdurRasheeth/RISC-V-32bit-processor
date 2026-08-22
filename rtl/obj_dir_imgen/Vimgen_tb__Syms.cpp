// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vimgen_tb__pch.h"
#include "Vimgen_tb.h"
#include "Vimgen_tb___024root.h"

// FUNCTIONS
Vimgen_tb__Syms::~Vimgen_tb__Syms()
{
}

Vimgen_tb__Syms::Vimgen_tb__Syms(VerilatedContext* contextp, const char* namep, Vimgen_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(258);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
