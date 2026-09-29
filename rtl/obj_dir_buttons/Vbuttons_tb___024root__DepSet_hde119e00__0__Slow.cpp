// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuttons_tb.h for the primary calling header

#include "Vbuttons_tb__pch.h"
#include "Vbuttons_tb___024root.h"

VL_ATTR_COLD void Vbuttons_tb___024root___eval_static(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbuttons_tb___024root___eval_initial__TOP(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xaU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xbU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xcU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xdU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xeU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0xfU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x10U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x11U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x12U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x13U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x14U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x15U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x16U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x17U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x18U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x19U] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1aU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1bU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1cU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1dU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1eU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0x1fU] = 0U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i = 0x20U;
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i)) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[(0xfffU 
                                                                      & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i)] = 0U;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i 
            = ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i);
    }
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x696e6974U;
    __Vtemp_3[2U] = 0x6174615fU;
    __Vtemp_3[3U] = 0x64U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_3)
                 ,  &(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b00U, vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i)) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_h1174803a__0 = 0U;
        if (VL_LIKELY((0x4affU >= (0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i)))) {
            vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem[(0x7fffU 
                                                                             & vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i)] 
                = vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_h1174803a__0;
        }
        vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i 
            = ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i);
    }
}

VL_ATTR_COLD void Vbuttons_tb___024root___eval_final(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__stl(Vbuttons_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbuttons_tb___024root___eval_phase__stl(Vbuttons_tb___024root* vlSelf);

VL_ATTR_COLD void Vbuttons_tb___024root___eval_settle(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbuttons_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/buttons_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbuttons_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__stl(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbuttons_tb___024root___stl_sequent__TOP__0(Vbuttons_tb___024root* vlSelf);
VL_ATTR_COLD void Vbuttons_tb___024root____Vm_traceActivitySetAll(Vbuttons_tb___024root* vlSelf);

VL_ATTR_COLD void Vbuttons_tb___024root___eval_stl(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbuttons_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vbuttons_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vbuttons_tb__ConstPool__TABLE_heca81d36_0;

VL_ATTR_COLD void Vbuttons_tb___024root___stl_sequent__TOP__0(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 7U));
    vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr 
        = (0x7fffU & (((IData)(0xa0U) * (0x7fU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count) 
                                                  >> 2U))) 
                      + (0xffU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count) 
                                  >> 2U))));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0xfU));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2 
        = (0x1fU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                    [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                >> 2U))] >> 0x14U));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
        = vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
        [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                    >> 2U))];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3 
        = (7U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                 [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                             >> 2U))] >> 0xcU));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode 
        = (0x7fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
           [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                       >> 2U))]);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
        = ((0U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1))
            ? 0U : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
           [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1]);
    if ((0U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2))) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata = 0U;
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata = 0U;
    } else {
        vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata 
            = (0xffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
               [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2]);
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata 
            = vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
            [vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2];
    }
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
        = ((0x40U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                         ? (((- (IData)(
                                                        (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | (((0xff000U 
                                                 & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction) 
                                                | (0x800U 
                                                   & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                               [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src 
        = Vbuttons_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write 
        = Vbuttons_tb__ConstPool__TABLE_he6d0abef_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl 
        = Vbuttons_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read 
        = Vbuttons_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write 
        = Vbuttons_tb__ConstPool__TABLE_h77df0047_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel 
        = Vbuttons_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch 
        = Vbuttons_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump 
        = Vbuttons_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr 
        = Vbuttons_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel 
        = Vbuttons_tb__ConstPool__TABLE_heca81d36_0
        [__Vtableidx1];
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
           + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src)
            ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out
            : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
        = ((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
            ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc
            : ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel))
                ? 0U : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__next_pc 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump)
            ? ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                ? (0xfffffffeU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                  + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
            : (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch) 
                & ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                               < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                        : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                            ? VL_GTES_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                            : VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                    : ((1U & (~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                 >> 1U))) && ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                : ((IData)(4U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                                  ? ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                                      < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
             ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a, 
                                      (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        >> (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
                 : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        << (0x1fU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        ^ vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))
             : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                 ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b))
                 : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl))
                     ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        - vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)
                     : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a 
                        + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b)))));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write 
        = ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
           & ((0x10000000U <= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result) 
              & (0x10004affU >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0 
        = ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
            [(0xfffU & ((IData)(1U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
            << 8U) | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
           [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]);
    vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata = 0U;
    if (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) {
        vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                             ? (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)
                             : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? 0U : ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]))));
    }
}

VL_ATTR_COLD void Vbuttons_tb___024root___eval_triggers__stl(Vbuttons_tb___024root* vlSelf);

VL_ATTR_COLD bool Vbuttons_tb___024root___eval_phase__stl(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbuttons_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbuttons_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__act(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge buttons_tb.clk_100mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge buttons_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge buttons_tb.dut.display.clk_25mhz)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbuttons_tb___024root___dump_triggers__nba(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge buttons_tb.clk_100mhz)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge buttons_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge buttons_tb.dut.display.clk_25mhz)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbuttons_tb___024root____Vm_traceActivitySetAll(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vbuttons_tb___024root___ctor_var_reset(Vbuttons_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->buttons_tb__DOT__clk_100mhz = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__btnU = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__btnD = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__btnL = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__btnR = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__idx_new = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__idx_old = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__fb_wdata = VL_RAND_RESET_I(8);
    vlSelf->buttons_tb__DOT__dut__DOT__btnU_clean = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__btnD_clean = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__btnL_clean = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__btnR_clean = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_u__DOT__counter = VL_RAND_RESET_I(18);
    vlSelf->buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_d__DOT__counter = VL_RAND_RESET_I(18);
    vlSelf->buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_l__DOT__counter = VL_RAND_RESET_I(18);
    vlSelf->buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_r__DOT__counter = VL_RAND_RESET_I(18);
    vlSelf->buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2 = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__led_out = VL_RAND_RESET_I(4);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel = VL_RAND_RESET_I(2);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__im_out = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0 = VL_RAND_RESET_I(16);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr = VL_RAND_RESET_I(15);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel = VL_RAND_RESET_I(8);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__video_on_d = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__hsync_d = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__vsync_d = VL_RAND_RESET_I(1);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count = VL_RAND_RESET_I(10);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 19200; ++__Vi0) {
        vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_h1174803a__0 = VL_RAND_RESET_I(8);
    vlSelf->buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT____Vlvbound_ha980ca89__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__btnU_clean = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__btnD_clean = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__btnL_clean = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__btnR_clean = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count = VL_RAND_RESET_I(10);
    vlSelf->__VdlyVal__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 = VL_RAND_RESET_I(15);
    vlSelf->__VdlySet__buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__buttons_tb__DOT__clk_100mhz__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__buttons_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
