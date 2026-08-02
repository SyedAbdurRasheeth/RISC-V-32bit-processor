// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VL_ATTR_COLD void Vregfile_tb___024root___eval_static(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_initial__TOP(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[1U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[2U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[3U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[4U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[5U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[6U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[7U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[8U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[9U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xaU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xbU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xcU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xdU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xeU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0xfU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x10U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x11U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x12U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x13U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x14U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x15U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x16U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x17U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x18U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x19U] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1aU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1bU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1cU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1dU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1eU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0x1fU] = 0U;
    vlSelfRef.regfile_tb__DOT__dut__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_final(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__stl(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregfile_tb___024root___eval_phase__stl(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD void Vregfile_tb___024root___eval_settle(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_settle\n"); );
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
            Vregfile_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/regfile_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregfile_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__stl(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__stl\n"); );
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

void Vregfile_tb___024root___act_comb__TOP__0(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD void Vregfile_tb___024root___eval_stl(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vregfile_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_triggers__stl(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregfile_tb___024root___eval_phase__stl(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregfile_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vregfile_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile_tb___024root___ctor_var_reset(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->regfile_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__rd_we = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__rd_wdata = VL_RAND_RESET_I(32);
    vlSelf->regfile_tb__DOT__rs1_rdata = VL_RAND_RESET_I(32);
    vlSelf->regfile_tb__DOT__rs2_rdata = VL_RAND_RESET_I(32);
    vlSelf->regfile_tb__DOT__dut__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile_tb__DOT__dut__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
