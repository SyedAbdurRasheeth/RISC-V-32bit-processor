// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vframebuffer_tb__Syms.h"


VL_ATTR_COLD void Vframebuffer_tb___024root__trace_init_sub__TOP__0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("framebuffer_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk_100mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"fb_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"fb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"fb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"vga_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"vga_vs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"vga_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"vga_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"vga_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+6,0,"red_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"green_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"blue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk_100mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"vga_hs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"vga_vs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"fb_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"fb_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"fb_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk_25mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pixel_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"pixel_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"fb_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"fb_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"fb_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+14,0,"fb_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"video_on_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"hsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"vsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"pr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"pg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"pb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("fb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+14,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("timing", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pixel_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"pixel_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+21,0,"video_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"H_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"H_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"H_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"H_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"H_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"V_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"V_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"V_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"V_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"V_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_init_top(Vframebuffer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vframebuffer_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vframebuffer_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vframebuffer_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vframebuffer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_register(Vframebuffer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vframebuffer_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vframebuffer_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vframebuffer_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vframebuffer_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_const_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_const_0\n"); );
    // Init
    Vframebuffer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframebuffer_tb___024root*>(voidSelf);
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vframebuffer_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_const_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+31,(0x280U),32);
    bufp->fullIData(oldp+32,(0x10U),32);
    bufp->fullIData(oldp+33,(0x60U),32);
    bufp->fullIData(oldp+34,(0x30U),32);
    bufp->fullIData(oldp+35,(0x320U),32);
    bufp->fullIData(oldp+36,(0x1e0U),32);
    bufp->fullIData(oldp+37,(0xaU),32);
    bufp->fullIData(oldp+38,(2U),32);
    bufp->fullIData(oldp+39,(0x21U),32);
    bufp->fullIData(oldp+40,(0x20dU),32);
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_full_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_full_0\n"); );
    // Init
    Vframebuffer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vframebuffer_tb___024root*>(voidSelf);
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vframebuffer_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vframebuffer_tb___024root__trace_full_0_sub_0(Vframebuffer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vframebuffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vframebuffer_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.framebuffer_tb__DOT__rst));
    bufp->fullSData(oldp+2,(vlSelfRef.framebuffer_tb__DOT__fb_waddr),15);
    bufp->fullCData(oldp+3,(vlSelfRef.framebuffer_tb__DOT__fb_wdata),8);
    bufp->fullBit(oldp+4,(vlSelfRef.framebuffer_tb__DOT__fb_we));
    bufp->fullIData(oldp+5,(vlSelfRef.framebuffer_tb__DOT__i),32);
    bufp->fullBit(oldp+6,(vlSelfRef.framebuffer_tb__DOT__red_found));
    bufp->fullBit(oldp+7,(vlSelfRef.framebuffer_tb__DOT__green_found));
    bufp->fullBit(oldp+8,(vlSelfRef.framebuffer_tb__DOT__blue_found));
    bufp->fullBit(oldp+9,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__hsync_d));
    bufp->fullBit(oldp+10,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__vsync_d));
    bufp->fullCData(oldp+11,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                           >> 4U)) 
                                  | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                           >> 5U)))
                               : 0U)),4);
    bufp->fullCData(oldp+12,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                           >> 1U)) 
                                  | (1U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                           >> 2U)))
                               : 0U)),4);
    bufp->fullCData(oldp+13,(((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d)
                               ? (0xfU & ((0xcU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                                   << 2U)) 
                                          | (3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))))
                               : 0U)),4);
    bufp->fullCData(oldp+14,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel),8);
    bufp->fullBit(oldp+15,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__video_on_d));
    bufp->fullCData(oldp+16,((7U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                    >> 5U))),3);
    bufp->fullCData(oldp+17,((7U & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+18,((3U & (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_pixel))),2);
    bufp->fullBit(oldp+19,((1U & (~ ((0x290U <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)) 
                                     & (0x2f0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)))))));
    bufp->fullBit(oldp+20,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
                                     & (0x1ecU > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)))))));
    bufp->fullBit(oldp+21,(((0x1e0U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count)) 
                            & (0x280U > (IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count)))));
    bufp->fullSData(oldp+22,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count),10);
    bufp->fullSData(oldp+23,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count),10);
    bufp->fullCData(oldp+24,((0xffU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__h_count) 
                                       >> 2U))),8);
    bufp->fullCData(oldp+25,((0x7fU & ((IData)(vlSelfRef.framebuffer_tb__DOT__dut__DOT__timing__DOT__v_count) 
                                       >> 2U))),7);
    bufp->fullSData(oldp+26,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb_raddr),15);
    bufp->fullBit(oldp+27,(vlSelfRef.framebuffer_tb__DOT__clk_100mhz));
    bufp->fullBit(oldp+28,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__clk_25mhz));
    bufp->fullCData(oldp+29,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__divider__DOT__counter),2);
    bufp->fullIData(oldp+30,(vlSelfRef.framebuffer_tb__DOT__dut__DOT__fb__DOT__i),32);
}
