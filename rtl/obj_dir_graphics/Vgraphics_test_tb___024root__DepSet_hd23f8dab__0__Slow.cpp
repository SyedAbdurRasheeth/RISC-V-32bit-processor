// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgraphics_test_tb.h for the primary calling header

#include "Vgraphics_test_tb__pch.h"
#include "Vgraphics_test_tb__Syms.h"
#include "Vgraphics_test_tb___024root.h"

VL_ATTR_COLD void Vgraphics_test_tb___024root___eval_initial__TOP(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x745f7462U;
    __Vtemp_1[2U] = 0x5f746573U;
    __Vtemp_1[3U] = 0x68696373U;
    __Vtemp_1[4U] = 0x67726170U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xaU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xbU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xcU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xdU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xeU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xfU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x10U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x11U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x12U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x13U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x14U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x15U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x16U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x17U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x18U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x19U] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1aU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1bU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1cU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1dU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1eU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1fU] = 0U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i = 0x20U;
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i)) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[(0xfffU 
                                                                            & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i)] = 0U;
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i 
            = ((IData)(1U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i);
    }
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x696e6974U;
    __Vtemp_4[2U] = 0x6174615fU;
    __Vtemp_4[3U] = 0x64U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_4)
                 ,  &(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b00U, vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i)) {
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT____Vlvbound_h1174803a__0 = 0U;
        if (VL_LIKELY((0x4affU >= (0x7fffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i)))) {
            vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__mem[(0x7fffU 
                                                                                & vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i)] 
                = vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT____Vlvbound_h1174803a__0;
        }
        vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i 
            = ((IData)(1U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgraphics_test_tb___024root___dump_triggers__stl(Vgraphics_test_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vgraphics_test_tb___024root___eval_triggers__stl(Vgraphics_test_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgraphics_test_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
