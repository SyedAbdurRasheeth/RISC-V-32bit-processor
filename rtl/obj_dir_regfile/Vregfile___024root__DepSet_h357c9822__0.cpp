// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile.h for the primary calling header

#include "Vregfile__pch.h"
#include "Vregfile___024root.h"

void Vregfile___024root___ico_sequent__TOP__0(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_ico(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vregfile___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile___024root___ico_sequent__TOP__0(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1_rdata = ((0U == (IData)(vlSelfRef.rs1_addr))
                            ? 0U : vlSelfRef.regfile__DOT__regs
                           [vlSelfRef.rs1_addr]);
    vlSelfRef.rs2_rdata = ((0U == (IData)(vlSelfRef.rs2_addr))
                            ? 0U : vlSelfRef.regfile__DOT__regs
                           [vlSelfRef.rs2_addr]);
}

void Vregfile___024root___eval_triggers__ico(Vregfile___024root* vlSelf);

bool Vregfile___024root___eval_phase__ico(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vregfile___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vregfile___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vregfile___024root___eval_act(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vregfile___024root___nba_sequent__TOP__0(Vregfile___024root* vlSelf);

void Vregfile___024root___eval_nba(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregfile___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile___024root___nba_sequent__TOP__0(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__regfile__DOT__regs__v0;
    __VdlyVal__regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __VdlyDim0__regfile__DOT__regs__v0;
    __VdlyDim0__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__regfile__DOT__regs__v0;
    __VdlySet__regfile__DOT__regs__v0 = 0;
    // Body
    __VdlySet__regfile__DOT__regs__v0 = 0U;
    if (((IData)(vlSelfRef.rd_we) & (0U != (IData)(vlSelfRef.rd_addr)))) {
        __VdlyVal__regfile__DOT__regs__v0 = vlSelfRef.rd_wdata;
        __VdlyDim0__regfile__DOT__regs__v0 = vlSelfRef.rd_addr;
        __VdlySet__regfile__DOT__regs__v0 = 1U;
    }
    if (__VdlySet__regfile__DOT__regs__v0) {
        vlSelfRef.regfile__DOT__regs[__VdlyDim0__regfile__DOT__regs__v0] 
            = __VdlyVal__regfile__DOT__regs__v0;
    }
    vlSelfRef.rs1_rdata = ((0U == (IData)(vlSelfRef.rs1_addr))
                            ? 0U : vlSelfRef.regfile__DOT__regs
                           [vlSelfRef.rs1_addr]);
    vlSelfRef.rs2_rdata = ((0U == (IData)(vlSelfRef.rs2_addr))
                            ? 0U : vlSelfRef.regfile__DOT__regs
                           [vlSelfRef.rs2_addr]);
}

void Vregfile___024root___eval_triggers__act(Vregfile___024root* vlSelf);

bool Vregfile___024root___eval_phase__act(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vregfile___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile___024root___eval_phase__nba(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__ico(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__nba(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile___024root___dump_triggers__act(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile___024root___eval(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vregfile___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("core/regfile.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vregfile___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregfile___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("core/regfile.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vregfile___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("core/regfile.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vregfile___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vregfile___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rs1_addr & 0xe0U))) {
        Verilated::overWidthError("rs1_addr");}
    if (VL_UNLIKELY((vlSelfRef.rs2_addr & 0xe0U))) {
        Verilated::overWidthError("rs2_addr");}
    if (VL_UNLIKELY((vlSelfRef.rd_addr & 0xe0U))) {
        Verilated::overWidthError("rd_addr");}
    if (VL_UNLIKELY((vlSelfRef.rd_we & 0xfeU))) {
        Verilated::overWidthError("rd_we");}
}
#endif  // VL_DEBUG
