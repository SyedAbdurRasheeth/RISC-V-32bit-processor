// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top_tb.h for the primary calling header

#include "Vcpu_top_tb__pch.h"
#include "Vcpu_top_tb__Syms.h"
#include "Vcpu_top_tb___024root.h"

VL_ATTR_COLD void Vcpu_top_tb___024root___eval_initial__TOP(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[1U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[2U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[3U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[4U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[5U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[6U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[7U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[8U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[9U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xaU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xbU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xcU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xdU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xeU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0xfU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x10U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x11U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x12U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x13U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x14U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x15U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x16U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x17U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x18U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x19U] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1aU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1bU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1cU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1dU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1eU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0x1fU] = 0U;
    vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__i = 0x20U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_top_tb___024root___dump_triggers__stl(Vcpu_top_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_top_tb___024root___eval_triggers__stl(Vcpu_top_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_top_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
