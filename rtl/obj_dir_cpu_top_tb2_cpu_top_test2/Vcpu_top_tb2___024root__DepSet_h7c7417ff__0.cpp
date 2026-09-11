// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb2.h for the primary calling header

#include "Vcpu_top_tb2__pch.h"
#include "Vcpu_top_tb2___024root.h"

VL_ATTR_COLD void Vcpu_top_tb2___024root___eval_initial__TOP(Vcpu_top_tb2___024root* vlSelf);
VlCoroutine Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__0(Vcpu_top_tb2___024root* vlSelf);
VlCoroutine Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__1(Vcpu_top_tb2___024root* vlSelf);

void Vcpu_top_tb2___024root___eval_initial(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_top_tb2___024root___eval_initial__TOP(vlSelf);
    Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb2__DOT__clk__0 
        = vlSelfRef.cpu_top_tb2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb2__DOT__rst__0 
        = vlSelfRef.cpu_top_tb2__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__1(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/cpu_top_tb2.v", 
                                             17);
        vlSelfRef.cpu_top_tb2__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_top_tb2__DOT__clk)));
    }
}

void Vcpu_top_tb2___024root___eval_act(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcpu_top_tb2___024root___nba_sequent__TOP__0(Vcpu_top_tb2___024root* vlSelf);
void Vcpu_top_tb2___024root___nba_sequent__TOP__1(Vcpu_top_tb2___024root* vlSelf);
void Vcpu_top_tb2___024root___nba_comb__TOP__0(Vcpu_top_tb2___024root* vlSelf);

void Vcpu_top_tb2___024root___eval_nba(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_top_tb2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_top_tb2___024root___nba_sequent__TOP__1(vlSelf);
        Vcpu_top_tb2___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_top_tb2___024root___nba_sequent__TOP__0(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    SData/*11:0*/ __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6;
    __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6 = 0;
    // Body
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 = 0U;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 = 0U;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 = 0U;
    __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 = 0U;
    VL_WRITEF_NX("PC=%x INST=%x | rs1=%2# rs1=%x | rs2=%2# rs2=%x | IMM=%x | ALU=%x | MR=%b MW=%b F3=%b | MEM=%x | RD=%2# WB=%x\n",0,
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc,
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction,
                 5,(IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1),
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata,
                 5,(IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2),
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata,
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__im_out,
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result,
                 1,(IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_read),
                 1,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_write,
                 3,(IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3),
                 32,vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_rdata,
                 5,(IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rd),
                 32,((IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_to_reg)
                      ? vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_rdata
                      : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result));
    if (((IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rd)))) {
        __VdlyVal__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 
            = ((IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_to_reg)
                ? vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_rdata
                : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result);
        __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 
            = vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rd;
        __VdlySet__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_write) {
        if ((0U == (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))) {
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 
                = (0xfffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result);
            __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))) {
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 
                = (0xfffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result);
            __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1 = 1U;
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2 
                = (0xfffU & ((IData)(1U) + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result));
        } else if ((2U == (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))) {
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata);
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 
                = (0xfffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result);
            __VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3 = 1U;
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4 
                = (0xfffU & ((IData)(1U) + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result));
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata 
                            >> 0x10U));
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5 
                = (0xfffU & ((IData)(2U) + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result));
            __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6 
                = (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata 
                   >> 0x18U);
            __VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6 
                = (0xfffU & ((IData)(3U) + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result));
        }
    }
    if (__VdlySet__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0) {
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs__v0;
    }
    if (__VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0) {
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v0;
    }
    if (__VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1) {
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v1;
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v2;
    }
    if (__VdlySet__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3) {
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v3;
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v4;
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v5;
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem[__VdlyDim0__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6] 
            = __VdlyVal__cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem__v6;
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb2__ConstPool__TABLE_he4914283_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb2__ConstPool__TABLE_hb7f1d378_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_top_tb2__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb2__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vcpu_top_tb2__ConstPool__TABLE_h77df0047_0;

VL_INLINE_OPT void Vcpu_top_tb2___024root___nba_sequent__TOP__1(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ cpu_top_tb2__DOT__dut__DOT__opcode;
    cpu_top_tb2__DOT__dut__DOT__opcode = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc = ((IData)(vlSelfRef.cpu_top_tb2__DOT__rst)
                                                 ? 0U
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc));
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rd = (0x1fU 
                                                & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
                                                   [
                                                   (0x3ffU 
                                                    & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 7U));
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1 = (0x1fU 
                                                 & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
                                                    [
                                                    (0x3ffU 
                                                     & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 0xfU));
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
        = vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
        [(0x3ffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                    >> 2U))];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2 = (0x1fU 
                                                 & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
                                                    [
                                                    (0x3ffU 
                                                     & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 0x14U));
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3 = 
        (7U & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
               [(0x3ffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                           >> 2U))] >> 0xcU));
    cpu_top_tb2__DOT__dut__DOT__opcode = (0x7fU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
                                          [(0x3ffU 
                                            & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                                               >> 2U))]);
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__im_out = 
        ((0x40U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
          ? ((0x20U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
              ? ((0x10U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                  ? 0U : ((8U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                           ? ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                       ? (((- (IData)(
                                                      (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | (((0xff000U 
                                               & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction) 
                                              | (0x800U 
                                                 & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                   >> 0x14U))))
                                       : 0U) : 0U) : 0U)
                           : ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                       ? (((- (IData)(
                                                      (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                             >> 0x14U))
                                       : 0U) : 0U) : 
                              ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                 >> 7U)))))
                                    : 0U) : 0U)))) : 0U)
          : ((0x20U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
              ? ((0x10U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                  ? ((8U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                       ? (0xfffff000U 
                                          & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction)
                                       : 0U) : 0U) : 0U))
                  : ((8U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                               ? 0U : ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                        ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                            ? (((- (IData)(
                                                           (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                        >> 7U))))
                                            : 0U) : 0U))))
              : ((0x10U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                  ? ((8U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                      ? 0U : ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                               ? ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                   ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                       ? (0xfffff000U 
                                          & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction)
                                       : 0U) : 0U) : 
                              ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                ? ((1U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                        >> 0x14U)) : 0U)
                                : 0U))) : ((8U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                            ? 0U : 
                                           ((4U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                             ? 0U : 
                                            ((2U & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                              ? ((1U 
                                                  & (IData)(cpu_top_tb2__DOT__dut__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__instruction 
                                                     >> 0x14U))
                                                  : 0U)
                                              : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__imem
                               [(0x3ffU & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(cpu_top_tb2__DOT__dut__DOT__opcode)));
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_src = 
        Vcpu_top_tb2__ConstPool__TABLE_he4914283_0[__Vtableidx1];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__reg_write 
        = Vcpu_top_tb2__ConstPool__TABLE_hb7f1d378_0
        [__Vtableidx1];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl 
        = Vcpu_top_tb2__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_read 
        = Vcpu_top_tb2__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_write 
        = Vcpu_top_tb2__ConstPool__TABLE_h77df0047_0
        [__Vtableidx1];
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_to_reg 
        = Vcpu_top_tb2__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vcpu_top_tb2___024root___nba_comb__TOP__0(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_top_tb2__DOT__dut__DOT__alu_b;
    cpu_top_tb2__DOT__dut__DOT__alu_b = 0;
    SData/*15:0*/ cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0;
    cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0 = 0;
    // Body
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
        = ((0U == (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1))
            ? 0U : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs
           [vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1]);
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata 
        = ((0U == (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2))
            ? 0U : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs
           [vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2]);
    cpu_top_tb2__DOT__dut__DOT__alu_b = ((IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_src)
                                          ? vlSelfRef.cpu_top_tb2__DOT__dut__DOT__im_out
                                          : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs2_rdata);
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                                  ? ((vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                                      < cpu_top_tb2__DOT__dut__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata, cpu_top_tb2__DOT__dut__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata, 
                                      (0x1fU & cpu_top_tb2__DOT__dut__DOT__alu_b))
                     : (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        >> (0x1fU & cpu_top_tb2__DOT__dut__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                     ? (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        << (0x1fU & cpu_top_tb2__DOT__dut__DOT__alu_b))
                     : (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        ^ cpu_top_tb2__DOT__dut__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                     ? (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        | cpu_top_tb2__DOT__dut__DOT__alu_b)
                     : (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        & cpu_top_tb2__DOT__dut__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_ctrl))
                     ? (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        - cpu_top_tb2__DOT__dut__DOT__alu_b)
                     : (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__rs1_rdata 
                        + cpu_top_tb2__DOT__dut__DOT__alu_b)))));
    cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0 = (
                                                   (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result))] 
                                                    << 8U) 
                                                   | vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                                   [
                                                   (0xfffU 
                                                    & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result)]);
    vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_rdata = 0U;
    if (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_read) {
        vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                             ? (IData)(cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0)
                             : vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                        ? 0U : ((vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.cpu_top_tb2__DOT__dut__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(cpu_top_tb2__DOT__dut__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.cpu_top_tb2__DOT__dut__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.cpu_top_tb2__DOT__dut__DOT__alu_result)]))));
    }
}

void Vcpu_top_tb2___024root___timing_resume(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_top_tb2___024root___eval_triggers__act(Vcpu_top_tb2___024root* vlSelf);

bool Vcpu_top_tb2___024root___eval_phase__act(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_top_tb2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu_top_tb2___024root___timing_resume(vlSelf);
        Vcpu_top_tb2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_top_tb2___024root___eval_phase__nba(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_top_tb2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb2___024root___dump_triggers__nba(Vcpu_top_tb2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb2___024root___dump_triggers__act(Vcpu_top_tb2___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top_tb2___024root___eval(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval\n"); );
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
            Vcpu_top_tb2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/cpu_top_tb2.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_top_tb2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/cpu_top_tb2.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu_top_tb2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu_top_tb2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_top_tb2___024root___eval_debug_assertions(Vcpu_top_tb2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
