// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vframebuffer_tb__Syms.h"


void Vframebuffer_tb___024root__trace_chg_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vframebuffer_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_chg_0\n"); );
    // Init
    Vframebuffer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframebuffer_tb___024root*>(voidSelf);
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vframebuffer_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vframebuffer_tb___024root__trace_chg_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.framebuffer_tb__DOT__rst));
        bufp->chgSData(oldp+1,(vlSelfRef.framebuffer_tb__DOT__fb_waddr),15);
        bufp->chgCData(oldp+2,(vlSelfRef.framebuffer_tb__DOT__fb_wdata),8);
        bufp->chgBit(oldp+3,(vlSelfRef.framebuffer_tb__DOT__fb_we));
        bufp->chgIData(oldp+4,(vlSelfRef.framebuffer_tb__DOT__i),32);
        bufp->chgBit(oldp+5,(vlSelfRef.framebuffer_tb__DOT__red_found));
        bufp->chgBit(oldp+6,(vlSelfRef.framebuffer_tb__DOT__green_found));
        bufp->chgBit(oldp+7,(vlSelfRef.framebuffer_tb__DOT__blue_found));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+8,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__hsync_d));
        bufp->chgBit(oldp+9,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__vsync_d));
        bufp->chgCData(oldp+10,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                              >> 4U)) 
                                     | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                              >> 5U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+11,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                              >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                              >> 2U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+12,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                                  ? (0xfU & ((0xcU 
                                              & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                 << 2U)) 
                                             | (3U 
                                                & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                                  : 0U)),4);
        bufp->chgCData(oldp+13,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel),8);
        bufp->chgBit(oldp+14,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d));
        bufp->chgCData(oldp+15,((7U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 5U))),3);
        bufp->chgCData(oldp+16,((7U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+17,((3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+18,((1U & (~ ((0x290U <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)) 
                                        & (0x2f0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)))))));
        bufp->chgBit(oldp+19,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
                                        & (0x1ecU > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)))))));
        bufp->chgBit(oldp+20,(((0x1e0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
                               & (0x280U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)))));
        bufp->chgSData(oldp+21,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count),10);
        bufp->chgSData(oldp+22,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count),10);
        bufp->chgCData(oldp+23,((0xffU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count) 
                                          >> 2U))),8);
        bufp->chgCData(oldp+24,((0x7fU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count) 
                                          >> 2U))),7);
        bufp->chgSData(oldp+25,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr),15);
    }
    bufp->chgBit(oldp+26,(vlSelfRef.framebuffer_tb__DOT__clk_100mhz));
    bufp->chgBit(oldp+27,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz));
    bufp->chgCData(oldp+28,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter),2);
    bufp->chgIData(oldp+29,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i),32);
}

void Vframebuffer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_cleanup\n"); );
    // Init
    Vframebuffer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframebuffer_tb___024root*>(voidSelf);
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
