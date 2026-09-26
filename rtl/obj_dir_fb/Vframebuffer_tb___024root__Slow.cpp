// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframebuffer_tb.h for the primary calling header

#include "Vframebuffer_tb__pch.h"
#include "Vframebuffer_tb__Syms.h"
#include "Vframebuffer_tb___024root.h"

void Vframebuffer_tb___024root___ctor_var_reset(Vframebuffer_tb___024root* vlSelf);

Vframebuffer_tb___024root::Vframebuffer_tb___024root(Vframebuffer_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vframebuffer_tb___024root___ctor_var_reset(this);
}

void Vframebuffer_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vframebuffer_tb___024root::~Vframebuffer_tb___024root() {
}
