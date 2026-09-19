// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_timing_tb.h for the primary calling header

#include "Vvga_timing_tb__pch.h"
#include "Vvga_timing_tb___024root.h"

VL_ATTR_COLD void Vvga_timing_tb___024root___eval_initial__TOP(Vvga_timing_tb___024root* vlSelf);
VlCoroutine Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__0(Vvga_timing_tb___024root* vlSelf);
VlCoroutine Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__1(Vvga_timing_tb___024root* vlSelf);

void Vvga_timing_tb___024root___eval_initial(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvga_timing_tb___024root___eval_initial__TOP(vlSelf);
    Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__clk_25mhz__0 
        = vlSelfRef.vga_timing_tb__DOT__clk_25mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__vga_timing_tb__DOT__rst__0 
        = vlSelfRef.vga_timing_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__0(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7;
    vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    // Body
    vlSelfRef.vga_timing_tb__DOT__errors = 0U;
    vlSelfRef.vga_timing_tb__DOT__clk_25mhz = 0U;
    vlSelfRef.vga_timing_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x9c40ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         37);
    vlSelfRef.vga_timing_tb__DOT__rst = 0U;
    VL_WRITEF_NX("----------------------------------------\nCHECKING HORIZONTAL TIMING\n----------------------------------------\n",0);
    if (VL_UNLIKELY((1U & (~ ((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))))) {
        VL_WRITEF_NX("ERROR: video_on should be HIGH at pixel 0\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x27fU;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             52);
        vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (vga_timing_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         53);
    if (VL_UNLIKELY((1U & (~ ((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))))) {
        VL_WRITEF_NX("ERROR: video_on should be HIGH at pixel 639\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         61);
    if (VL_UNLIKELY(((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                     & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))) {
        VL_WRITEF_NX("ERROR: video_on should be LOW at pixel 640\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         69);
    if (VL_UNLIKELY((1U & (~ ((0x290U <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)) 
                              & (0x2f0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))))) {
        VL_WRITEF_NX("ERROR: HSYNC should be LOW at pixel 656\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x5fU;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             77);
        vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (vga_timing_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         78);
    if (VL_UNLIKELY((1U & (~ ((0x290U <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)) 
                              & (0x2f0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))))) {
        VL_WRITEF_NX("ERROR: HSYNC should remain LOW at pixel 751\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         85);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         86);
    if (VL_UNLIKELY(((0x290U <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)) 
                     & (0x2f0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))) {
        VL_WRITEF_NX("ERROR: HSYNC should return HIGH at pixel 752\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    VL_WRITEF_NX("Horizontal timing check complete\n----------------------------------------\nCHECKING VERTICAL TIMING\n----------------------------------------\n",0);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge vga_timing_tb.clk_25mhz)", 
                                                         "tb/vga_timing_tb.v", 
                                                         101);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         102);
    if (VL_UNLIKELY((1U & (~ ((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))))) {
        VL_WRITEF_NX("ERROR: video_on should be HIGH at line 2 \n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0x5d8e0U;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             110);
        vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (vga_timing_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         111);
    if (VL_UNLIKELY(((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                     & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))))) {
        VL_WRITEF_NX("ERROR: video_on should be LOW at line 480\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x1f40U;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             119);
        vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (vga_timing_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         120);
    if (VL_UNLIKELY((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x1ecU > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count))))))) {
        VL_WRITEF_NX("ERROR: VSYNC should be LOW at line 490\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x320U;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             128);
        vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (vga_timing_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         129);
    if (VL_UNLIKELY((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x1ecU > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count))))))) {
        VL_WRITEF_NX("ERROR: VSYNC should remain LOW at line 491\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0x320U;
    while (VL_LTS_III(32, 0U, vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        co_await vlSelfRef.__VtrigSched_h20e6f4ce__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_timing_tb.clk_25mhz)", 
                                                             "tb/vga_timing_tb.v", 
                                                             136);
        vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (vga_timing_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/vga_timing_tb.v", 
                                         137);
    if (VL_UNLIKELY(((0x1eaU <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                     & (0x1ecU > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count))))) {
        VL_WRITEF_NX("ERROR: VSYNC should return HIGH at line 492\n",0);
        vlSelfRef.vga_timing_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.vga_timing_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == vlSelfRef.vga_timing_tb__DOT__errors)) {
        VL_WRITEF_NX("VGA TIMING TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("VGA TIMING TEST FAILED: %0d errors\n",0,
                     32,vlSelfRef.vga_timing_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    VL_FINISH_MT("tb/vga_timing_tb.v", 156, "");
}

VL_INLINE_OPT VlCoroutine Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__1(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                             nullptr, 
                                             "tb/vga_timing_tb.v", 
                                             26);
        vlSelfRef.vga_timing_tb__DOT__clk_25mhz = (1U 
                                                   & (~ (IData)(vlSelfRef.vga_timing_tb__DOT__clk_25mhz)));
    }
}

void Vvga_timing_tb___024root___eval_act(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vvga_timing_tb___024root___nba_sequent__TOP__0(Vvga_timing_tb___024root* vlSelf);

void Vvga_timing_tb___024root___eval_nba(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_timing_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vvga_timing_tb___024root___nba_sequent__TOP__0(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__vga_timing_tb__DOT__dut__DOT__h_count;
    __Vdly__vga_timing_tb__DOT__dut__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__vga_timing_tb__DOT__dut__DOT__v_count;
    __Vdly__vga_timing_tb__DOT__dut__DOT__v_count = 0;
    // Body
    __Vdly__vga_timing_tb__DOT__dut__DOT__h_count = vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count;
    __Vdly__vga_timing_tb__DOT__dut__DOT__v_count = vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count;
    if (vlSelfRef.vga_timing_tb__DOT__rst) {
        __Vdly__vga_timing_tb__DOT__dut__DOT__h_count = 0U;
        __Vdly__vga_timing_tb__DOT__dut__DOT__v_count = 0U;
    } else if ((0x31fU == (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count))) {
        __Vdly__vga_timing_tb__DOT__dut__DOT__v_count 
            = ((0x20cU == (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count))));
        __Vdly__vga_timing_tb__DOT__dut__DOT__h_count = 0U;
    } else {
        __Vdly__vga_timing_tb__DOT__dut__DOT__h_count 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)));
    }
    vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count 
        = __Vdly__vga_timing_tb__DOT__dut__DOT__h_count;
    vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count 
        = __Vdly__vga_timing_tb__DOT__dut__DOT__v_count;
}

void Vvga_timing_tb___024root___timing_resume(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h20e6f4ce__0.resume(
                                                   "@(posedge vga_timing_tb.clk_25mhz)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vvga_timing_tb___024root___timing_commit(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h20e6f4ce__0.commit(
                                                   "@(posedge vga_timing_tb.clk_25mhz)");
    }
}

void Vvga_timing_tb___024root___eval_triggers__act(Vvga_timing_tb___024root* vlSelf);

bool Vvga_timing_tb___024root___eval_phase__act(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvga_timing_tb___024root___eval_triggers__act(vlSelf);
    Vvga_timing_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvga_timing_tb___024root___timing_resume(vlSelf);
        Vvga_timing_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvga_timing_tb___024root___eval_phase__nba(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvga_timing_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_timing_tb___024root___dump_triggers__nba(Vvga_timing_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_timing_tb___024root___dump_triggers__act(Vvga_timing_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_timing_tb___024root___eval(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval\n"); );
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
            Vvga_timing_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/vga_timing_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vvga_timing_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/vga_timing_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvga_timing_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvga_timing_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvga_timing_tb___024root___eval_debug_assertions(Vvga_timing_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
