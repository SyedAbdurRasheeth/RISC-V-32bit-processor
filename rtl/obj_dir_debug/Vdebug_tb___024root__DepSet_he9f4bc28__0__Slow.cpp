// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebug_tb.h for the primary calling header

#include "Vdebug_tb__pch.h"
#include "Vdebug_tb___024root.h"

VL_ATTR_COLD void Vdebug_tb___024root___eval_static(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdebug_tb___024root___eval_final(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__stl(Vdebug_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdebug_tb___024root___eval_phase__stl(Vdebug_tb___024root* vlSelf);

VL_ATTR_COLD void Vdebug_tb___024root___eval_settle(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_settle\n"); );
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
            Vdebug_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/debug_tb.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdebug_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__stl(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vdebug_tb___024root___stl_sequent__TOP__0(Vdebug_tb___024root* vlSelf);
VL_ATTR_COLD void Vdebug_tb___024root____Vm_traceActivitySetAll(Vdebug_tb___024root* vlSelf);

VL_ATTR_COLD void Vdebug_tb___024root___eval_stl(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdebug_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vdebug_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h166e4241_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_he6d0abef_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h9f17eced_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h6eb94307_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h77df0047_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h6a75275c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h0e6b8061_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_h61101785_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vdebug_tb__ConstPool__TABLE_hb43972ed_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vdebug_tb__ConstPool__TABLE_heca81d36_0;

VL_ATTR_COLD void Vdebug_tb___024root___stl_sequent__TOP__0(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.debug_tb__DOT__dut__DOT__rd = (0x1fU 
                                             & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                [(0x3ffU 
                                                  & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 7U));
    vlSelfRef.debug_tb__DOT__dut__DOT__rs1 = (0x1fU 
                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 0xfU));
    vlSelfRef.debug_tb__DOT__dut__DOT__rs2 = (0x1fU 
                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))] 
                                                 >> 0x14U));
    vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
        = vlSelfRef.debug_tb__DOT__dut__DOT__imem[(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))];
    vlSelfRef.debug_tb__DOT__dut__DOT__funct3 = (7U 
                                                 & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                    [
                                                    (0x3ffU 
                                                     & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 0xcU));
    vlSelfRef.debug_tb__DOT__dut__DOT__opcode = (0x7fU 
                                                 & vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                                 [(0x3ffU 
                                                   & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                                      >> 2U))]);
    vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata = 
        ((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs1))
          ? 0U : vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
         [vlSelfRef.debug_tb__DOT__dut__DOT__rs1]);
    vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata = 
        ((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs2))
          ? 0U : vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
         [vlSelfRef.debug_tb__DOT__dut__DOT__rs2]);
    vlSelfRef.debug_tb__DOT__dut__DOT__im_out = ((0x40U 
                                                  & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                  ? 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0x14U) 
                                                        | (((0xff000U 
                                                             & vlSelfRef.debug_tb__DOT__dut__DOT__instruction) 
                                                            | (0x800U 
                                                               & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                  >> 9U))) 
                                                           | (0x7feU 
                                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                 >> 0x14U))))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0x800U 
                                                            & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                    >> 7U)))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
                                                   & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.debug_tb__DOT__dut__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (0xfffff000U 
                                                        & vlSelfRef.debug_tb__DOT__dut__DOT__instruction)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode))
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelfRef.debug_tb__DOT__dut__DOT__instruction 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
    __Vtableidx1 = ((0x400U & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                               [(0x3ffU & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                           >> 2U))] 
                               >> 0x14U)) | (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__opcode)));
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_src = Vdebug_tb__ConstPool__TABLE_h166e4241_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__reg_write = 
        Vdebug_tb__ConstPool__TABLE_he6d0abef_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl = Vdebug_tb__ConstPool__TABLE_h9f17eced_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_read = Vdebug_tb__ConstPool__TABLE_h6eb94307_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_write = 
        Vdebug_tb__ConstPool__TABLE_h77df0047_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel = Vdebug_tb__ConstPool__TABLE_h6a75275c_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__branch = Vdebug_tb__ConstPool__TABLE_h0e6b8061_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__jump = Vdebug_tb__ConstPool__TABLE_h61101785_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__jalr = Vdebug_tb__ConstPool__TABLE_hb43972ed_0
        [__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel = 
        Vdebug_tb__ConstPool__TABLE_heca81d36_0[__Vtableidx1];
    vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1 
        = (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
           + vlSelfRef.debug_tb__DOT__dut__DOT__pc);
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_b = ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_src)
                                                 ? vlSelfRef.debug_tb__DOT__dut__DOT__im_out
                                                 : vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata);
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_a = ((1U 
                                                 == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel))
                                                 ? vlSelfRef.debug_tb__DOT__dut__DOT__pc
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel))
                                                  ? 0U
                                                  : vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata));
    vlSelfRef.debug_tb__DOT__dut__DOT__next_pc = ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jump)
                                                   ? 
                                                  ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jalr)
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
                                                       + vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata))
                                                    : vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1)
                                                   : 
                                                  (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__branch) 
                                                    & ((4U 
                                                        & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                          ? 
                                                         (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                          >= vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                          : 
                                                         (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                          < vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                          ? 
                                                         VL_GTES_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                          : 
                                                         VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))
                                                        : 
                                                       ((1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                                             >> 1U))) 
                                                        && ((1U 
                                                             & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                                             ? 
                                                            (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                             != vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                                             : 
                                                            (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                             == vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))))
                                                    ? vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.debug_tb__DOT__dut__DOT__pc)));
    vlSelfRef.debug_tb__DOT__dut__DOT__alu_result = 
        ((8U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
          ? ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
              ? 0U : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                       ? 0U : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                                ? ((vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                                    < vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                                    ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__alu_a, vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                                                   ? 1U
                                                   : 0U))))
          : ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
              ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                  ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? VL_SHIFTRS_III(32,32,5, vlSelfRef.debug_tb__DOT__dut__DOT__alu_a, 
                                       (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         >> (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))
                  : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         << (0x1fU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         ^ vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))
              : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                  ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         | vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         & vlSelfRef.debug_tb__DOT__dut__DOT__alu_b))
                  : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl))
                      ? (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         - vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)
                      : (vlSelfRef.debug_tb__DOT__dut__DOT__alu_a 
                         + vlSelfRef.debug_tb__DOT__dut__DOT__alu_b)))));
    vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0 
        = ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
            [(0xfffU & ((IData)(1U) + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
            << 8U) | vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
           [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]);
    vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata = 0U;
    if (vlSelfRef.debug_tb__DOT__dut__DOT__mem_read) {
        vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata 
            = ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                    ? 0U : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                             ? (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0)
                             : vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]))
                : ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                    ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                        ? 0U : ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                 [(0xfffU & ((IData)(3U) 
                                             + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                 << 0x18U) | ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                               [(0xfffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0))))
                    : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                        ? (((- (IData)((1U & (vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                              >> 7U)))) 
                            << 0x10U) | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0))
                        : (((- (IData)((1U & (vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                           [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]))));
    }
}

VL_ATTR_COLD void Vdebug_tb___024root___eval_triggers__stl(Vdebug_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdebug_tb___024root___eval_phase__stl(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdebug_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdebug_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__act(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge debug_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge debug_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdebug_tb___024root___dump_triggers__nba(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge debug_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge debug_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdebug_tb___024root____Vm_traceActivitySetAll(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vdebug_tb___024root___ctor_var_reset(Vdebug_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->debug_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__next_pc = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->debug_tb__DOT__dut__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->debug_tb__DOT__dut__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->debug_tb__DOT__dut__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->debug_tb__DOT__dut__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->debug_tb__DOT__dut__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->debug_tb__DOT__dut__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->debug_tb__DOT__dut__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->debug_tb__DOT__dut__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->debug_tb__DOT__dut__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->debug_tb__DOT__dut__DOT__alu_a_sel = VL_RAND_RESET_I(2);
    vlSelf->debug_tb__DOT__dut__DOT__im_out = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__rs1_rdata = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__rs2_rdata = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->debug_tb__DOT__dut__DOT__rf__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->debug_tb__DOT__dut__DOT__rf__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->debug_tb__DOT__dut__DOT__mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->debug_tb__DOT__dut__DOT__mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->debug_tb__DOT__dut__DOT__mem__DOT__half0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__debug_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__debug_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
