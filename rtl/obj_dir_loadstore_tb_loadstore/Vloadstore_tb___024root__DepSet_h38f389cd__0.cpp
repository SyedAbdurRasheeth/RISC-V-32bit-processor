// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vloadstore_tb.h for the primary calling header

#include "Vloadstore_tb__pch.h"
#include "Vloadstore_tb___024root.h"

VL_ATTR_COLD void Vloadstore_tb___024root___eval_initial__TOP(Vloadstore_tb___024root* vlSelf);
VlCoroutine Vloadstore_tb___024root___eval_initial__TOP__Vtiming__0(Vloadstore_tb___024root* vlSelf);
VlCoroutine Vloadstore_tb___024root___eval_initial__TOP__Vtiming__1(Vloadstore_tb___024root* vlSelf);

void Vloadstore_tb___024root___eval_initial(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vloadstore_tb___024root___eval_initial__TOP(vlSelf);
    Vloadstore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vloadstore_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__clk__0 
        = vlSelfRef.loadstore_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__rst__0 
        = vlSelfRef.loadstore_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vloadstore_tb___024root___eval_initial__TOP__Vtiming__1(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/loadstore_tb.v", 
                                             17);
        vlSelfRef.loadstore_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.loadstore_tb__DOT__clk)));
    }
}

void Vloadstore_tb___024root___eval_act(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vloadstore_tb___024root___nba_sequent__TOP__0(Vloadstore_tb___024root* vlSelf);
void Vloadstore_tb___024root___nba_sequent__TOP__1(Vloadstore_tb___024root* vlSelf);
void Vloadstore_tb___024root___nba_comb__TOP__0(Vloadstore_tb___024root* vlSelf);

void Vloadstore_tb___024root___eval_nba(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vloadstore_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vloadstore_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vloadstore_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vloadstore_tb___024root___nba_sequent__TOP__0(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlySet__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    SData/*11:0*/ __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    // Body
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0U;
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0U;
    __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0U;
    __VdlySet__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_write) {
        if ((0U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result);
            __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result);
            __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 1U;
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xfffU & ((IData)(1U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result));
        } else if ((2U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result);
            __VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 1U;
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xfffU & ((IData)(1U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result));
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata 
                            >> 0x10U));
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xfffU & ((IData)(2U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result));
            __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6 
                = (vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata 
                   >> 0x18U);
            __VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6 
                = (0xfffU & ((IData)(3U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result));
        }
    }
    if (((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__rd)))) {
        __VdlyVal__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = ((1U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__wb_sel))
                ? vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_rdata
                : ((2U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__pc)
                    : vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result));
        __VdlyDim0__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = vlSelfRef.loadstore_tb__DOT__dut__DOT__rd;
        __VdlySet__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0) {
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    }
    if (__VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1) {
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v1;
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    }
    if (__VdlySet__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3) {
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v3;
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v4;
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v5;
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    }
    if (__VdlySet__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0) {
        vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs[__VdlyDim0__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__loadstore_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vloadstore_tb__ConstPool__TABLE_heca81d36_0;

VL_INLINE_OPT void Vloadstore_tb___024root___nba_sequent__TOP__1(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ loadstore_tb__DOT__dut__DOT__instruction;
    loadstore_tb__DOT__dut__DOT__instruction = 0;
    CData/*6:0*/ loadstore_tb__DOT__dut__DOT__opcode;
    loadstore_tb__DOT__dut__DOT__opcode = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.loadstore_tb__DOT__dut__DOT__pc = ((IData)(vlSelfRef.loadstore_tb__DOT__rst)
                                                  ? 0U
                                                  : vlSelfRef.loadstore_tb__DOT__dut__DOT__next_pc);
    vlSelfRef.loadstore_tb__DOT__dut__DOT__rd = (0x1fU 
                                                 & (vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
                                                    [
                                                    (0x3ffU 
                                                     & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 7U));
    vlSelfRef.loadstore_tb__DOT__dut__DOT__rs1 = (0x1fU 
                                                  & (vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
                                                     [
                                                     (0x3ffU 
                                                      & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                                                         >> 2U))] 
                                                     >> 0xfU));
    vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2 = (0x1fU 
                                                  & (vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
                                                     [
                                                     (0x3ffU 
                                                      & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                                                         >> 2U))] 
                                                     >> 0x14U));
    loadstore_tb__DOT__dut__DOT__instruction = vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
        [(0x3ffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                    >> 2U))];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3 = 
        (7U & (vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
               [(0x3ffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                           >> 2U))] >> 0xcU));
    loadstore_tb__DOT__dut__DOT__opcode = (0x7fU & 
                                           vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
                                           [(0x3ffU 
                                             & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                                                >> 2U))]);
    vlSelfRef.loadstore_tb__DOT__dut__DOT__im_out = 
        ((0x40U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
          ? ((0x20U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
              ? ((0x10U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                  ? 0U : ((8U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                           ? ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                       ? (((- (IData)(
                                                      (loadstore_tb__DOT__dut__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | (((0xff000U 
                                               & loadstore_tb__DOT__dut__DOT__instruction) 
                                              | (0x800U 
                                                 & (loadstore_tb__DOT__dut__DOT__instruction 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (loadstore_tb__DOT__dut__DOT__instruction 
                                                   >> 0x14U))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                       ? (((- (IData)(
                                                      (loadstore_tb__DOT__dut__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (loadstore_tb__DOT__dut__DOT__instruction 
                                             >> 0x14U))
                                       : 0U) : 0U) : 
                              ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                    ? (((- (IData)(
                                                   (loadstore_tb__DOT__dut__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (loadstore_tb__DOT__dut__DOT__instruction 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (loadstore_tb__DOT__dut__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (loadstore_tb__DOT__dut__DOT__instruction 
                                                 >> 7U)))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
              ? ((0x10U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                  ? ((8U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                       ? (0xfffff000U 
                                          & loadstore_tb__DOT__dut__DOT__instruction)
                                       : 0U) : 0U) : 0U))
                  : ((8U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                               ? 0U : ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                        ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                            ? (((- (IData)(
                                                           (loadstore_tb__DOT__dut__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (loadstore_tb__DOT__dut__DOT__instruction 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (loadstore_tb__DOT__dut__DOT__instruction 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                  ? ((8U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                       ? (0xfffff000U 
                                          & loadstore_tb__DOT__dut__DOT__instruction)
                                       : 0U) : 0U) : 
                              ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                ? ((1U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                    ? (((- (IData)(
                                                   (loadstore_tb__DOT__dut__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (loadstore_tb__DOT__dut__DOT__instruction 
                                        >> 0x14U)) : 0U)
                                : 0U))) : ((8U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                            ? 0U : 
                                           ((4U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                             ? 0U : 
                                            ((2U & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(loadstore_tb__DOT__dut__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (loadstore_tb__DOT__dut__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (loadstore_tb__DOT__dut__DOT__instruction 
                                                     >> 0x14U))
                                                  : 0U)
                                              : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.loadstore_tb__DOT__dut__DOT__imem
                               [(0x3ffU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(loadstore_tb__DOT__dut__DOT__opcode)));
    vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_src 
        = Vloadstore_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__reg_write 
        = Vloadstore_tb__ConstPool__TABLE_he6d0abef_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl 
        = Vloadstore_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_read 
        = Vloadstore_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_write 
        = Vloadstore_tb__ConstPool__TABLE_h77df0047_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__wb_sel = 
        Vloadstore_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__branch = 
        Vloadstore_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__jump = Vloadstore_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__jalr = Vloadstore_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_a_sel 
        = Vloadstore_tb__ConstPool__TABLE_heca81d36_0
        [__Vtableidx1];
    vlSelfRef.loadstore_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.loadstore_tb__DOT__dut__DOT__im_out 
           + vlSelfRef.loadstore_tb__DOT__dut__DOT__pc);
}

VL_INLINE_OPT void Vloadstore_tb___024root___nba_comb__TOP__0(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ loadstore_tb__DOT__dut__DOT__rs1_rdata;
    loadstore_tb__DOT__dut__DOT__rs1_rdata = 0;
    IData/*31:0*/ loadstore_tb__DOT__dut__DOT__alu_a;
    loadstore_tb__DOT__dut__DOT__alu_a = 0;
    IData/*31:0*/ loadstore_tb__DOT__dut__DOT__alu_b;
    loadstore_tb__DOT__dut__DOT__alu_b = 0;
    SData/*15:0*/ loadstore_tb__DOT__dut__DOT__mem__DOT__half0;
    loadstore_tb__DOT__dut__DOT__mem__DOT__half0 = 0;
    // Body
    loadstore_tb__DOT__dut__DOT__rs1_rdata = ((0U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__rs1))
                                               ? 0U
                                               : vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                                              [vlSelfRef.loadstore_tb__DOT__dut__DOT__rs1]);
    vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata 
        = ((0U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2))
            ? 0U : vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
           [vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2]);
    loadstore_tb__DOT__dut__DOT__alu_a = ((1U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_a_sel))
                                           ? vlSelfRef.loadstore_tb__DOT__dut__DOT__pc
                                           : ((2U == (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_a_sel))
                                               ? 0U
                                               : loadstore_tb__DOT__dut__DOT__rs1_rdata));
    loadstore_tb__DOT__dut__DOT__alu_b = ((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_src)
                                           ? vlSelfRef.loadstore_tb__DOT__dut__DOT__im_out
                                           : vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata);
    vlSelfRef.loadstore_tb__DOT__dut__DOT__next_pc 
        = ((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__jump)
            ? ((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__jalr)
                ? (0xfffffffeU & (vlSelfRef.loadstore_tb__DOT__dut__DOT__im_out 
                                  + loadstore_tb__DOT__dut__DOT__rs1_rdata))
                : vlSelfRef.loadstore_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1)
            : (((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__branch) 
                & ((4U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                            ? (loadstore_tb__DOT__dut__DOT__rs1_rdata 
                               >= vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata)
                            : (loadstore_tb__DOT__dut__DOT__rs1_rdata 
                               < vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata))
                        : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                            ? VL_GTES_III(32, loadstore_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata)
                            : VL_LTS_III(32, loadstore_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata)))
                    : ((1U & (~ ((IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3) 
                                 >> 1U))) && ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                                               ? (loadstore_tb__DOT__dut__DOT__rs1_rdata 
                                                  != vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata)
                                               : (loadstore_tb__DOT__dut__DOT__rs1_rdata 
                                                  == vlSelfRef.loadstore_tb__DOT__dut__DOT__rs2_rdata)))))
                ? vlSelfRef.loadstore_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1
                : ((IData)(4U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__pc)));
    vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                                  ? ((loadstore_tb__DOT__dut__DOT__alu_a 
                                      < loadstore_tb__DOT__dut__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, loadstore_tb__DOT__dut__DOT__alu_a, loadstore_tb__DOT__dut__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, loadstore_tb__DOT__dut__DOT__alu_a, 
                                      (0x1fU & loadstore_tb__DOT__dut__DOT__alu_b))
                     : (loadstore_tb__DOT__dut__DOT__alu_a 
                        >> (0x1fU & loadstore_tb__DOT__dut__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                     ? (loadstore_tb__DOT__dut__DOT__alu_a 
                        << (0x1fU & loadstore_tb__DOT__dut__DOT__alu_b))
                     : (loadstore_tb__DOT__dut__DOT__alu_a 
                        ^ loadstore_tb__DOT__dut__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                     ? (loadstore_tb__DOT__dut__DOT__alu_a 
                        | loadstore_tb__DOT__dut__DOT__alu_b)
                     : (loadstore_tb__DOT__dut__DOT__alu_a 
                        & loadstore_tb__DOT__dut__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_ctrl))
                     ? (loadstore_tb__DOT__dut__DOT__alu_a 
                        - loadstore_tb__DOT__dut__DOT__alu_b)
                     : (loadstore_tb__DOT__dut__DOT__alu_a 
                        + loadstore_tb__DOT__dut__DOT__alu_b)))));
    loadstore_tb__DOT__dut__DOT__mem__DOT__half0 = 
        ((vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
          [(0xfffU & ((IData)(1U) + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result))] 
          << 8U) | vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
         [(0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result)]);
    vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_rdata = 0U;
    if (vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_read) {
        vlSelfRef.loadstore_tb__DOT__dut__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                             ? (IData)(loadstore_tb__DOT__dut__DOT__mem__DOT__half0)
                             : vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                        ? 0U : ((vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(loadstore_tb__DOT__dut__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.loadstore_tb__DOT__dut__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(loadstore_tb__DOT__dut__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.loadstore_tb__DOT__dut__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.loadstore_tb__DOT__dut__DOT__alu_result)]))));
    }
}

void Vloadstore_tb___024root___timing_resume(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vloadstore_tb___024root___eval_triggers__act(Vloadstore_tb___024root* vlSelf);

bool Vloadstore_tb___024root___eval_phase__act(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vloadstore_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vloadstore_tb___024root___timing_resume(vlSelf);
        Vloadstore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vloadstore_tb___024root___eval_phase__nba(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vloadstore_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloadstore_tb___024root___dump_triggers__nba(Vloadstore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vloadstore_tb___024root___dump_triggers__act(Vloadstore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vloadstore_tb___024root___eval(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval\n"); );
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
            Vloadstore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/loadstore_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vloadstore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/loadstore_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vloadstore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vloadstore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vloadstore_tb___024root___eval_debug_assertions(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
