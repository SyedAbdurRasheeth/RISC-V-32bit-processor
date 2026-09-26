// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgraphics_test_tb.h for the primary calling header

#include "Vgraphics_test_tb__pch.h"
#include "Vgraphics_test_tb__Syms.h"
#include "Vgraphics_test_tb___024root.h"

void Vgraphics_test_tb___024root___ctor_var_reset(Vgraphics_test_tb___024root* vlSelf);

Vgraphics_test_tb___024root::Vgraphics_test_tb___024root(Vgraphics_test_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgraphics_test_tb___024root___ctor_var_reset(this);
}

void Vgraphics_test_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgraphics_test_tb___024root::~Vgraphics_test_tb___024root() {
}
