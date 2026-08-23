// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb.h for the primary calling header

#include "Vcpu_top_tb__pch.h"
#include "Vcpu_top_tb__Syms.h"
#include "Vcpu_top_tb___024root.h"

void Vcpu_top_tb___024root___ctor_var_reset(Vcpu_top_tb___024root* vlSelf);

Vcpu_top_tb___024root::Vcpu_top_tb___024root(Vcpu_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu_top_tb___024root___ctor_var_reset(this);
}

void Vcpu_top_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcpu_top_tb___024root::~Vcpu_top_tb___024root() {
}
