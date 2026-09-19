// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvga_timing_tb__Syms.h"


void Vvga_timing_tb___024root__trace_chg_0_sub_0(Vvga_timing_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvga_timing_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root__trace_chg_0\n"); );
    // Init
    Vvga_timing_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_timing_tb___024root*>(voidSelf);
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvga_timing_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvga_timing_tb___024root__trace_chg_0_sub_0(Vvga_timing_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (~ ((0x290U <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)) 
                                       & (0x2f0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)))))));
        bufp->chgBit(oldp+1,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                                       & (0x1ecU > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)))))));
        bufp->chgSData(oldp+2,(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count),10);
        bufp->chgSData(oldp+3,(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count),10);
        bufp->chgBit(oldp+4,(((0x1e0U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__v_count)) 
                              & (0x280U > (IData)(vlSelfRef.vga_timing_tb__DOT__dut__DOT__h_count)))));
    }
    bufp->chgBit(oldp+5,(vlSelfRef.vga_timing_tb__DOT__clk_25mhz));
    bufp->chgBit(oldp+6,(vlSelfRef.vga_timing_tb__DOT__rst));
    bufp->chgIData(oldp+7,(vlSelfRef.vga_timing_tb__DOT__errors),32);
}

void Vvga_timing_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_timing_tb___024root__trace_cleanup\n"); );
    // Init
    Vvga_timing_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_timing_tb___024root*>(voidSelf);
    Vvga_timing_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
