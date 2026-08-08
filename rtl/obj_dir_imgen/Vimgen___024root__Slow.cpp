// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimgen.h for the primary calling header

#include "Vimgen__pch.h"
#include "Vimgen__Syms.h"
#include "Vimgen___024root.h"

void Vimgen___024root___ctor_var_reset(Vimgen___024root* vlSelf);

Vimgen___024root::Vimgen___024root(Vimgen__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimgen___024root___ctor_var_reset(this);
}

void Vimgen___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimgen___024root::~Vimgen___024root() {
}
