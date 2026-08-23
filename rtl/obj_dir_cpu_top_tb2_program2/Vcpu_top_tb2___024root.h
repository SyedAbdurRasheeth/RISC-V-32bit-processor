// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top_tb2.h for the primary calling header

#ifndef VERILATED_VCPU_TOP_TB2___024ROOT_H_
#define VERILATED_VCPU_TOP_TB2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_top_tb2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_top_tb2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_top_tb2__DOT__clk;
    CData/*0:0*/ cpu_top_tb2__DOT__rst;
    CData/*4:0*/ cpu_top_tb2__DOT__dut__DOT__rd;
    CData/*4:0*/ cpu_top_tb2__DOT__dut__DOT__rs1;
    CData/*4:0*/ cpu_top_tb2__DOT__dut__DOT__rs2;
    CData/*0:0*/ cpu_top_tb2__DOT__dut__DOT__reg_write;
    CData/*0:0*/ cpu_top_tb2__DOT__dut__DOT__alu_src;
    CData/*3:0*/ cpu_top_tb2__DOT__dut__DOT__alu_ctrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_top_tb2__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_top_tb2__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_top_tb2__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_top_tb2__DOT__dut__DOT__im_out;
    IData/*31:0*/ cpu_top_tb2__DOT__dut__DOT__alu_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> cpu_top_tb2__DOT__dut__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> cpu_top_tb2__DOT__dut__DOT__rf__DOT__regs;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_top_tb2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_top_tb2___024root(Vcpu_top_tb2__Syms* symsp, const char* v__name);
    ~Vcpu_top_tb2___024root();
    VL_UNCOPYABLE(Vcpu_top_tb2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
