// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjump_test_tb.h for the primary calling header

#include "Vjump_test_tb__pch.h"
#include "Vjump_test_tb__Syms.h"
#include "Vjump_test_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vjump_test_tb___024root___eval_initial__TOP__Vtiming__0(Vjump_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjump_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjump_test_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ jump_test_tb__DOT__errors;
    jump_test_tb__DOT__errors = 0;
    // Body
    jump_test_tb__DOT__errors = 0U;
    vlSelfRef.jump_test_tb__DOT__clk = 0U;
    vlSelfRef.jump_test_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/jump_test_tb.v", 
                                         29);
    vlSelfRef.jump_test_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1d4c0ULL, 
                                         nullptr, "tb/jump_test_tb.v", 
                                         33);
    VL_WRITEF_NX("----------------------------------------\nCPU TEST RESULTS - JAL/JALR/LUI/AUIPC\n----------------------------------------\nx1  (LUI + ADDI) : expect 0x12345678, got 0x%08x\nx2  (AUIPC)      : expect 8, got %0d\nx10 (JAL link)   : expect 16, got %0d\nx21 (JAL target) : expect 42, got %0d\nx20 (skipped)    : expect 0, got %0d\n",0,
                 32,vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                 [1U],32,vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                 [2U],32,vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                 [0xaU],32,vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                 [0x15U],32,vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                 [0x14U]);
    if (VL_UNLIKELY((0x12345678U != vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                     [1U]))) {
        VL_WRITEF_NX("ERROR: x1 incorrect\n",0);
        jump_test_tb__DOT__errors = ((IData)(1U) + jump_test_tb__DOT__errors);
    }
    if (VL_UNLIKELY((8U != vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                     [2U]))) {
        VL_WRITEF_NX("ERROR: x2 incorrect\n",0);
        jump_test_tb__DOT__errors = ((IData)(1U) + jump_test_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x10U != vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                     [0xaU]))) {
        VL_WRITEF_NX("ERROR: x10 incorrect\n",0);
        jump_test_tb__DOT__errors = ((IData)(1U) + jump_test_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x2aU != vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                     [0x15U]))) {
        VL_WRITEF_NX("ERROR: x21 incorrect\n",0);
        jump_test_tb__DOT__errors = ((IData)(1U) + jump_test_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0U != vlSelfRef.jump_test_tb__DOT__dut__DOT__rf__DOT__regs
                     [0x14U]))) {
        VL_WRITEF_NX("ERROR: x20 was executed unexpectedly\n",0);
        jump_test_tb__DOT__errors = ((IData)(1U) + jump_test_tb__DOT__errors);
    }
    VL_WRITEF_NX("----------------------------------------\n",0);
    if ((0U == jump_test_tb__DOT__errors)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
        VL_FINISH_MT("tb/jump_test_tb.v", 89, "");
    } else {
        VL_WRITEF_NX("TEST FAILED: %0d errors\n[%0t] %%Fatal: jump_test_tb.v:93: Assertion failed in %Njump_test_tb\n",0,
                     32,jump_test_tb__DOT__errors,64,
                     VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/jump_test_tb.v", 93, "", false);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjump_test_tb___024root___dump_triggers__act(Vjump_test_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjump_test_tb___024root___eval_triggers__act(Vjump_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjump_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjump_test_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.jump_test_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jump_test_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.jump_test_tb__DOT__rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jump_test_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__jump_test_tb__DOT__clk__0 
        = vlSelfRef.jump_test_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jump_test_tb__DOT__rst__0 
        = vlSelfRef.jump_test_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjump_test_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
