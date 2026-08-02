// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VL_ATTR_COLD void Vregfile_tb___024root___eval_initial__TOP(Vregfile_tb___024root* vlSelf);
VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf);
VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_initial(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelfRef.regfile_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.regfile_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/regfile_tb.v", 
                                             30);
        vlSelfRef.regfile_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.regfile_tb__DOT__clk)));
    }
}

void Vregfile_tb___024root___act_comb__TOP__0(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_act(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vregfile_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile_tb___024root___act_comb__TOP__0(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.regfile_tb__DOT__rs1_rdata = ((0U == (IData)(vlSelfRef.regfile_tb__DOT__rs1_addr))
                                             ? 0U : 
                                            vlSelfRef.regfile_tb__DOT__dut__DOT__regs
                                            [vlSelfRef.regfile_tb__DOT__rs1_addr]);
    vlSelfRef.regfile_tb__DOT__rs2_rdata = ((0U == (IData)(vlSelfRef.regfile_tb__DOT__rs2_addr))
                                             ? 0U : 
                                            vlSelfRef.regfile_tb__DOT__dut__DOT__regs
                                            [vlSelfRef.regfile_tb__DOT__rs2_addr]);
}

void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_nba(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__regfile_tb__DOT__dut__DOT__regs__v0;
    __VdlyVal__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__regfile_tb__DOT__dut__DOT__regs__v0;
    __VdlyDim0__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__regfile_tb__DOT__dut__DOT__regs__v0;
    __VdlySet__regfile_tb__DOT__dut__DOT__regs__v0 = 0;
    // Body
    __VdlySet__regfile_tb__DOT__dut__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.regfile_tb__DOT__rd_we) 
         & (0U != (IData)(vlSelfRef.regfile_tb__DOT__rd_addr)))) {
        __VdlyVal__regfile_tb__DOT__dut__DOT__regs__v0 
            = vlSelfRef.regfile_tb__DOT__rd_wdata;
        __VdlyDim0__regfile_tb__DOT__dut__DOT__regs__v0 
            = vlSelfRef.regfile_tb__DOT__rd_addr;
        __VdlySet__regfile_tb__DOT__dut__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__regfile_tb__DOT__dut__DOT__regs__v0) {
        vlSelfRef.regfile_tb__DOT__dut__DOT__regs[__VdlyDim0__regfile_tb__DOT__dut__DOT__regs__v0] 
            = __VdlyVal__regfile_tb__DOT__dut__DOT__regs__v0;
    }
}

void Vregfile_tb___024root___timing_resume(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h14db129c__0.resume(
                                                   "@(posedge regfile_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregfile_tb___024root___timing_commit(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h14db129c__0.commit(
                                                   "@(posedge regfile_tb.clk)");
    }
}

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf);

bool Vregfile_tb___024root___eval_phase__act(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile_tb___024root___eval_triggers__act(vlSelf);
    Vregfile_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vregfile_tb___024root___timing_resume(vlSelf);
        Vregfile_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile_tb___024root___eval_phase__nba(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregfile_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/regfile_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vregfile_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/regfile_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vregfile_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vregfile_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile_tb___024root___eval_debug_assertions(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
