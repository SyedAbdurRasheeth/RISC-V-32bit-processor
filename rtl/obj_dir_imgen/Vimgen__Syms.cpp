// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vimgen__pch.h"
#include "Vimgen.h"
#include "Vimgen___024root.h"

// FUNCTIONS
Vimgen__Syms::~Vimgen__Syms()
{
}

Vimgen__Syms::Vimgen__Syms(VerilatedContext* contextp, const char* namep, Vimgen* modelp)
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
