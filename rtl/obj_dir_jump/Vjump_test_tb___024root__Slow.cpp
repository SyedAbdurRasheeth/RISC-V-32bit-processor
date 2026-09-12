// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjump_test_tb.h for the primary calling header

#include "Vjump_test_tb__pch.h"
#include "Vjump_test_tb__Syms.h"
#include "Vjump_test_tb___024root.h"

void Vjump_test_tb___024root___ctor_var_reset(Vjump_test_tb___024root* vlSelf);

Vjump_test_tb___024root::Vjump_test_tb___024root(Vjump_test_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjump_test_tb___024root___ctor_var_reset(this);
}

void Vjump_test_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vjump_test_tb___024root::~Vjump_test_tb___024root() {
}
