// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbranch_tb.h for the primary calling header

#ifndef VERILATED_VBRANCH_TB___024ROOT_H_
#define VERILATED_VBRANCH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbranch_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbranch_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ branch_tb__DOT__clk;
    CData/*0:0*/ branch_tb__DOT__rst;
    CData/*6:0*/ branch_tb__DOT__dut__DOT__opcode;
    CData/*4:0*/ branch_tb__DOT__dut__DOT__rd;
    CData/*2:0*/ branch_tb__DOT__dut__DOT__funct3;
    CData/*4:0*/ branch_tb__DOT__dut__DOT__rs1;
    CData/*4:0*/ branch_tb__DOT__dut__DOT__rs2;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__reg_write;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__alu_src;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__mem_read;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__mem_to_reg;
    CData/*0:0*/ branch_tb__DOT__dut__DOT__branch;
    CData/*3:0*/ branch_tb__DOT__dut__DOT__alu_ctrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__branch_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__branch_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ branch_tb__DOT__dut__DOT__mem__DOT__half0;
    IData/*31:0*/ branch_tb__DOT__errors;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__next_pc;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__instruction;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__im_out;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__rs1_rdata;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__rs2_rdata;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__alu_b;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__alu_result;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__mem_rdata;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__rf__DOT__i;
    IData/*31:0*/ branch_tb__DOT__dut__DOT__mem__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> branch_tb__DOT__dut__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> branch_tb__DOT__dut__DOT__rf__DOT__regs;
    VlUnpacked<CData/*7:0*/, 4096> branch_tb__DOT__dut__DOT__mem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbranch_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbranch_tb___024root(Vbranch_tb__Syms* symsp, const char* v__name);
    ~Vbranch_tb___024root();
    VL_UNCOPYABLE(Vbranch_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
