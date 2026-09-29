// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbuttons_tb__pch.h"
#include "Vbuttons_tb.h"
#include "Vbuttons_tb___024root.h"

// FUNCTIONS
Vbuttons_tb__Syms::~Vbuttons_tb__Syms()
{
}

Vbuttons_tb__Syms::Vbuttons_tb__Syms(VerilatedContext* contextp, const char* namep, Vbuttons_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(150);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
