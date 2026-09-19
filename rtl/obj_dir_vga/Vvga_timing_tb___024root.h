// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_timing_tb.h for the primary calling header

#ifndef VERILATED_VVGA_TIMING_TB___024ROOT_H_
#define VERILATED_VVGA_TIMING_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vvga_timing_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvga_timing_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ vga_timing_tb__DOT__clk_25mhz;
    CData/*0:0*/ vga_timing_tb__DOT__rst;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vga_timing_tb__DOT__clk_25mhz__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vga_timing_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ vga_timing_tb__DOT__dut__DOT__h_count;
    SData/*9:0*/ vga_timing_tb__DOT__dut__DOT__v_count;
    IData/*31:0*/ vga_timing_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h20e6f4ce__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvga_timing_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvga_timing_tb___024root(Vvga_timing_tb__Syms* symsp, const char* v__name);
    ~Vvga_timing_tb___024root();
    VL_UNCOPYABLE(Vvga_timing_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
