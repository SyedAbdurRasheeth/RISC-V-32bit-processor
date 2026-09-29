// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuttons_tb.h for the primary calling header

#include "Vbuttons_tb__pch.h"
#include "Vbuttons_tb__Syms.h"
#include "Vbuttons_tb___024root.h"

void Vbuttons_tb___024root___ctor_var_reset(Vbuttons_tb___024root* vlSelf);

Vbuttons_tb___024root::Vbuttons_tb___024root(Vbuttons_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbuttons_tb___024root___ctor_var_reset(this);
}

void Vbuttons_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbuttons_tb___024root::~Vbuttons_tb___024root() {
}
