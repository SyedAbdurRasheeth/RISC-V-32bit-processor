// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vframebuffer_tb.h for the primary calling header

#include "Vframebuffer_tb__pch.h"
#include "Vframebuffer_tb__Syms.h"
#include "Vframebuffer_tb___024root.h"

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_initial__TOP(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    __Vtemp_1[3U] = 0x66625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b00U, vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i)) {
        vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_h1174803a__0 = 0U;
        if (VL_LIKELY((0x4affU >= (0x7fffU & vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i)))) {
            vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__mem[(0x7fffU 
                                                                   & vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i)] 
                = vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT____Vlvbound_h1174803a__0;
        }
        vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i 
            = ((IData)(1U) + vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vframebuffer_tb___024root___dump_triggers__stl(Vframebuffer_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vframebuffer_tb___024root___eval_triggers__stl(Vframebuffer_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vframebuffer_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
