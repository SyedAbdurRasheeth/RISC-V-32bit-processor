// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_tb.h for the primary calling header

#include "Vbranch_tb__pch.h"
#include "Vbranch_tb__Syms.h"
#include "Vbranch_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vbranch_tb___024root___eval_initial__TOP__Vtiming__0(Vbranch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.branch_tb__DOT__errors = 0U;
    vlSelfRef.branch_tb__DOT__clk = 0U;
    vlSelfRef.branch_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/branch_tb.v", 
                                         28);
    vlSelfRef.branch_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x222e0ULL, 
                                         nullptr, "tb/branch_tb.v", 
                                         33);
    VL_WRITEF_NX("----------------------------------------\nCPU TEST RESULTS AFTER BRANCH TEST\n----------------------------------------\nx10 (BEQ) : expect 1, got %0d\nx11 (BNE) : expect 2, got %0d\nx12 (BLT) : expect 3, got %0d\nx13 (BGE) : expect 4, got %0d\nx14 (BEQ NT): expect 5, got %0d\n",0,
                 32,vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xaU],32,vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xbU],32,vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xcU],32,vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xdU],32,vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xeU]);
    if (VL_UNLIKELY((1U != vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xaU]))) {
        VL_WRITEF_NX("ERROR: x10 incorrect\n",0);
        vlSelfRef.branch_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.branch_tb__DOT__errors);
    }
    if (VL_UNLIKELY((2U != vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xbU]))) {
        VL_WRITEF_NX("ERROR: x11 incorrect\n",0);
        vlSelfRef.branch_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.branch_tb__DOT__errors);
    }
    if (VL_UNLIKELY((3U != vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xcU]))) {
        VL_WRITEF_NX("ERROR: x12 incorrect\n",0);
        vlSelfRef.branch_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.branch_tb__DOT__errors);
    }
    if (VL_UNLIKELY((4U != vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xdU]))) {
        VL_WRITEF_NX("ERROR: x13 incorrect\n",0);
        vlSelfRef.branch_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.branch_tb__DOT__errors);
    }
    if (VL_UNLIKELY((5U != vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xeU]))) {
        VL_WRITEF_NX("ERROR: x14 incorrect\n",0);
        vlSelfRef.branch_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.branch_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == vlSelfRef.branch_tb__DOT__errors)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
        VL_FINISH_MT("tb/branch_tb.v", 84, "");
    } else {
        VL_WRITEF_NX("TEST FAILED: %0d errors\n[%0t] %%Fatal: branch_tb.v:88: Assertion failed in %Nbranch_tb\n",0,
                     32,vlSelfRef.branch_tb__DOT__errors,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/branch_tb.v", 88, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_tb___024root___dump_triggers__act(Vbranch_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbranch_tb___024root___eval_triggers__act(Vbranch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.branch_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.branch_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__branch_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__branch_tb__DOT__clk__0 
        = vlSelfRef.branch_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__branch_tb__DOT__rst__0 
        = vlSelfRef.branch_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbranch_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
