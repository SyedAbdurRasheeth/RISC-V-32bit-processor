// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbuttons_tb.h for the primary calling header

#ifndef VERILATED_VBUTTONS_TB___024ROOT_H_
#define VERILATED_VBUTTONS_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbuttons_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbuttons_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ buttons_tb__DOT__clk_100mhz;
        CData/*0:0*/ buttons_tb__DOT__rst;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz;
        CData/*0:0*/ buttons_tb__DOT__btnU;
        CData/*0:0*/ buttons_tb__DOT__btnD;
        CData/*0:0*/ buttons_tb__DOT__btnL;
        CData/*0:0*/ buttons_tb__DOT__btnR;
        CData/*7:0*/ buttons_tb__DOT__dut__DOT__fb_wdata;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__btnU_clean;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__btnD_clean;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__btnL_clean;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__btnR_clean;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2;
        CData/*3:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__led_out;
        CData/*6:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__opcode;
        CData/*4:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rd;
        CData/*2:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__funct3;
        CData/*4:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rs1;
        CData/*4:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rs2;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__branch;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__jump;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__jalr;
        CData/*3:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl;
        CData/*1:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel;
        CData/*1:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write;
        CData/*7:0*/ buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__display__DOT__video_on_d;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__display__DOT__hsync_d;
        CData/*0:0*/ buttons_tb__DOT__dut__DOT__display__DOT__vsync_d;
        CData/*1:0*/ buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter;
        CData/*7:0*/ buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_h1174803a__0;
        CData/*7:0*/ buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_ha980ca89__0;
        CData/*0:0*/ __Vdly__buttons_tb__DOT__dut__DOT__btnU_clean;
        CData/*0:0*/ __Vdly__buttons_tb__DOT__dut__DOT__btnD_clean;
        CData/*0:0*/ __Vdly__buttons_tb__DOT__dut__DOT__btnL_clean;
        CData/*0:0*/ __Vdly__buttons_tb__DOT__dut__DOT__btnR_clean;
        CData/*7:0*/ __VdlyVal__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0;
        CData/*0:0*/ __VdlySet__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__buttons_tb__DOT__clk_100mhz__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__buttons_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0;
        SData/*14:0*/ buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr;
        SData/*9:0*/ buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count;
        SData/*9:0*/ buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count;
        SData/*9:0*/ __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count;
        SData/*9:0*/ __Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count;
        SData/*14:0*/ __VdlyDim0__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0;
        IData/*31:0*/ buttons_tb__DOT__i;
        IData/*31:0*/ buttons_tb__DOT__idx_new;
    };
    struct {
        IData/*31:0*/ buttons_tb__DOT__idx_old;
        IData/*31:0*/ buttons_tb__DOT__errors;
        IData/*17:0*/ buttons_tb__DOT__dut__DOT__db_u__DOT__counter;
        IData/*17:0*/ buttons_tb__DOT__dut__DOT__db_d__DOT__counter;
        IData/*17:0*/ buttons_tb__DOT__dut__DOT__db_l__DOT__counter;
        IData/*17:0*/ buttons_tb__DOT__dut__DOT__db_r__DOT__counter;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__pc;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__instruction;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__im_out;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i;
        IData/*31:0*/ buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 1024> buttons_tb__DOT__dut__DOT__cpu__DOT__imem;
        VlUnpacked<IData/*31:0*/, 32> buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs;
        VlUnpacked<CData/*7:0*/, 4096> buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem;
        VlUnpacked<CData/*7:0*/, 19200> buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem;
        VlUnpacked<CData/*0:0*/, 9> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc520ecdc__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbuttons_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbuttons_tb___024root(Vbuttons_tb__Syms* symsp, const char* v__name);
    ~Vbuttons_tb___024root();
    VL_UNCOPYABLE(Vbuttons_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
