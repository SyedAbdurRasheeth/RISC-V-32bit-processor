// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebug_tb.h for the primary calling header

#include "Vdebug_tb__pch.h"
#include "Vdebug_tb__Syms.h"
#include "Vdebug_tb___024root.h"

void Vdebug_tb___024root___ctor_var_reset(Vdebug_tb___024root* vlSelf);

Vdebug_tb___024root::Vdebug_tb___024root(Vdebug_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdebug_tb___024root___ctor_var_reset(this);
}

void Vdebug_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdebug_tb___024root::~Vdebug_tb___024root() {
}
