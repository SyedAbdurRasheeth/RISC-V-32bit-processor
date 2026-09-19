// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_timing_tb.h for the primary calling header

#include "Vvga_timing_tb__pch.h"
#include "Vvga_timing_tb__Syms.h"
#include "Vvga_timing_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_timing_tb___024root___dump_triggers__act(Vvga_timing_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_timing_tb___024root___eval_triggers__act(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.vga_timing_tb__DOT__clk_25mhz) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__clk_25mhz__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.vga_timing_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__clk_25mhz__0 
        = vlSelfRef.vga_timing_tb__DOT__clk_25mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__rst__0 
        = vlSelfRef.vga_timing_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga_timing_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
