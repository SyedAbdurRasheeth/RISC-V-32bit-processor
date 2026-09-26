// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vframebuffer_tb.h for the primary calling header

#ifndef VERILATED_VFRAMEBUFFER_TB___024ROOT_H_
#define VERILATED_VFRAMEBUFFER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vframebuffer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vframebuffer_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ framebuffer_tb__DOT__clk_100mhz;
    CData/*0:0*/ framebuffer_tb__DOT__rst;
    CData/*0:0*/ framebuffer_tb__DOT__dut__DOT__clk_25mhz;
    CData/*7:0*/ framebuffer_tb__DOT__fb_wdata;
    CData/*0:0*/ framebuffer_tb__DOT__fb_we;
    CData/*0:0*/ framebuffer_tb__DOT__red_found;
    CData/*0:0*/ framebuffer_tb__DOT__green_found;
    CData/*0:0*/ framebuffer_tb__DOT__blue_found;
    CData/*7:0*/ framebuffer_tb__DOT__dut__DOT__fb_pixel;
    CData/*0:0*/ framebuffer_tb__DOT__dut__DOT__video_on_d;
    CData/*0:0*/ framebuffer_tb__DOT__dut__DOT__hsync_d;
    CData/*0:0*/ framebuffer_tb__DOT__dut__DOT__vsync_d;
    CData/*1:0*/ framebuffer_tb__DOT__dut__DOT__divider__DOT__counter;
    CData/*7:0*/ framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_h1174803a__0;
    CData/*7:0*/ framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_ha980ca89__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__framebuffer_tb__DOT__dut__DOT__clk_25mhz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__framebuffer_tb__DOT__clk_100mhz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__framebuffer_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*14:0*/ framebuffer_tb__DOT__fb_waddr;
    SData/*14:0*/ framebuffer_tb__DOT__dut__DOT__fb_raddr;
    SData/*9:0*/ framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count;
    SData/*9:0*/ framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count;
    IData/*31:0*/ framebuffer_tb__DOT__i;
    IData/*31:0*/ framebuffer_tb__DOT__dut__DOT__fb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 19200> framebuffer_tb__DOT__dut__DOT__fb__DOT__mem;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0e19f2cf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vframebuffer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vframebuffer_tb___024root(Vframebuffer_tb__Syms* symsp, const char* v__name);
    ~Vframebuffer_tb___024root();
    VL_UNCOPYABLE(Vframebuffer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
