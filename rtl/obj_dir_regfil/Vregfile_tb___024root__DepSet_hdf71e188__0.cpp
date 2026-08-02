// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb__Syms.h"
#include "Vregfile_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x66696c65U;
    __Vtemp_1[2U] = 0x726567U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.regfile_tb__DOT__rs1_addr = 0U;
    vlSelfRef.regfile_tb__DOT__rs2_addr = 0U;
    vlSelfRef.regfile_tb__DOT__rd_addr = 0U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 1 : Write 100 to x1\n",0);
    vlSelfRef.regfile_tb__DOT__rd_addr = 1U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0x64U;
    vlSelfRef.regfile_tb__DOT__rd_we = 1U;
    co_await vlSelfRef.__VtrigSched_h14db129c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge regfile_tb.clk)", 
                                                         "tb/regfile_tb.v", 
                                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    vlSelfRef.regfile_tb__DOT__rs1_addr = 1U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         59);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x64U == vlSelfRef.regfile_tb__DOT__rs1_rdata)) {
        VL_WRITEF_NX("PASS: x1 = %10#\n",0,32,vlSelfRef.regfile_tb__DOT__rs1_rdata);
    } else {
        VL_WRITEF_NX("FAIL: Expected 100, Got %10#\n",0,
                     32,vlSelfRef.regfile_tb__DOT__rs1_rdata);
    }
    VL_WRITEF_NX("Test 2 : Write 200 to x2\n",0);
    vlSelfRef.regfile_tb__DOT__rd_addr = 2U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0xc8U;
    vlSelfRef.regfile_tb__DOT__rd_we = 1U;
    co_await vlSelfRef.__VtrigSched_h14db129c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge regfile_tb.clk)", 
                                                         "tb/regfile_tb.v", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    vlSelfRef.regfile_tb__DOT__rs2_addr = 2U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xc8U == vlSelfRef.regfile_tb__DOT__rs2_rdata)) {
        VL_WRITEF_NX("PASS: x2 = %10#\n",0,32,vlSelfRef.regfile_tb__DOT__rs2_rdata);
    } else {
        VL_WRITEF_NX("FAIL: Expected 200, Got %10#\n",0,
                     32,vlSelfRef.regfile_tb__DOT__rs2_rdata);
    }
    VL_WRITEF_NX("Test 3 : Read x1 and x2\n",0);
    vlSelfRef.regfile_tb__DOT__rs1_addr = 1U;
    vlSelfRef.regfile_tb__DOT__rs2_addr = 2U;
    if (((0x64U == vlSelfRef.regfile_tb__DOT__rs1_rdata) 
         & (0xc8U == vlSelfRef.regfile_tb__DOT__rs2_rdata))) {
        VL_WRITEF_NX("x1 = %10#\nx2 = %10#\nPASS\n",0,
                     32,vlSelfRef.regfile_tb__DOT__rs1_rdata,
                     32,vlSelfRef.regfile_tb__DOT__rs2_rdata);
    } else {
        VL_WRITEF_NX("FAIL: x1=%10# x2=%10#\n",0,32,
                     vlSelfRef.regfile_tb__DOT__rs1_rdata,
                     32,vlSelfRef.regfile_tb__DOT__rs2_rdata);
    }
    VL_WRITEF_NX("TTest 4 : Attempt Write to x0\n",0);
    vlSelfRef.regfile_tb__DOT__rd_addr = 0U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0x64U;
    vlSelfRef.regfile_tb__DOT__rd_we = 1U;
    co_await vlSelfRef.__VtrigSched_h14db129c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge regfile_tb.clk)", 
                                                         "tb/regfile_tb.v", 
                                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    vlSelfRef.regfile_tb__DOT__rs2_addr = 0U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelfRef.regfile_tb__DOT__rs2_rdata)) {
        VL_WRITEF_NX("PASS: x0 remained zero\n",0);
    } else {
        VL_WRITEF_NX("FAIL: x0 = %10#\n",0,32,vlSelfRef.regfile_tb__DOT__rs2_rdata);
    }
    VL_WRITEF_NX("Test 5 : Write Disabled\n",0);
    vlSelfRef.regfile_tb__DOT__rd_addr = 3U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0x64U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    co_await vlSelfRef.__VtrigSched_h14db129c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge regfile_tb.clk)", 
                                                         "tb/regfile_tb.v", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rs1_addr = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         134);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelfRef.regfile_tb__DOT__rs1_rdata)) {
        VL_WRITEF_NX("PASS: Write disabled\n",0);
    } else {
        VL_WRITEF_NX("FAIL: x3 = %10#\n",0,32,vlSelfRef.regfile_tb__DOT__rs1_rdata);
    }
    co_await vlSelfRef.__VdlySched.delay(3ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         140);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Test 6 : Overwrite x1\n",0);
    vlSelfRef.regfile_tb__DOT__rd_addr = 1U;
    vlSelfRef.regfile_tb__DOT__rd_wdata = 0x32U;
    vlSelfRef.regfile_tb__DOT__rd_we = 1U;
    co_await vlSelfRef.__VtrigSched_h14db129c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge regfile_tb.clk)", 
                                                         "tb/regfile_tb.v", 
                                                         149);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         150);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.regfile_tb__DOT__rd_we = 0U;
    vlSelfRef.regfile_tb__DOT__rs1_addr = 1U;
    co_await vlSelfRef.__VdlySched.delay(4ULL, nullptr, 
                                         "tb/regfile_tb.v", 
                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0U == vlSelfRef.regfile_tb__DOT__rs1_rdata)) {
        VL_WRITEF_NX("PASS: Write disabled\n",0);
    } else {
        VL_WRITEF_NX("FAIL: x3 = %10#\n",0,32,vlSelfRef.regfile_tb__DOT__rs1_rdata);
    }
    VL_WRITEF_NX("--------------------------------\nSimulation Finished Successfully\n--------------------------------\n",0);
    VL_FINISH_MT("tb/regfile_tb.v", 165, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.regfile_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelfRef.regfile_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
