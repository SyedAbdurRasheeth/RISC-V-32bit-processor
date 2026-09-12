// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_top_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TOP_TB___024ROOT_H_
#define VERILATED_VCPU_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_top_tb__DOT__clk;
    CData/*0:0*/ cpu_top_tb__DOT__rst;
    CData/*4:0*/ cpu_top_tb__DOT__dut__DOT__rd;
    CData/*2:0*/ cpu_top_tb__DOT__dut__DOT__funct3;
    CData/*4:0*/ cpu_top_tb__DOT__dut__DOT__rs1;
    CData/*4:0*/ cpu_top_tb__DOT__dut__DOT__rs2;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__reg_write;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__alu_src;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__mem_read;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__branch;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__jump;
    CData/*0:0*/ cpu_top_tb__DOT__dut__DOT__jalr;
    CData/*3:0*/ cpu_top_tb__DOT__dut__DOT__alu_ctrl;
    CData/*1:0*/ cpu_top_tb__DOT__dut__DOT__wb_sel;
    CData/*1:0*/ cpu_top_tb__DOT__dut__DOT__alu_a_sel;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_top_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__next_pc;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__im_out;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__rs2_rdata;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__alu_result;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT__mem_rdata;
    IData/*31:0*/ cpu_top_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> cpu_top_tb__DOT__dut__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> cpu_top_tb__DOT__dut__DOT__rf__DOT__regs;
    VlUnpacked<CData/*7:0*/, 4096> cpu_top_tb__DOT__dut__DOT__mem__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_top_tb___024root(Vcpu_top_tb__Syms* symsp, const char* v__name);
    ~Vcpu_top_tb___024root();
    VL_UNCOPYABLE(Vcpu_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
