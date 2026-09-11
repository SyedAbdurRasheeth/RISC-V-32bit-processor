// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vloadstore_tb.h for the primary calling header

#include "Vloadstore_tb__pch.h"
#include "Vloadstore_tb__Syms.h"
#include "Vloadstore_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vloadstore_tb___024root___eval_initial__TOP__Vtiming__0(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ loadstore_tb__DOT__errors;
    loadstore_tb__DOT__errors = 0;
    // Body
    loadstore_tb__DOT__errors = 0U;
    vlSelfRef.loadstore_tb__DOT__clk = 0U;
    vlSelfRef.loadstore_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/loadstore_tb.v", 
                                         28);
    vlSelfRef.loadstore_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1d4c0ULL, 
                                         nullptr, "tb/loadstore_tb.v", 
                                         32);
    VL_WRITEF_NX("----------------------------------------\nCPU TEST RESULTS AFTER LOAD AND STORE\n----------------------------------------\nx10 (LW) : expect -5, got %0d\nx11 (LB) : expect -56, got %0d\nx12 (LBU): expect 200, got %0d\nx13 (LH) : expect 200, got %0d\nx14 (LHU): expect 200, got %0d\n",0,
                 32,vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xaU],32,vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xbU],32,vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xcU],32,vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xdU],32,vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xeU]);
    if (VL_UNLIKELY((0xfffffffbU != vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xaU]))) {
        VL_WRITEF_NX("ERROR: x10 incorrect\n",0);
        loadstore_tb__DOT__errors = ((IData)(1U) + loadstore_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0xffffffc8U != vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xbU]))) {
        VL_WRITEF_NX("ERROR: x11 incorrect\n",0);
        loadstore_tb__DOT__errors = ((IData)(1U) + loadstore_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xcU]))) {
        VL_WRITEF_NX("ERROR: x12 incorrect\n",0);
        loadstore_tb__DOT__errors = ((IData)(1U) + loadstore_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xdU]))) {
        VL_WRITEF_NX("ERROR: x13 incorrect\n",0);
        loadstore_tb__DOT__errors = ((IData)(1U) + loadstore_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.loadstore_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xeU]))) {
        VL_WRITEF_NX("ERROR: x14 incorrect\n",0);
        loadstore_tb__DOT__errors = ((IData)(1U) + loadstore_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == loadstore_tb__DOT__errors)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
        VL_FINISH_MT("tb/loadstore_tb.v", 78, "");
    } else {
        VL_WRITEF_NX("TEST FAILED: %0d errors\n[%0t] %%Fatal: loadstore_tb.v:82: Assertion failed in %Nloadstore_tb\n",0,
                     32,loadstore_tb__DOT__errors,64,
                     VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/loadstore_tb.v", 82, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vloadstore_tb___024root___dump_triggers__act(Vloadstore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vloadstore_tb___024root___eval_triggers__act(Vloadstore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vloadstore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vloadstore_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.loadstore_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.loadstore_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__clk__0 
        = vlSelfRef.loadstore_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__loadstore_tb__DOT__rst__0 
        = vlSelfRef.loadstore_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vloadstore_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
