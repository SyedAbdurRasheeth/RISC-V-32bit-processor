// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb.h for the primary calling header

#include "Vcpu_top_tb__pch.h"
#include "Vcpu_top_tb___024root.h"

VL_ATTR_COLD void Vcpu_top_tb___024root___eval_initial__TOP(Vcpu_top_tb___024root* vlSelf);
VlCoroutine Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_top_tb___024root* vlSelf);
VlCoroutine Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_top_tb___024root* vlSelf);

void Vcpu_top_tb___024root___eval_initial(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_top_tb___024root___eval_initial__TOP(vlSelf);
    Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__clk__0 
        = vlSelfRef.cpu_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__rst__0 
        = vlSelfRef.cpu_top_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/cpu_top_tb.v", 
                                             17);
        vlSelfRef.cpu_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_top_tb__DOT__clk)));
    }
}

void Vcpu_top_tb___024root___eval_act(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcpu_top_tb___024root___nba_sequent__TOP__0(Vcpu_top_tb___024root* vlSelf);
void Vcpu_top_tb___024root___nba_sequent__TOP__1(Vcpu_top_tb___024root* vlSelf);
void Vcpu_top_tb___024root___nba_comb__TOP__0(Vcpu_top_tb___024root* vlSelf);

void Vcpu_top_tb___024root___eval_nba(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_top_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_top_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vcpu_top_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_top_tb___024root___nba_sequent__TOP__0(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyVal__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyDim0__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlySet__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    // Body
    __VdlySet__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rd)))) {
        __VdlyVal__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result;
        __VdlyDim0__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = vlSelfRef.cpu_top_tb__DOT__dut__DOT__rd;
        __VdlySet__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0) {
        vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[__VdlyDim0__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__cpu_top_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb__ConstPool__TABLE_hc772fa1b_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb__ConstPool__TABLE_h0ec8ff86_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_top_tb__ConstPool__TABLE_h9f17eced_0;

VL_INLINE_OPT void Vcpu_top_tb___024root___nba_sequent__TOP__1(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__instruction;
    cpu_top_tb__DOT__dut__DOT__instruction = 0;
    CData/*6:0*/ cpu_top_tb__DOT__dut__DOT__opcode;
    cpu_top_tb__DOT__dut__DOT__opcode = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc = ((IData)(vlSelfRef.cpu_top_tb__DOT__rst)
                                                ? 0U
                                                : ((IData)(4U) 
                                                   + vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc));
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rd = (0x1fU 
                                               & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                                  [
                                                  (0x3ffU 
                                                   & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                  >> 7U));
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1 = (0x1fU 
                                                & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                                   [
                                                   (0x3ffU 
                                                    & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0xfU));
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2 = (0x1fU 
                                                & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                                   [
                                                   (0x3ffU 
                                                    & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x14U));
    cpu_top_tb__DOT__dut__DOT__instruction = vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
        [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                    >> 2U))];
    cpu_top_tb__DOT__dut__DOT__opcode = (0x7fU & vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                         [(0x3ffU & 
                                           (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                            >> 2U))]);
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__im_out = (
                                                   (0x40U 
                                                    & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0x14U) 
                                                          | (((0xff000U 
                                                               & cpu_top_tb__DOT__dut__DOT__instruction) 
                                                              | (0x800U 
                                                                 & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                    >> 9U))) 
                                                             | (0x7feU 
                                                                & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                   >> 0x14U))))
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (cpu_top_tb__DOT__dut__DOT__instruction 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | ((0x800U 
                                                              & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                      >> 7U)))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 0U)
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (0xfffff000U 
                                                          & cpu_top_tb__DOT__dut__DOT__instruction)
                                                          : 0U)
                                                         : 0U)
                                                        : 0U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | ((0xfe0U 
                                                              & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                   >> 7U))))
                                                          : 0U)
                                                         : 0U))))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((8U 
                                                       & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (0xfffff000U 
                                                          & cpu_top_tb__DOT__dut__DOT__instruction)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (cpu_top_tb__DOT__dut__DOT__instruction 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(cpu_top_tb__DOT__dut__DOT__opcode))
                                                          ? 
                                                         (((- (IData)(
                                                                      (cpu_top_tb__DOT__dut__DOT__instruction 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (cpu_top_tb__DOT__dut__DOT__instruction 
                                                             >> 0x14U))
                                                          : 0U)
                                                         : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                               [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 5U)) 
                                             | (IData)(cpu_top_tb__DOT__dut__DOT__opcode)));
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_src = 
        Vcpu_top_tb__ConstPool__TABLE_hc772fa1b_0[__Vtableidx1];
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__reg_write 
        = Vcpu_top_tb__ConstPool__TABLE_h0ec8ff86_0
        [__Vtableidx1];
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl = 
        Vcpu_top_tb__ConstPool__TABLE_h9f17eced_0[__Vtableidx1];
}

VL_INLINE_OPT void Vcpu_top_tb___024root___nba_comb__TOP__0(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__rs1_rdata;
    cpu_top_tb__DOT__dut__DOT__rs1_rdata = 0;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__alu_b;
    cpu_top_tb__DOT__dut__DOT__alu_b = 0;
    // Body
    cpu_top_tb__DOT__dut__DOT__rs1_rdata = ((0U == (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1))
                                             ? 0U : 
                                            vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                                            [vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1]);
    cpu_top_tb__DOT__dut__DOT__alu_b = ((IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_src)
                                         ? vlSelfRef.cpu_top_tb__DOT__dut__DOT__im_out
                                         : ((0U == (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2))
                                             ? 0U : 
                                            vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                                            [vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2]));
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                                  ? ((cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                                      < cpu_top_tb__DOT__dut__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, cpu_top_tb__DOT__dut__DOT__rs1_rdata, cpu_top_tb__DOT__dut__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, cpu_top_tb__DOT__dut__DOT__rs1_rdata, 
                                      (0x1fU & cpu_top_tb__DOT__dut__DOT__alu_b))
                     : (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        >> (0x1fU & cpu_top_tb__DOT__dut__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                     ? (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        << (0x1fU & cpu_top_tb__DOT__dut__DOT__alu_b))
                     : (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        ^ cpu_top_tb__DOT__dut__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                     ? (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        | cpu_top_tb__DOT__dut__DOT__alu_b)
                     : (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        & cpu_top_tb__DOT__dut__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl))
                     ? (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        - cpu_top_tb__DOT__dut__DOT__alu_b)
                     : (cpu_top_tb__DOT__dut__DOT__rs1_rdata 
                        + cpu_top_tb__DOT__dut__DOT__alu_b)))));
}

void Vcpu_top_tb___024root___timing_resume(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_top_tb___024root___eval_triggers__act(Vcpu_top_tb___024root* vlSelf);

bool Vcpu_top_tb___024root___eval_phase__act(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_top_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu_top_tb___024root___timing_resume(vlSelf);
        Vcpu_top_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_top_tb___024root___eval_phase__nba(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_top_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb___024root___dump_triggers__nba(Vcpu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb___024root___dump_triggers__act(Vcpu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top_tb___024root___eval(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval\n"); );
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
            Vcpu_top_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_top_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_top_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/cpu_top_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu_top_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu_top_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_top_tb___024root___eval_debug_assertions(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
