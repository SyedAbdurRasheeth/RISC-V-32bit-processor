// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_tb.h for the primary calling header

#include "Vbranch_tb__pch.h"
#include "Vbranch_tb__Syms.h"
#include "Vbranch_tb___024root.h"

void Vbranch_tb___024root___ctor_var_reset(Vbranch_tb___024root* vlSelf);

Vbranch_tb___024root::Vbranch_tb___024root(Vbranch_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbranch_tb___024root___ctor_var_reset(this);
}

void Vbranch_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbranch_tb___024root::~Vbranch_tb___024root() {
}
