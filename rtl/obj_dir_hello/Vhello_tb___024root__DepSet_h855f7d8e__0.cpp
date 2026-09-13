// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_tb.h for the primary calling header

#include "Vhello_tb__pch.h"
#include "Vhello_tb__Syms.h"
#include "Vhello_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vhello_tb___024root___eval_initial__TOP__Vtiming__0(Vhello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hello_tb__DOT__errors = 0U;
    vlSelfRef.hello_tb__DOT__clk = 0U;
    vlSelfRef.hello_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/hello_tb.v", 
                                         29);
    vlSelfRef.hello_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x927c0ULL, 
                                         nullptr, "tb/hello_tb.v", 
                                         33);
    VL_WRITEF_NX("----------------------------------------\nCPU TEST RESULTS HELLO\n----------------------------------------\nresult byte 0 : 0x%02x\nresult byte 1 : 0x%02x\nresult byte 2 : 0x%02x\nresult byte 3 : 0x%02x\nresult = %0# (expect 12)\n",0,
                 8,vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                 [0U],8,vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                 [1U],8,vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                 [2U],8,vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                 [3U],32,(((vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                            [3U] << 0x18U) | (vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                                              [2U] 
                                              << 0x10U)) 
                          | ((vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                              [1U] << 8U) | vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                             [0U])));
    if (VL_UNLIKELY((0xcU != (((vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                                [3U] << 0x18U) | (vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                                                  [2U] 
                                                  << 0x10U)) 
                              | ((vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                                  [1U] << 8U) | vlSelfRef.hello_tb__DOT__dut__DOT__mem__DOT__mem
                                 [0U]))))) {
        VL_WRITEF_NX("ERROR: result incorrect\n",0);
        vlSelfRef.hello_tb__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.hello_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == vlSelfRef.hello_tb__DOT__errors)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
        VL_FINISH_MT("tb/hello_tb.v", 69, "");
    } else {
        VL_WRITEF_NX("TEST FAILED: %0d errors\n[%0t] %%Fatal: hello_tb.v:73: Assertion failed in %Nhello_tb\n",0,
                     32,vlSelfRef.hello_tb__DOT__errors,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/hello_tb.v", 73, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello_tb___024root___dump_triggers__act(Vhello_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello_tb___024root___eval_triggers__act(Vhello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.hello_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hello_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.hello_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__hello_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__hello_tb__DOT__clk__0 
        = vlSelfRef.hello_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__hello_tb__DOT__rst__0 
        = vlSelfRef.hello_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
