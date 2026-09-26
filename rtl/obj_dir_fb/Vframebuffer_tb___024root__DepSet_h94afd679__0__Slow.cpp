// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframebuffer_tb.h for the primary calling header

#include "Vframebuffer_tb__pch.h"
#include "Vframebuffer_tb___024root.h"

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_static(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_final(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__stl(Vframebuffer_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vframebuffer_tb___024root___eval_phase__stl(Vframebuffer_tb___024root* vlSelf);

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_settle(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vframebuffer_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/framebuffer_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vframebuffer_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__stl(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vframebuffer_tb___024root___stl_sequent__TOP__0(Vframebuffer_tb___024root* vlSelf);
VL_ATTR_COLD void Vframebuffer_tb___024root____Vm_traceActivitySetAll(Vframebuffer_tb___024root* vlSelf);

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_stl(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vframebuffer_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vframebuffer_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vframebuffer_tb___024root___stl_sequent__TOP__0(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr 
        = (0x7fffU & (((IData)(0xa0U) * (0x7fU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count) 
                                                  >> 2U))) 
                      + (0xffU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count) 
                                  >> 2U))));
}

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_triggers__stl(Vframebuffer_tb___024root* vlSelf);

VL_ATTR_COLD bool Vframebuffer_tb___024root___eval_phase__stl(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vframebuffer_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vframebuffer_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__act(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge framebuffer_tb.dut.clk_25mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge framebuffer_tb.clk_100mhz)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge framebuffer_tb.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__nba(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge framebuffer_tb.dut.clk_25mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge framebuffer_tb.clk_100mhz)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge framebuffer_tb.rst)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vframebuffer_tb___024root____Vm_traceActivitySetAll(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vframebuffer_tb___024root___ctor_var_reset(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->framebuffer_tb__DOT__clk_100mhz = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__fb_waddr = VL_RAND_RESET_I(15);
    vlSelf->framebuffer_tb__DOT__fb_wdata = VL_RAND_RESET_I(8);
    vlSelf->framebuffer_tb__DOT__fb_we = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->framebuffer_tb__DOT__red_found = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__green_found = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__blue_found = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__dut__DOT__clk_25mhz = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__dut__DOT__fb_raddr = VL_RAND_RESET_I(15);
    vlSelf->framebuffer_tb__DOT__dut__DOT__fb_pixel = VL_RAND_RESET_I(8);
    vlSelf->framebuffer_tb__DOT__dut__DOT__video_on_d = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__dut__DOT__hsync_d = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__dut__DOT__vsync_d = VL_RAND_RESET_I(1);
    vlSelf->framebuffer_tb__DOT__dut__DOT__divider__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count = VL_RAND_RESET_I(10);
    vlSelf->framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 19200; ++__Vi0) {
        vlSelf->framebuffer_tb__DOT__dut__DOT__fb__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->framebuffer_tb__DOT__dut__DOT__fb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_h1174803a__0 = VL_RAND_RESET_I(8);
    vlSelf->framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_ha980ca89__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__framebuffer_tb__DOT__dut__DOT__clk_25mhz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__framebuffer_tb__DOT__clk_100mhz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__framebuffer_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
