// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile_tb.h for the primary calling header

#ifndef VERILATED_VREGFILE_TB___024ROOT_H_
#define VERILATED_VREGFILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregfile_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ regfile_tb__DOT__clk;
    CData/*4:0*/ regfile_tb__DOT__rs1_addr;
    CData/*4:0*/ regfile_tb__DOT__rs2_addr;
    CData/*4:0*/ regfile_tb__DOT__rd_addr;
    CData/*0:0*/ regfile_tb__DOT__rd_we;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ regfile_tb__DOT__rd_wdata;
    IData/*31:0*/ regfile_tb__DOT__rs1_rdata;
    IData/*31:0*/ regfile_tb__DOT__rs2_rdata;
    IData/*31:0*/ regfile_tb__DOT__dut__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> regfile_tb__DOT__dut__DOT__regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h14db129c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile_tb___024root(Vregfile_tb__Syms* symsp, const char* v__name);
    ~Vregfile_tb___024root();
    VL_UNCOPYABLE(Vregfile_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
