// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_timing_tb.h for the primary calling header

#include "Vvga_timing_tb__pch.h"
#include "Vvga_timing_tb___024root.h"

VL_ATTR_COLD void Vvga_timing_tb___024root___eval_static(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvga_timing_tb___024root___eval_final(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvga_timing_tb___024root___eval_settle(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_timing_tb___024root___dump_triggers__act(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge vga_timing_tb.clk_25mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge vga_timing_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_timing_tb___024root___dump_triggers__nba(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge vga_timing_tb.clk_25mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge vga_timing_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvga_timing_tb___024root___ctor_var_reset(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->vga_timing_tb__DOT__clk_25mhz = VL_RAND_RESET_I(1);
    vlSelf->vga_timing_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->vga_timing_tb__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->vga_timing_tb__DOT__dut__DOT__h_count = VL_RAND_RESET_I(10);
    vlSelf->vga_timing_tb__DOT__dut__DOT__v_count = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__vga_timing_tb__DOT__clk_25mhz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__vga_timing_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
