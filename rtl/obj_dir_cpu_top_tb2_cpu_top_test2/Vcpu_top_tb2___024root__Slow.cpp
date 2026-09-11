// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb2.h for the primary calling header

#include "Vcpu_top_tb2__pch.h"
#include "Vcpu_top_tb2__Syms.h"
#include "Vcpu_top_tb2___024root.h"

void Vcpu_top_tb2___024root___ctor_var_reset(Vcpu_top_tb2___024root* vlSelf);

Vcpu_top_tb2___024root::Vcpu_top_tb2___024root(Vcpu_top_tb2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu_top_tb2___024root___ctor_var_reset(this);
}

void Vcpu_top_tb2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_top_tb2___024root::~Vcpu_top_tb2___024root() {
}
