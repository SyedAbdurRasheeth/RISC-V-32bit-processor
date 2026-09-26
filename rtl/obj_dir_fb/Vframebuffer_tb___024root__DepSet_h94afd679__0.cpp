// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframebuffer_tb.h for the primary calling header

#include "Vframebuffer_tb__pch.h"
#include "Vframebuffer_tb___024root.h"

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_initial__TOP(Vframebuffer_tb___024root* vlSelf);
VlCoroutine Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__0(Vframebuffer_tb___024root* vlSelf);
VlCoroutine Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__1(Vframebuffer_tb___024root* vlSelf);

void Vframebuffer_tb___024root___eval_initial(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vframebuffer_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__framebuffer_tb__DOT__dut__DOT__clk_25mhz__0 
        = vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__framebuffer_tb__DOT__clk_100mhz__0 
        = vlSelfRef.framebuffer_tb__DOT__clk_100mhz;
    vlSelfRef.__Vtrigprevexpr___TOP__framebuffer_tb__DOT__rst__0 
        = vlSelfRef.framebuffer_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__0(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.framebuffer_tb__DOT__red_found = 0U;
    vlSelfRef.framebuffer_tb__DOT__green_found = 0U;
    vlSelfRef.framebuffer_tb__DOT__blue_found = 0U;
    vlSelfRef.framebuffer_tb__DOT__clk_100mhz = 0U;
    vlSelfRef.framebuffer_tb__DOT__rst = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_waddr = 0U;
    vlSelfRef.framebuffer_tb__DOT__fb_wdata = 0U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/framebuffer_tb.v", 
                                         55);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_waddr = 0x325U;
    vlSelfRef.framebuffer_tb__DOT__fb_wdata = 0xe0U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 0U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_waddr = 0x326U;
    vlSelfRef.framebuffer_tb__DOT__fb_wdata = 0x1cU;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 0U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_waddr = 0x327U;
    vlSelfRef.framebuffer_tb__DOT__fb_wdata = 3U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__fb_we = 0U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge framebuffer_tb.clk_100mhz)", 
                                                         "tb/framebuffer_tb.v", 
                                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.framebuffer_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1e8480U, vlSelfRef.framebuffer_tb__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h0e19f2cf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge framebuffer_tb.clk_100mhz)", 
                                                             "tb/framebuffer_tb.v", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.framebuffer_tb__DOT__red_found)) 
                           & (0xfU == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                        ? ((0xeU & 
                                            ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                             >> 4U)) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                               >> 5U)))
                                        : 0U))) & (0U 
                                                   == 
                                                   ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                                     ? 
                                                    ((0xeU 
                                                      & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                           >> 2U)))
                                                     : 0U))) 
                         & (0U == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                    ? (0xfU & ((0xcU 
                                                & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                                    : 0U))))) {
            vlSelfRef.framebuffer_tb__DOT__red_found = 1U;
            VL_WRITEF_NX("----------------------------------------\nRED PIXEL FOUND\nvga_r = %x\nvga_g = %x\nvga_b = %x\n----------------------------------------\n",0,
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 4U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 5U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 1U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 2U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? (0xfU & ((0xcU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                 << 2U)) 
                                        | (3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                             : 0U));
        }
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.framebuffer_tb__DOT__green_found)) 
                           & (0U == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                      ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                  >> 4U)) 
                                         | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                  >> 5U)))
                                      : 0U))) & (0xfU 
                                                 == 
                                                 ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                                   ? 
                                                  ((0xeU 
                                                    & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                         >> 2U)))
                                                   : 0U))) 
                         & (0U == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                    ? (0xfU & ((0xcU 
                                                & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                                    : 0U))))) {
            vlSelfRef.framebuffer_tb__DOT__green_found = 1U;
            VL_WRITEF_NX("----------------------------------------\nGREEN PIXEL FOUND\nvga_r = %x\nvga_g = %x\nvga_b = %x\n----------------------------------------\n",0,
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 4U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 5U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 1U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 2U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? (0xfU & ((0xcU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                 << 2U)) 
                                        | (3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                             : 0U));
        }
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.framebuffer_tb__DOT__blue_found)) 
                           & (0U == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                      ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                  >> 4U)) 
                                         | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                  >> 5U)))
                                      : 0U))) & (0U 
                                                 == 
                                                 ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                                   ? 
                                                  ((0xeU 
                                                    & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                         >> 2U)))
                                                   : 0U))) 
                         & (0xfU == ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                      ? (0xfU & ((0xcU 
                                                  & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                                      : 0U))))) {
            vlSelfRef.framebuffer_tb__DOT__blue_found = 1U;
            VL_WRITEF_NX("----------------------------------------\nBLUE PIXEL FOUND\nvga_r = %x\nvga_g = %x\nvga_b = %x\n----------------------------------------\n",0,
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 4U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 5U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                         >> 1U)) | 
                                (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 2U))) : 0U),
                         4,((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                             ? (0xfU & ((0xcU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                 << 2U)) 
                                        | (3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                             : 0U));
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.framebuffer_tb__DOT__red_found) 
                          & (IData)(vlSelfRef.framebuffer_tb__DOT__green_found)) 
                         & (IData)(vlSelfRef.framebuffer_tb__DOT__blue_found)))) {
            VL_WRITEF_NX("----------------------------------------\nALL RGB PIXELS FOUND\nFRAMEBUFFER TEST PASSED\n----------------------------------------\n",0);
            VL_FINISH_MT("tb/framebuffer_tb.v", 178, "");
        }
        vlSelfRef.framebuffer_tb__DOT__i = ((IData)(1U) 
                                            + vlSelfRef.framebuffer_tb__DOT__i);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.framebuffer_tb__DOT__red_found))))) {
        VL_WRITEF_NX("ERROR: Red pixel was not observed\n",0);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.framebuffer_tb__DOT__green_found))))) {
        VL_WRITEF_NX("ERROR: Green pixel was not observed\n",0);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.framebuffer_tb__DOT__blue_found))))) {
        VL_WRITEF_NX("ERROR: Blue pixel was not observed\n",0);
    }
    VL_WRITEF_NX("FRAMEBUFFER TEST FAILED\n----------------------------------------\n",0);
    VL_FINISH_MT("tb/framebuffer_tb.v", 200, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__1(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/framebuffer_tb.v", 
                                             39);
        vlSelfRef.framebuffer_tb__DOT__clk_100mhz = 
            (1U & (~ (IData)(vlSelfRef.framebuffer_tb__DOT__clk_100mhz)));
    }
}

void Vframebuffer_tb___024root___eval_act(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vframebuffer_tb___024root___nba_sequent__TOP__0(Vframebuffer_tb___024root* vlSelf);
void Vframebuffer_tb___024root___nba_sequent__TOP__1(Vframebuffer_tb___024root* vlSelf);
void Vframebuffer_tb___024root___nba_sequent__TOP__2(Vframebuffer_tb___024root* vlSelf);

void Vframebuffer_tb___024root___eval_nba(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vframebuffer_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vframebuffer_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vframebuffer_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vframebuffer_tb___024root___nba_sequent__TOP__0(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0;
    __VdlyVal__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 = 0;
    SData/*14:0*/ __VdlyDim0__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0;
    __VdlyDim0__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0;
    __VdlySet__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 = 0;
    // Body
    if (VL_UNLIKELY(vlSelfRef.framebuffer_tb__DOT__fb_we)) {
        VL_WRITEF_NX("WRITE: addr=%5# data=%x\n",0,
                     15,vlSelfRef.framebuffer_tb__DOT__fb_waddr,
                     8,(IData)(vlSelfRef.framebuffer_tb__DOT__fb_wdata));
    }
    __VdlySet__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 = 0U;
    if (vlSelfRef.framebuffer_tb__DOT__fb_we) {
        vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_ha980ca89__0 
            = vlSelfRef.framebuffer_tb__DOT__fb_wdata;
        if ((0x4affU >= (IData)(vlSelfRef.framebuffer_tb__DOT__fb_waddr))) {
            __VdlyVal__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 
                = vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_ha980ca89__0;
            __VdlyDim0__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 
                = vlSelfRef.framebuffer_tb__DOT__fb_waddr;
            __VdlySet__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0 = 1U;
        }
    }
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__hsync_d 
        = (1U & (~ ((0x290U <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)) 
                    & (0x2f0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)))));
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__vsync_d 
        = (1U & (~ ((0x1eaU <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
                    & (0x1ecU > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)))));
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel 
        = ((0x4affU >= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr))
            ? vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__mem
           [vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr]
            : 0U);
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d 
        = ((0x1e0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
           & (0x280U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)));
    if (__VdlySet__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0) {
        vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__mem[__VdlyDim0__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0] 
            = __VdlyVal__framebuffer_tb__DOT__dut__DOT__fb__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vframebuffer_tb___024root___nba_sequent__TOP__1(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter;
    __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter = 0;
    CData/*0:0*/ __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz;
    __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz = 0;
    // Body
    __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter 
        = vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter;
    __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz 
        = vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz;
    if (vlSelfRef.framebuffer_tb__DOT__rst) {
        __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter = 0U;
        __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz = 0U;
    } else {
        __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter)));
        if ((1U == (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter))) {
            __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz 
                = (1U & (~ (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz)));
        }
    }
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter 
        = __Vdly__framebuffer_tb__DOT__dut__DOT__divider__DOT__counter;
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz 
        = __Vdly__framebuffer_tb__DOT__dut__DOT__clk_25mhz;
}

VL_INLINE_OPT void Vframebuffer_tb___024root___nba_sequent__TOP__2(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count;
    __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count = 0;
    SData/*9:0*/ __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count;
    __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count = 0;
    // Body
    __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count 
        = vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count;
    __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count 
        = vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count;
    if (vlSelfRef.framebuffer_tb__DOT__rst) {
        __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count = 0U;
        __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count = 0U;
    } else if ((0x31fU == (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count))) {
        __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count 
            = ((0x20cU == (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count))));
        __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count = 0U;
    } else {
        __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)));
    }
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count 
        = __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count;
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count 
        = __Vdly__framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count;
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr 
        = (0x7fffU & (((IData)(0xa0U) * (0x7fU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count) 
                                                  >> 2U))) 
                      + (0xffU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count) 
                                  >> 2U))));
}

void Vframebuffer_tb___024root___timing_resume(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0e19f2cf__0.resume(
                                                   "@(posedge framebuffer_tb.clk_100mhz)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vframebuffer_tb___024root___timing_commit(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0e19f2cf__0.commit(
                                                   "@(posedge framebuffer_tb.clk_100mhz)");
    }
}

void Vframebuffer_tb___024root___eval_triggers__act(Vframebuffer_tb___024root* vlSelf);

bool Vframebuffer_tb___024root___eval_phase__act(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vframebuffer_tb___024root___eval_triggers__act(vlSelf);
    Vframebuffer_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vframebuffer_tb___024root___timing_resume(vlSelf);
        Vframebuffer_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vframebuffer_tb___024root___eval_phase__nba(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vframebuffer_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__nba(Vframebuffer_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__act(Vframebuffer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vframebuffer_tb___024root___eval(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval\n"); );
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
            Vframebuffer_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/framebuffer_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vframebuffer_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/framebuffer_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vframebuffer_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vframebuffer_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vframebuffer_tb___024root___eval_debug_assertions(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
