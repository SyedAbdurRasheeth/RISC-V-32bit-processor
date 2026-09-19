// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebug_tb.h for the primary calling header

#include "Vdebug_tb__pch.h"
#include "Vdebug_tb___024root.h"

VL_ATTR_COLD void Vdebug_tb___024root___eval_initial__TOP(Vdebug_tb___024root* vlSelf);
VlCoroutine Vdebug_tb___024root___eval_initial__TOP__Vtiming__0(Vdebug_tb___024root* vlSelf);
VlCoroutine Vdebug_tb___024root___eval_initial__TOP__Vtiming__1(Vdebug_tb___024root* vlSelf);

void Vdebug_tb___024root___eval_initial(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdebug_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vdebug_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdebug_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__clk__0 
        = vlSelfRef.debug_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__debug_tb__DOT__rst__0 
        = vlSelfRef.debug_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vdebug_tb___024root___eval_initial__TOP__Vtiming__0(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debug_tb__DOT__clk = 0U;
    vlSelfRef.debug_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/debug_tb.v", 
                                         30);
    vlSelfRef.debug_tb__DOT__rst = 0U;
    VL_WRITEF_NX("----------------------------------------\nDEBUG OUTPUT\n----------------------------------------\n",0);
    vlSelfRef.debug_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelfRef.debug_tb__DOT__i)) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/debug_tb.v", 
                                             39);
        if (VL_UNLIKELY(((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem_write) 
                         & (0xf0000000U == vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)))) {
            VL_WRITEF_NX("%c",0,8,((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs2))
                                    ? 0U : (0xffU & 
                                            vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
                                            [vlSelfRef.debug_tb__DOT__dut__DOT__rs2])));
        }
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/debug_tb.v", 
                                             46);
        vlSelfRef.debug_tb__DOT__i = ((IData)(1U) + vlSelfRef.debug_tb__DOT__i);
    }
    VL_WRITEF_NX("\n\n----------------------------------------\nUART TEST FINISHED\n----------------------------------------\n",0);
    VL_FINISH_MT("tb/debug_tb.v", 55, "");
}

VL_INLINE_OPT VlCoroutine Vdebug_tb___024root___eval_initial__TOP__Vtiming__1(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/debug_tb.v", 
                                             21);
        vlSelfRef.debug_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.debug_tb__DOT__clk)));
    }
}

void Vdebug_tb___024root___eval_act(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdebug_tb___024root___nba_sequent__TOP__0(Vdebug_tb___024root* vlSelf);
void Vdebug_tb___024root___nba_sequent__TOP__1(Vdebug_tb___024root* vlSelf);
void Vdebug_tb___024root___nba_comb__TOP__0(Vdebug_tb___024root* vlSelf);

void Vdebug_tb___024root___eval_nba(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdebug_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdebug_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vdebug_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdebug_tb___024root___nba_sequent__TOP__0(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyVal__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyDim0__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlySet__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    SData/*11:0*/ __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    // Body
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 0U;
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 0U;
    __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 0U;
    __VdlySet__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem_write) 
         & (0xf0000000U != vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))) {
        if ((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result);
            __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xffU & vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result);
            __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1 = 1U;
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xfffU & ((IData)(1U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result));
        } else if ((2U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))) {
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xffU & vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result);
            __VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3 = 1U;
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xffU & (vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xfffU & ((IData)(1U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result));
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xffU & (vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata 
                            >> 0x10U));
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xfffU & ((IData)(2U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result));
            __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6 
                = (vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata 
                   >> 0x18U);
            __VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6 
                = (0xfffU & ((IData)(3U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result));
        }
    }
    if (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rd)))) {
        __VdlyVal__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = ((1U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel))
                ? vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata
                : ((2U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelfRef.debug_tb__DOT__dut__DOT__pc)
                    : vlSelfRef.debug_tb__DOT__dut__DOT__alu_result));
        __VdlyDim0__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 
            = vlSelfRef.debug_tb__DOT__dut__DOT__rd;
        __VdlySet__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0) {
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v0;
    }
    if (__VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1) {
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v1;
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v2;
    }
    if (__VdlySet__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3) {
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v3;
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v4;
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v5;
        vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__mem__DOT__mem__v6;
    }
    if (__VdlySet__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0) {
        vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[__VdlyDim0__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__debug_tb__DOT__dut__DOT__rf__DOT__regs__v0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vdebug_tb__ConstPool__TABLE_heca81d36_0;

VL_INLINE_OPT void Vdebug_tb___024root___nba_sequent__TOP__1(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.debug_tb__DOT__dut__DOT__pc = ((IData)(vlSelfRef.debug_tb__DOT__rst)
                                              ? 0U : vlSelfRef.debug_tb__DOT__dut__DOT__next_pc);
    vlSelfRef.debug_tb__DOT__dut__DOT__rd = (0x1fU 
                                             & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                [(0x3ffU 
                                                  & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 7U));
    vlSelfRef.debug_tb__DOT__dut__DOT__rs1 = (0x1fU 
                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 0xfU));
    vlSelfRef.debug_tb__DOT__dut__DOT__rs2 = (0x1fU 
                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 0x14U));
    vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
        = vlSelfRef.debug_tb__DOT__dut__DOT__imem[(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))];
    vlSelfRef.debug_tb__DOT__dut__DOT__funct3 = (7U 
                                                 & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                    [
                                                    (0x3ffU 
                                                     & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 0xcU));
    vlSelfRef.debug_tb__DOT__dut__DOT__opcode = (0x7fU 
                                                 & vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))]);
    vlSelfRef.debug_tb__DOT__dut__DOT__im_out = ((0x40U 
                                                  & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0x14U) 
                                                        | (((0xff000U 
                                                             & vlSelfRef.debug_tb__DOT__dut__DOT__instruction) 
                                                            | (0x800U 
                                                               & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                  >> 9U))) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x14U))))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                    >> 7U)))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.debug_tb__DOT__dut__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.debug_tb__DOT__dut__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                               [(0x3ffU & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode)));
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_src = Vdebug_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__reg_write = 
        Vdebug_tb__ConstPool__TABLE_he6d0abef_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl = Vdebug_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_read = Vdebug_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_write = 
        Vdebug_tb__ConstPool__TABLE_h77df0047_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel = Vdebug_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__branch = Vdebug_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__jump = Vdebug_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__jalr = Vdebug_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel = 
        Vdebug_tb__ConstPool__TABLE_heca81d36_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
           + vlSelfRef.debug_tb__DOT__dut__DOT__pc);
}

VL_INLINE_OPT void Vdebug_tb___024root___nba_comb__TOP__0(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata = 
        ((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs1))
          ? 0U : vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
         [vlSelfRef.debug_tb__DOT__dut__DOT__rs1]);
    vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata = 
        ((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs2))
          ? 0U : vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
         [vlSelfRef.debug_tb__DOT__dut__DOT__rs2]);
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_a = ((1U 
                                                 == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel))
                                                 ? vlSelfRef.debug_tb__DOT__dut__DOT__pc
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel))
                                                  ? 0U
                                                  : vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata));
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_b = ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_src)
                                                 ? vlSelfRef.debug_tb__DOT__dut__DOT__im_out
                                                 : vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata);
    vlSelfRef.debug_tb__DOT__dut__DOT__next_pc = ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jump)
                                                   ? 
                                                  ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jalr)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
                                                       + vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata))
                                                    : vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1)
                                                   : 
                                                  (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__branch) 
                                                    & ((4U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                          ? 
                                                         (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                          >= vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                          : 
                                                         (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                          < vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                          ? 
                                                         VL_GTES_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                          : 
                                                         VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))
                                                        : 
                                                       ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                                             >> 1U))) 
                                                        && ((1U 
                                                             & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                             ? 
                                                            (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                             != vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                             : 
                                                            (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                             == vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))))
                                                    ? vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.debug_tb__DOT__dut__DOT__pc)));
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_result = 
        ((8U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
          ? ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
              ? 0U : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                       ? 0U : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                                ? ((vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                                    < vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                                    ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__alu_a, vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                                                   ? 1U
                                                   : 0U))))
          : ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
              ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                  ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? VL_SHIFTRS_III(32,32,5, vlSelfRef.debug_tb__DOT__dut__DOT__alu_a, 
                                       (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         >> (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))
                  : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         << (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         ^ vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))
              : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                  ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         | vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                  : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         - vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         + vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))));
    vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0 
        = ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
            [(0xfffU & ((IData)(1U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
            << 8U) | vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
           [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]);
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata = 0U;
    if (vlSelfRef.debug_tb__DOT__dut__DOT__mem_read) {
        vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                             ? (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0)
                             : vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                        ? 0U : ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]))));
    }
}

void Vdebug_tb___024root___timing_resume(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdebug_tb___024root___eval_triggers__act(Vdebug_tb___024root* vlSelf);

bool Vdebug_tb___024root___eval_phase__act(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdebug_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdebug_tb___024root___timing_resume(vlSelf);
        Vdebug_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdebug_tb___024root___eval_phase__nba(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdebug_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__nba(Vdebug_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__act(Vdebug_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdebug_tb___024root___eval(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval\n"); );
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
            Vdebug_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/debug_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdebug_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/debug_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdebug_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdebug_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdebug_tb___024root___eval_debug_assertions(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
