// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb.h for the primary calling header

#include "Vcpu_top_tb__pch.h"
#include "Vcpu_top_tb__Syms.h"
#include "Vcpu_top_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cpu_top_tb__DOT__errors;
    cpu_top_tb__DOT__errors = 0;
    // Body
    cpu_top_tb__DOT__errors = 0U;
    vlSelfRef.cpu_top_tb__DOT__clk = 0U;
    vlSelfRef.cpu_top_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/cpu_top_tb.v", 
                                         28);
    vlSelfRef.cpu_top_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1d4c0ULL, 
                                         nullptr, "tb/cpu_top_tb.v", 
                                         32);
    VL_WRITEF_NX("----------------------------------------\nCPU TEST RESULTS\n----------------------------------------\nx3 (expect 8):  %0d\nx4 (expect 2):  %0d\nx5 (expect 1):  %0d\nx6 (expect 7):  %0d\nx7 (expect 6):  %0d\nx8 (expect 1):  %0d\nx9 (expect 0):  %0d\n",0,
                 32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [3U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [4U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [5U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [6U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [7U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [8U],32,vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                 [9U]);
    if ((8U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [3U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((2U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [4U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((1U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [5U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((7U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [6U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((6U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [7U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((1U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [8U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    if ((0U != vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
         [9U])) {
        cpu_top_tb__DOT__errors = ((IData)(1U) + cpu_top_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == cpu_top_tb__DOT__errors)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
        VL_FINISH_MT("tb/cpu_top_tb.v", 74, "");
    } else {
        VL_WRITEF_NX("TEST FAILED: %0d errors\n[%0t] %%Fatal: cpu_top_tb.v:78: Assertion failed in %Ncpu_top_tb\n",0,
                     32,cpu_top_tb__DOT__errors,64,
                     VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/cpu_top_tb.v", 78, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb___024root___dump_triggers__act(Vcpu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_top_tb___024root___eval_triggers__act(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.cpu_top_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.cpu_top_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__clk__0 
        = vlSelfRef.cpu_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_top_tb__DOT__rst__0 
        = vlSelfRef.cpu_top_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_top_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
