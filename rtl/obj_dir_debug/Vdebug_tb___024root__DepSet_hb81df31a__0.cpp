// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebug_tb.h for the primary calling header

#include "Vdebug_tb__pch.h"
#include "Vdebug_tb__Syms.h"
#include "Vdebug_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__act(Vdebug_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdebug_tb___024root___eval_triggers__act(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.debug_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.debug_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__clk__0 
        = vlSelfRef.debug_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__rst__0 
        = vlSelfRef.debug_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdebug_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
