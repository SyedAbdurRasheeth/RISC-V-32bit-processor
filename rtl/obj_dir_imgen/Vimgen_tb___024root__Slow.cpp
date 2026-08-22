// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimgen_tb.h for the primary calling header

#include "Vimgen_tb__pch.h"
#include "Vimgen_tb__Syms.h"
#include "Vimgen_tb___024root.h"

void Vimgen_tb___024root___ctor_var_reset(Vimgen_tb___024root* vlSelf);

Vimgen_tb___024root::Vimgen_tb___024root(Vimgen_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimgen_tb___024root___ctor_var_reset(this);
}

void Vimgen_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimgen_tb___024root::~Vimgen_tb___024root() {
}
