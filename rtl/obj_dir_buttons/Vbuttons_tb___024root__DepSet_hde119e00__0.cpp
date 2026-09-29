// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuttons_tb.h for the primary calling header

#include "Vbuttons_tb__pch.h"
#include "Vbuttons_tb___024root.h"

VL_ATTR_COLD void Vbuttons_tb___024root___eval_initial__TOP(Vbuttons_tb___024root* vlSelf);
VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__0(Vbuttons_tb___024root* vlSelf);
VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__1(Vbuttons_tb___024root* vlSelf);
VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__2(Vbuttons_tb___024root* vlSelf);

void Vbuttons_tb___024root___eval_initial(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbuttons_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__buttons_tb__DOT__clk_100mhz__0 
        = vlSelfRef.buttons_tb__DOT__clk_100mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__buttons_tb__DOT__rst__0 
        = vlSelfRef.buttons_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz__0 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz;
}

VL_INLINE_OPT VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__0(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.buttons_tb__DOT__errors = 0U;
    vlSelfRef.buttons_tb__DOT__clk_100mhz = 0U;
    vlSelfRef.buttons_tb__DOT__rst = 1U;
    vlSelfRef.buttons_tb__DOT__btnU = 0U;
    vlSelfRef.buttons_tb__DOT__btnD = 0U;
    vlSelfRef.buttons_tb__DOT__btnL = 0U;
    vlSelfRef.buttons_tb__DOT__btnR = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/buttons_tb.v", 
                                         56);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.buttons_tb__DOT__rst = 0U;
    vlSelfRef.buttons_tb__DOT__btnR = 1U;
    vlSelfRef.buttons_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x927c0U, vlSelfRef.buttons_tb__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_hc520ecdc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge buttons_tb.clk_100mhz)", 
                                                             "tb/buttons_tb.v", 
                                                             68);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.buttons_tb__DOT__i = ((IData)(1U) 
                                        + vlSelfRef.buttons_tb__DOT__i);
    }
    vlSelfRef.buttons_tb__DOT__btnR = 0U;
    vlSelfRef.buttons_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x3e8U, vlSelfRef.buttons_tb__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_hc520ecdc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge buttons_tb.clk_100mhz)", 
                                                             "tb/buttons_tb.v", 
                                                             74);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.buttons_tb__DOT__i = ((IData)(1U) 
                                        + vlSelfRef.buttons_tb__DOT__i);
    }
    vlSelfRef.buttons_tb__DOT__idx_new = 0x25d1U;
    vlSelfRef.buttons_tb__DOT__idx_old = 0x25d0U;
    VL_WRITEF_NX("----------------------------------------\nBUTTON TEST\n----------------------------------------\nDEBUG idx_new=%0d\nDEBUG idx_old=%0d\nDEBUG mem[9680]=%02x\nDEBUG mem[9681]=%02x\npixel(81,60) = 0x%x (expect ff)\npixel(80,60) = 0x%x (expect 00)\n",0,
                 32,vlSelfRef.buttons_tb__DOT__idx_new,
                 32,vlSelfRef.buttons_tb__DOT__idx_old,
                 8,vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                 [0x25d0U],8,vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                 [0x25d1U],8,((0x4affU >= (0x7fffU 
                                           & vlSelfRef.buttons_tb__DOT__idx_new))
                               ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                              [(0x7fffU & vlSelfRef.buttons_tb__DOT__idx_new)]
                               : 0U),8,((0x4affU >= 
                                         (0x7fffU & vlSelfRef.buttons_tb__DOT__idx_old))
                                         ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                                        [(0x7fffU & vlSelfRef.buttons_tb__DOT__idx_old)]
                                         : 0U));
    if (VL_UNLIKELY((0xffU != ((0x4affU >= (0x7fffU 
                                            & vlSelfRef.buttons_tb__DOT__idx_new))
                                ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                               [(0x7fffU & vlSelfRef.buttons_tb__DOT__idx_new)]
                                : 0U)))) {
        VL_WRITEF_NX("ERROR: pixel(81,60) should be WHITE\n",0);
        vlSelfRef.buttons_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.buttons_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0U != ((0x4affU >= (0x7fffU & vlSelfRef.buttons_tb__DOT__idx_old))
                             ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                            [(0x7fffU & vlSelfRef.buttons_tb__DOT__idx_old)]
                             : 0U)))) {
        VL_WRITEF_NX("ERROR: pixel(80,60) should be BLACK\n",0);
        vlSelfRef.buttons_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.buttons_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == vlSelfRef.buttons_tb__DOT__errors)) {
        VL_WRITEF_NX("BUTTON TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("BUTTON TEST FAILED: %0d errors\n",0,
                     32,vlSelfRef.buttons_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    VL_FINISH_MT("tb/buttons_tb.v", 120, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__1(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/buttons_tb.v", 
                                             36);
        vlSelfRef.buttons_tb__DOT__clk_100mhz = (1U 
                                                 & (~ (IData)(vlSelfRef.buttons_tb__DOT__clk_100mhz)));
    }
}

VL_INLINE_OPT VlCoroutine Vbuttons_tb___024root___eval_initial__TOP__Vtiming__2(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_hc520ecdc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge buttons_tb.clk_100mhz)", 
                                                             "vga/framebuffer.v", 
                                                             32);
        if (VL_UNLIKELY(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write) 
                         & ((0x25d0U == (0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)) 
                            | (0x25d1U == (0x7fffU 
                                           & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)))))) {
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "vga/framebuffer.v", 
                                                 34);
            VL_WRITEF_NX("FRAMEBUFFER AFTER WRITE: addr=%0# mem=%02x\n",0,
                         15,(0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),
                         8,((0x4affU >= (0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                             ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
                            [(0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]
                             : 0U));
        }
    }
}

void Vbuttons_tb___024root___eval_act(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbuttons_tb___024root___nba_sequent__TOP__0(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__1(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__2(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__3(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__4(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__5(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_sequent__TOP__6(Vbuttons_tb___024root* vlSelf);
void Vbuttons_tb___024root___nba_comb__TOP__0(Vbuttons_tb___024root* vlSelf);

void Vbuttons_tb___024root___eval_nba(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbuttons_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__0(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter = 0;
    IData/*17:0*/ __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter = 0;
    IData/*17:0*/ __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter = 0;
    IData/*17:0*/ __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter = 0;
    CData/*1:0*/ __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter = 0;
    CData/*0:0*/ __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz;
    __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz = 0;
    // Body
    __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz;
    __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter;
    __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter;
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean;
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean;
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean;
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean;
    if (vlSelfRef.buttons_tb__DOT__rst) {
        __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter = 0U;
        __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean = 0U;
        __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean = 0U;
        __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean = 0U;
        __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean = 0U;
        __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean = 0U;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__led_out = 0U;
    } else {
        __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter)));
        if ((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter))) {
            __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz 
                = (1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz)));
        }
        if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2) 
             == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean))) {
            __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter = 0U;
        } else {
            __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter));
            if ((0x3d090U <= vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter)) {
                vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean 
                    = vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2;
                __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter = 0U;
            }
        }
        if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2) 
             == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean))) {
            __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter = 0U;
        } else {
            __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter));
            if ((0x3d090U <= vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter)) {
                vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean 
                    = vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2;
                __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter = 0U;
            }
        }
        if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2) 
             == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean))) {
            __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter = 0U;
        } else {
            __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter));
            if ((0x3d090U <= vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter)) {
                vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean 
                    = vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2;
                __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter = 0U;
            }
        }
        if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2) 
             == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean))) {
            __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter = 0U;
        } else {
            __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter 
                = (0x3ffffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter));
            if ((0x3d090U <= vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter)) {
                vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean 
                    = vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2;
                __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter = 0U;
            }
        }
        if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
             & (0xe0000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))) {
            vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__led_out 
                = (0xfU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
        }
    }
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter 
        = __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter;
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz 
        = __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz;
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter 
        = __Vdly__buttons_tb__DOT__dut__DOT__db_u__DOT__counter;
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter 
        = __Vdly__buttons_tb__DOT__dut__DOT__db_d__DOT__counter;
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter 
        = __Vdly__buttons_tb__DOT__dut__DOT__db_l__DOT__counter;
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter 
        = __Vdly__buttons_tb__DOT__dut__DOT__db_r__DOT__counter;
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__btnU));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__btnD));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__btnL));
    vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1 
        = ((1U & (~ (IData)(vlSelfRef.buttons_tb__DOT__rst))) 
           && (IData)(vlSelfRef.buttons_tb__DOT__btnR));
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__1(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 = 0;
    SData/*11:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 = 0;
    // Body
    vlSelfRef.__VdlySet__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 = 0U;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 0U;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 0U;
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 0U;
    if (VL_UNLIKELY(((~ (IData)(vlSelfRef.buttons_tb__DOT__rst)) 
                     & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write)))) {
        VL_WRITEF_NX("REAL FB WRITE: pc=%08x alu=%08x fb_we=%b fb_waddr=%0# (%08x) fb_wdata=%02x\n",0,
                     32,vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc,
                     32,vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result,
                     1,(IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write),
                     15,(0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),
                     15,(0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),
                     8,(IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata));
    }
    __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 0U;
    if (VL_UNLIKELY(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write)) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_ha980ca89__0 
            = vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata;
        VL_WRITEF_NX("FRAMEBUFFER ACTUAL WRITE: addr=%0# data=%02x\n",0,
                     15,(0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),
                     8,(IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata));
        if ((0x4affU >= (0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))) {
            vlSelfRef.__VdlyVal__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 
                = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_ha980ca89__0;
            vlSelfRef.__VdlyDim0__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 
                = (0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            vlSelfRef.__VdlySet__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
         & ((~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write) 
                | (0xe0000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
            & (0xf0000000U != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)))) {
        if ((0U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 
                = (0xffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 
                = (0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 
                = (0xffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 
                = (0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1 = 1U;
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 
                = (0xffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2 
                = (0xfffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        } else if ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))) {
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 
                = (0xffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 
                = (0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result);
            __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3 = 1U;
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 
                = (0xffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 8U));
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4 
                = (0xfffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result));
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 
                = (0xffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                            >> 0x10U));
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5 
                = (0xfffU & ((IData)(2U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result));
            __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 
                = (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
                   >> 0x18U);
            __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6 
                = (0xfffU & ((IData)(3U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        }
    }
    if (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd)))) {
        __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 
            = ((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                ? (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                    & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                    ? ((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                         << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                   << 2U)) | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))
                    : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata)
                : ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                    ? ((IData)(4U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)
                    : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result));
        __VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 
            = vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd;
        __VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v0;
    }
    if (__VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v1;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v2;
    }
    if (__VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v3;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v4;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v5;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem__v6;
    }
    if (__VdlySet__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[__VdlyDim0__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0] 
            = __VdlyVal__buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__2(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count;
    vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count;
    if (vlSelfRef.buttons_tb__DOT__rst) {
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count = 0U;
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count = 0U;
    } else if ((0x31fU == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count))) {
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count 
            = ((0x20cU == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count))));
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count = 0U;
    } else {
        vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)));
    }
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__3(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__hsync_d 
        = (1U & (~ ((0x290U <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)) 
                    & (0x2f0U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)))));
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__vsync_d 
        = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
                    & (0x1ecU > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)))));
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel 
        = ((0x4affU >= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr))
            ? vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem
           [vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr]
            : 0U);
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d 
        = ((0x1e0U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
           & (0x280U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)));
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_heca81d36_0;

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__4(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean;
    vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean;
    vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean;
    vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
        = ((IData)(vlSelfRef.buttons_tb__DOT__rst) ? 0U
            : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__next_pc);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 7U));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0xfU));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0x14U));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
        [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                    >> 2U))];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3 
        = (7U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                 [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode 
        = (0x7fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
           [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                       >> 2U))]);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
        = ((0x40U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                         ? (((- (IData)(
                                                        (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction) 
                                                | (0x800U 
                                                   & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                               [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src 
        = Vbuttons_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write 
        = Vbuttons_tb__ConstPool__TABLE_he6d0abef_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl 
        = Vbuttons_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read 
        = Vbuttons_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write 
        = Vbuttons_tb__ConstPool__TABLE_h77df0047_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel 
        = Vbuttons_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch 
        = Vbuttons_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump 
        = Vbuttons_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr 
        = Vbuttons_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel 
        = Vbuttons_tb__ConstPool__TABLE_heca81d36_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
           + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc);
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__5(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem[vlSelfRef.__VdlyDim0__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_sequent__TOP__6(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count;
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count 
        = vlSelfRef.__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count;
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr 
        = (0x7fffU & (((IData)(0xa0U) * (0x7fU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count) 
                                                  >> 2U))) 
                      + (0xffU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count) 
                                  >> 2U))));
}

VL_INLINE_OPT void Vbuttons_tb___024root___nba_comb__TOP__0(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
        = ((0U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1))
            ? 0U : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
           [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1]);
    if ((0U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2))) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata = 0U;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata = 0U;
    } else {
        vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata 
            = (0xffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
               [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2]);
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
            = vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
            [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2];
    }
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
        = ((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
            ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc
            : ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
                ? 0U : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src)
            ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out
            : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__next_pc 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump)
            ? ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                ? (0xfffffffeU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                  + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
            : (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch) 
                & ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                        : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? VL_GTES_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                    : ((1U & (~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                 >> 1U))) && ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                : ((IData)(4U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                                  ? ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                                      < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a, 
                                      (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        >> (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        << (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        ^ vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        - vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
           & ((0x10000000U <= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result) 
              & (0x10004affU >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0 
        = ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
            [(0xfffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
            << 8U) | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
           [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata = 0U;
    if (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                             ? (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)
                             : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? 0U : ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))));
    }
}

void Vbuttons_tb___024root___timing_resume(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hc520ecdc__0.resume(
                                                   "@(posedge buttons_tb.clk_100mhz)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vbuttons_tb___024root___timing_commit(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hc520ecdc__0.commit(
                                                   "@(posedge buttons_tb.clk_100mhz)");
    }
}

void Vbuttons_tb___024root___eval_triggers__act(Vbuttons_tb___024root* vlSelf);

bool Vbuttons_tb___024root___eval_phase__act(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbuttons_tb___024root___eval_triggers__act(vlSelf);
    Vbuttons_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbuttons_tb___024root___timing_resume(vlSelf);
        Vbuttons_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbuttons_tb___024root___eval_phase__nba(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbuttons_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__nba(Vbuttons_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__act(Vbuttons_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbuttons_tb___024root___eval(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval\n"); );
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
            Vbuttons_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/buttons_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbuttons_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/buttons_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbuttons_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbuttons_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbuttons_tb___024root___eval_debug_assertions(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
