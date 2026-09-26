// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgraphics_test_tb.h for the primary calling header

#include "Vgraphics_test_tb__pch.h"
#include "Vgraphics_test_tb___024root.h"

VL_ATTR_COLD void Vgraphics_test_tb___024root___eval_initial__TOP(Vgraphics_test_tb___024root* vlSelf);
VlCoroutine Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__0(Vgraphics_test_tb___024root* vlSelf);
VlCoroutine Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__1(Vgraphics_test_tb___024root* vlSelf);

void Vgraphics_test_tb___024root___eval_initial(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgraphics_test_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__clk_100mhz__0 
        = vlSelfRef.graphics_test_tb__DOT__clk_100mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__rst__0 
        = vlSelfRef.graphics_test_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz__0 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz;
}

VL_INLINE_OPT VlCoroutine Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__0(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.graphics_test_tb__DOT__errors = 0U;
    vlSelfRef.graphics_test_tb__DOT__clk_100mhz = 0U;
    vlSelfRef.graphics_test_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/graphics_test_tb.v", 
                                         52);
    vlSelfRef.graphics_test_tb__DOT__rst = 0U;
    graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0xf4240U;
    while (VL_LTS_III(32, 0U, graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hfb912cef__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge graphics_test_tb.clk_100mhz)", 
                                                             "tb/graphics_test_tb.v", 
                                                             63);
        graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (graphics_test_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.graphics_test_tb__DOT__idx_red = 0xc94U;
    vlSelfRef.graphics_test_tb__DOT__idx_green = 0x325U;
    VL_WRITEF_NX("----------------------------------------\nGRAPHICS TEST\n----------------------------------------\npixel(5,5) address = %0d\npixel(5,5) = 0x%02x\nexpected green = 0x1c\n",0,
                 32,vlSelfRef.graphics_test_tb__DOT__idx_green,
                 8,((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_green))
                     ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem
                    [(0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_green)]
                     : 0U));
    if ((0x1cU != ((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_green))
                    ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem
                   [(0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_green)]
                    : 0U))) {
        VL_WRITEF_NX("ERROR: pixel(5,5) is not green\n",0);
        vlSelfRef.graphics_test_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.graphics_test_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("pixel(5,5) GREEN PASS\n",0);
    }
    VL_WRITEF_NX("pixel(20,20) address = %0d\npixel(20,20) = 0x%02x\nexpected red = 0xe0\n",0,
                 32,vlSelfRef.graphics_test_tb__DOT__idx_red,
                 8,((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_red))
                     ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem
                    [(0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_red)]
                     : 0U));
    if ((0xe0U != ((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_red))
                    ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem
                   [(0x7fffU & vlSelfRef.graphics_test_tb__DOT__idx_red)]
                    : 0U))) {
        VL_WRITEF_NX("ERROR: pixel(20,20) is not red\n",0);
        vlSelfRef.graphics_test_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelfRef.graphics_test_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("pixel(20,20) RED PASS\n",0);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == vlSelfRef.graphics_test_tb__DOT__errors)) {
        VL_WRITEF_NX("GRAPHICS TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("GRAPHICS TEST FAILED: %0d errors\n",0,
                     32,vlSelfRef.graphics_test_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    VL_FINISH_MT("tb/graphics_test_tb.v", 129, "");
}

VL_INLINE_OPT VlCoroutine Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__1(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/graphics_test_tb.v", 
                                             31);
        vlSelfRef.graphics_test_tb__DOT__clk_100mhz 
            = (1U & (~ (IData)(vlSelfRef.graphics_test_tb__DOT__clk_100mhz)));
    }
}

void Vgraphics_test_tb___024root___eval_act(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vgraphics_test_tb___024root___nba_sequent__TOP__0(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__1(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__2(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__3(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__4(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__5(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_sequent__TOP__6(Vgraphics_test_tb___024root* vlSelf);
void Vgraphics_test_tb___024root___nba_comb__TOP__0(Vgraphics_test_tb___024root* vlSelf);

void Vgraphics_test_tb___024root___eval_nba(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vgraphics_test_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__0(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter;
    __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter = 0;
    CData/*0:0*/ __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz;
    __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz = 0;
    // Body
    __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter;
    __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz;
    if (vlSelfRef.graphics_test_tb__DOT__rst) {
        __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter = 0U;
        __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz = 0U;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__led_out = 0U;
    } else {
        __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter)));
        if ((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter))) {
            __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz 
                = (1U & (~ (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz)));
        }
        if (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
             & (0xe0000000U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))) {
            vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__led_out 
                = (0xfU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
        }
    }
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter 
        = __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz 
        = __Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz;
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__1(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count;
    vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count;
    if (vlSelfRef.graphics_test_tb__DOT__rst) {
        vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count = 0U;
        vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count = 0U;
    } else if ((0x31fU == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count))) {
        vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count 
            = ((0x20cU == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count))));
        vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count = 0U;
    } else {
        vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)));
    }
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__2(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 = 0;
    SData/*11:0*/ __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 = 0;
    // Body
    vlSelfRef.__VdlySet__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0 = 0U;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0U;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0U;
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0U;
    if (VL_UNLIKELY(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write)) {
        VL_WRITEF_NX("STORE: pc=%08x addr=%08x data=%02x funct3=%03b\n",0,
                     32,vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc,
                     32,vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result,
                     8,(0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata),
                     3,(IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3));
    }
    __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0U;
    if (vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT____Vlvbound_ha980ca89__0 
            = ((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2))
                ? 0U : (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
                        [vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2]));
        if ((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))) {
            vlSelfRef.__VdlyVal__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0 
                = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT____Vlvbound_ha980ca89__0;
            vlSelfRef.__VdlyDim0__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0 
                = (0x7fffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            vlSelfRef.__VdlySet__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
         & ((~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we) 
                | (0xe0000000U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
            & (0xf0000000U != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)))) {
        if ((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 
                = (0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 
                = (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 
                = (0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 1U;
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 
                = (0xfffU & ((IData)(1U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        } else if ((2U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 
                = (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 
                = (0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 1U;
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 
                = (0xffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 
                = (0xfffU & ((IData)(1U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result));
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 
                = (0xffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 0x10U));
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 
                = (0xfffU & ((IData)(2U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result));
            __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 
                = (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                   >> 0x18U);
            __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 
                = (0xfffU & ((IData)(3U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        }
    }
    if (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rd)))) {
        __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 
            = ((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata
                : ((2U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)
                    : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        __VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 
            = vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rd;
        __VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    }
    if (__VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    }
    if (__VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    }
    if (__VdlySet__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__3(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__hsync_d 
        = (1U & (~ ((0x290U <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)) 
                    & (0x2f0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)))));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__vsync_d 
        = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
                    & (0x1ecU > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)))));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel 
        = ((0x4affU >= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_raddr))
            ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem
           [vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_raddr]
            : 0U);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d 
        = ((0x1e0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
           & (0x280U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)));
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vgraphics_test_tb__ConstPool__TABLE_heca81d36_0;

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__4(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
        = ((IData)(vlSelfRef.graphics_test_tb__DOT__rst)
            ? 0U : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__next_pc);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rd 
        = (0x1fU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 7U));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1 
        = (0x1fU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0xfU));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2 
        = (0x1fU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0x14U));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
        = vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
        [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                    >> 2U))];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3 
        = (7U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                 [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode 
        = (0x7fU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
           [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                       >> 2U))]);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
        = ((0x40U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                         ? (((- (IData)(
                                                        (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction) 
                                                | (0x800U 
                                                   & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                               [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode)));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_src 
        = Vgraphics_test_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__reg_write 
        = Vgraphics_test_tb__ConstPool__TABLE_he6d0abef_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl 
        = Vgraphics_test_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_read 
        = Vgraphics_test_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write 
        = Vgraphics_test_tb__ConstPool__TABLE_h77df0047_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel 
        = Vgraphics_test_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch 
        = Vgraphics_test_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump 
        = Vgraphics_test_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr 
        = Vgraphics_test_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel 
        = Vgraphics_test_tb__ConstPool__TABLE_heca81d36_0
        [__Vtableidx1];
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
           + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc);
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__5(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem[vlSelfRef.__VdlyDim0__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_sequent__TOP__6(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count 
        = vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count 
        = vlSelfRef.__Vdly__graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_raddr 
        = (0x7fffU & (((IData)(0xa0U) * (0x7fU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count) 
                                                  >> 2U))) 
                      + (0xffU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count) 
                                  >> 2U))));
}

VL_INLINE_OPT void Vgraphics_test_tb___024root___nba_comb__TOP__0(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
        = ((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1))
            ? 0U : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
           [vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1]);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
        = ((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2))
            ? 0U : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
           [vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2]);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
        = ((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
            ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc
            : ((2U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
                ? 0U : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b 
        = ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_src)
            ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out
            : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__next_pc 
        = ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump)
            ? ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr)
                ? (0xfffffffeU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                  + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
            : (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch) 
                & ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               >= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               < vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                        : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? VL_GTES_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : VL_LTS_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                    : ((1U & (~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                 >> 1U))) && ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                : ((IData)(4U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                                  ? ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                                      < vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a, 
                                      (0x1fU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        >> (0x1fU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        << (0x1fU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        ^ vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        | vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        - vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b)))));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we 
        = ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
           & ((0x10000000U <= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result) 
              & (0x10004affU >= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0 
        = ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
            [(0xfffU & ((IData)(1U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
            << 8U) | vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
           [(0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)]);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata = 0U;
    if (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_read) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                             ? (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)
                             : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? 0U : ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))));
    }
}

void Vgraphics_test_tb___024root___timing_resume(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hfb912cef__0.resume(
                                                   "@(posedge graphics_test_tb.clk_100mhz)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vgraphics_test_tb___024root___timing_commit(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hfb912cef__0.commit(
                                                   "@(posedge graphics_test_tb.clk_100mhz)");
    }
}

void Vgraphics_test_tb___024root___eval_triggers__act(Vgraphics_test_tb___024root* vlSelf);

bool Vgraphics_test_tb___024root___eval_phase__act(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vgraphics_test_tb___024root___eval_triggers__act(vlSelf);
    Vgraphics_test_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vgraphics_test_tb___024root___timing_resume(vlSelf);
        Vgraphics_test_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgraphics_test_tb___024root___eval_phase__nba(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vgraphics_test_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgraphics_test_tb___024root___dump_triggers__nba(Vgraphics_test_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vgraphics_test_tb___024root___dump_triggers__act(Vgraphics_test_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vgraphics_test_tb___024root___eval(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval\n"); );
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
            Vgraphics_test_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/graphics_test_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vgraphics_test_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/graphics_test_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vgraphics_test_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vgraphics_test_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vgraphics_test_tb___024root___eval_debug_assertions(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
