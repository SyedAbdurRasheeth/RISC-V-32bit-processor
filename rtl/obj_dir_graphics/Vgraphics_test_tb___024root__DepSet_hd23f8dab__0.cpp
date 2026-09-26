// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgraphics_test_tb.h for the primary calling header

#include "Vgraphics_test_tb__pch.h"
#include "Vgraphics_test_tb__Syms.h"
#include "Vgraphics_test_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgraphics_test_tb___024root___dump_triggers__act(Vgraphics_test_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vgraphics_test_tb___024root___eval_triggers__act(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.graphics_test_tb__DOT__clk_100mhz) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__clk_100mhz__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.graphics_test_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz__0))));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__clk_100mhz__0 
        = vlSelfRef.graphics_test_tb__DOT__clk_100mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__rst__0 
        = vlSelfRef.graphics_test_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz__0 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgraphics_test_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
