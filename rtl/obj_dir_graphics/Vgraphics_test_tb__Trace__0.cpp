// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgraphics_test_tb__Syms.h"


void Vgraphics_test_tb___024root__trace_chg_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vgraphics_test_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_chg_0\n"); );
    // Init
    Vgraphics_test_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgraphics_test_tb___024root*>(voidSelf);
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vgraphics_test_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vgraphics_test_tb___024root__trace_chg_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+3,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+35,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__led_out),4);
        bufp->chgBit(oldp+36,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz));
        bufp->chgCData(oldp+37,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+38,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__hsync_d));
        bufp->chgBit(oldp+39,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__vsync_d));
        bufp->chgCData(oldp+40,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                              >> 4U)) 
                                     | (1U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                              >> 5U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+41,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                              >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                              >> 2U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+42,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                                  ? (0xfU & ((0xcU 
                                              & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                                 << 2U)) 
                                             | (3U 
                                                & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel))))
                                  : 0U)),4);
        bufp->chgCData(oldp+43,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel),8);
        bufp->chgBit(oldp+44,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d));
        bufp->chgCData(oldp+45,((7U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                       >> 5U))),3);
        bufp->chgCData(oldp+46,((7U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+47,((3U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel))),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+48,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc),32);
        bufp->chgIData(oldp+49,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction),32);
        bufp->chgCData(oldp+50,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode),7);
        bufp->chgCData(oldp+51,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rd),5);
        bufp->chgCData(oldp+52,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3),3);
        bufp->chgCData(oldp+53,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1),5);
        bufp->chgCData(oldp+54,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2),5);
        bufp->chgBit(oldp+55,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__reg_write));
        bufp->chgBit(oldp+56,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_src));
        bufp->chgBit(oldp+57,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_read));
        bufp->chgBit(oldp+58,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write));
        bufp->chgBit(oldp+59,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch));
        bufp->chgBit(oldp+60,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump));
        bufp->chgBit(oldp+61,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr));
        bufp->chgCData(oldp+62,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl),4);
        bufp->chgCData(oldp+63,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel),2);
        bufp->chgCData(oldp+64,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel),2);
        bufp->chgIData(oldp+65,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+66,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                               & (0xf0000000U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
        bufp->chgIData(oldp+67,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump)
                                  ? ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                      ? (0xfffffffeU 
                                         & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                            + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                      : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
                                  : (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch) 
                                      & ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                          ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  >= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  < vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 VL_GTES_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 VL_LTS_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                                          : ((1U & 
                                              (~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                                  >> 1U))) 
                                             && ((1U 
                                                  & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                                      ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                                      : ((IData)(4U) 
                                         + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)))),32);
        bufp->chgIData(oldp+68,(((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                  ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata
                                  : ((2U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                      ? ((IData)(4U) 
                                         + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)
                                      : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))),32);
        bufp->chgBit(oldp+69,(((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                        ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           >= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                        : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           < vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                                    : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                        ? VL_GTES_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                        : VL_LTS_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                                : ((1U & (~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                             >> 1U))) 
                                   && ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                        ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                        : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))))));
        bufp->chgIData(oldp+70,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                  ? (0xfffffffeU & 
                                     (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                      + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                  : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)),32);
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                               & ((~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we) 
                                      | (0xe0000000U 
                                         == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
                                  & (0xf0000000U != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+72,((1U & (~ ((0x290U <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)) 
                                        & (0x2f0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)))))));
        bufp->chgBit(oldp+73,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
                                        & (0x1ecU > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)))))));
        bufp->chgBit(oldp+74,(((0x1e0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
                               & (0x280U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)))));
        bufp->chgSData(oldp+75,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count),10);
        bufp->chgSData(oldp+76,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count),10);
        bufp->chgCData(oldp+77,((0xffU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count) 
                                          >> 2U))),8);
        bufp->chgCData(oldp+78,((0x7fU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count) 
                                          >> 2U))),7);
        bufp->chgSData(oldp+79,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_raddr),15);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgSData(oldp+80,((0x7fffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)),15);
        bufp->chgBit(oldp+81,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we));
        bufp->chgIData(oldp+82,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata),32);
        bufp->chgIData(oldp+83,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata),32);
        bufp->chgIData(oldp+84,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a),32);
        bufp->chgIData(oldp+85,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b),32);
        bufp->chgIData(oldp+86,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result),32);
        bufp->chgBit(oldp+87,((0U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
        bufp->chgIData(oldp+88,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+89,((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result 
                                 - (IData)(0x1000U))),32);
        bufp->chgSData(oldp+90,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0),16);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.graphics_test_tb__DOT__clk_100mhz));
    bufp->chgBit(oldp+92,(vlSelfRef.graphics_test_tb__DOT__rst));
    bufp->chgIData(oldp+93,(vlSelfRef.graphics_test_tb__DOT__idx_green),32);
    bufp->chgIData(oldp+94,(vlSelfRef.graphics_test_tb__DOT__idx_red),32);
    bufp->chgIData(oldp+95,(vlSelfRef.graphics_test_tb__DOT__errors),32);
    bufp->chgCData(oldp+96,(((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2))
                              ? 0U : (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
                                      [vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2]))),8);
    bufp->chgBit(oldp+97,((1U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                                 [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                             >> 2U))] 
                                 >> 0x1eU))));
    bufp->chgCData(oldp+98,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)]),8);
    bufp->chgIData(oldp+99,(((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                              [(0xfffU & ((IData)(3U) 
                                          + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                              << 0x18U) | ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                            [(0xfffU 
                                              & ((IData)(2U) 
                                                 + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)))),32);
}

void Vgraphics_test_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_cleanup\n"); );
    // Init
    Vgraphics_test_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgraphics_test_tb___024root*>(voidSelf);
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
