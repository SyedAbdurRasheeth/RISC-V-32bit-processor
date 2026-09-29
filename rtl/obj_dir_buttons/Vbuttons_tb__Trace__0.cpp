// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbuttons_tb__Syms.h"


void Vbuttons_tb___024root__trace_chg_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbuttons_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_chg_0\n"); );
    // Init
    Vbuttons_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbuttons_tb___024root*>(voidSelf);
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbuttons_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbuttons_tb___024root__trace_chg_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.buttons_tb__DOT__rst));
        bufp->chgBit(oldp+4,(vlSelfRef.buttons_tb__DOT__btnU));
        bufp->chgBit(oldp+5,(vlSelfRef.buttons_tb__DOT__btnD));
        bufp->chgBit(oldp+6,(vlSelfRef.buttons_tb__DOT__btnL));
        bufp->chgBit(oldp+7,(vlSelfRef.buttons_tb__DOT__btnR));
        bufp->chgIData(oldp+8,(vlSelfRef.buttons_tb__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelfRef.buttons_tb__DOT__idx_new),32);
        bufp->chgIData(oldp+10,(vlSelfRef.buttons_tb__DOT__idx_old),32);
        bufp->chgIData(oldp+11,(vlSelfRef.buttons_tb__DOT__errors),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgIData(oldp+12,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+44,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__led_out),4);
        bufp->chgIData(oldp+45,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter),18);
        bufp->chgBit(oldp+46,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1));
        bufp->chgBit(oldp+47,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2));
        bufp->chgIData(oldp+48,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter),18);
        bufp->chgBit(oldp+49,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1));
        bufp->chgBit(oldp+50,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2));
        bufp->chgIData(oldp+51,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter),18);
        bufp->chgBit(oldp+52,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1));
        bufp->chgBit(oldp+53,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2));
        bufp->chgIData(oldp+54,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter),18);
        bufp->chgBit(oldp+55,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1));
        bufp->chgBit(oldp+56,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2));
        bufp->chgBit(oldp+57,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz));
        bufp->chgCData(oldp+58,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+59,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__hsync_d));
        bufp->chgBit(oldp+60,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__vsync_d));
        bufp->chgCData(oldp+61,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                              >> 4U)) 
                                     | (1U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                              >> 5U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+62,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                                  ? ((0xeU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                              >> 1U)) 
                                     | (1U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                              >> 2U)))
                                  : 0U)),4);
        bufp->chgCData(oldp+63,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                                  ? (0xfU & ((0xcU 
                                              & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                                 << 2U)) 
                                             | (3U 
                                                & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel))))
                                  : 0U)),4);
        bufp->chgCData(oldp+64,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel),8);
        bufp->chgBit(oldp+65,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d));
        bufp->chgCData(oldp+66,((7U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                       >> 5U))),3);
        bufp->chgCData(oldp+67,((7U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                       >> 2U))),3);
        bufp->chgCData(oldp+68,((3U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel))),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+69,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean));
        bufp->chgBit(oldp+70,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean));
        bufp->chgBit(oldp+71,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean));
        bufp->chgBit(oldp+72,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean));
        bufp->chgCData(oldp+73,(((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                   << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                     << 1U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))),4);
        bufp->chgIData(oldp+74,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc),32);
        bufp->chgIData(oldp+75,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction),32);
        bufp->chgCData(oldp+76,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode),7);
        bufp->chgCData(oldp+77,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd),5);
        bufp->chgCData(oldp+78,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3),3);
        bufp->chgCData(oldp+79,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1),5);
        bufp->chgCData(oldp+80,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2),5);
        bufp->chgBit(oldp+81,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write));
        bufp->chgBit(oldp+82,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src));
        bufp->chgBit(oldp+83,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read));
        bufp->chgBit(oldp+84,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write));
        bufp->chgBit(oldp+85,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch));
        bufp->chgBit(oldp+86,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump));
        bufp->chgBit(oldp+87,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr));
        bufp->chgCData(oldp+88,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl),4);
        bufp->chgCData(oldp+89,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel),2);
        bufp->chgCData(oldp+90,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel),2);
        bufp->chgIData(oldp+91,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgBit(oldp+92,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                               & (0xf0000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
        bufp->chgIData(oldp+93,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump)
                                  ? ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                      ? (0xfffffffeU 
                                         & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                            + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                      : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
                                  : (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch) 
                                      & ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                          ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 VL_GTES_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                                          : ((1U & 
                                              (~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                                  >> 1U))) 
                                             && ((1U 
                                                  & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                                  ? 
                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                                  : 
                                                 (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                                      ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                                      : ((IData)(4U) 
                                         + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)))),32);
        bufp->chgIData(oldp+94,(((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                  ? (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                                      & (0x20000000U 
                                         == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                                      ? ((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))
                                      : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata)
                                  : ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                      ? ((IData)(4U) 
                                         + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)
                                      : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))),32);
        bufp->chgBit(oldp+95,(((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
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
                                             >> 1U))) 
                                   && ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                        ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                        : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                           == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))))));
        bufp->chgIData(oldp+96,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                  ? (0xfffffffeU & 
                                     (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                      + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                  : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)),32);
        bufp->chgBit(oldp+97,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                               & ((~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write) 
                                      | (0xe0000000U 
                                         == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
                                  & (0xf0000000U != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)))));
        bufp->chgBit(oldp+98,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                               & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
        bufp->chgIData(oldp+99,((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                                  & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                                  ? ((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                       << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                         << 1U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))
                                  : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata)),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+100,((1U & (~ ((0x290U <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)) 
                                         & (0x2f0U 
                                            > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)))))));
        bufp->chgBit(oldp+101,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
                                         & (0x1ecU 
                                            > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)))))));
        bufp->chgBit(oldp+102,(((0x1e0U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
                                & (0x280U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)))));
        bufp->chgSData(oldp+103,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count),10);
        bufp->chgSData(oldp+104,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count),10);
        bufp->chgCData(oldp+105,((0xffU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+106,((0x7fU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count) 
                                           >> 2U))),7);
        bufp->chgSData(oldp+107,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr),15);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgSData(oldp+108,((0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)),15);
        bufp->chgCData(oldp+109,(vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata),8);
        bufp->chgBit(oldp+110,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write));
        bufp->chgIData(oldp+111,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata),32);
        bufp->chgIData(oldp+112,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata),32);
        bufp->chgIData(oldp+113,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a),32);
        bufp->chgIData(oldp+114,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b),32);
        bufp->chgIData(oldp+115,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),32);
        bufp->chgBit(oldp+116,((0U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
        bufp->chgIData(oldp+117,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata),32);
        bufp->chgIData(oldp+118,((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result 
                                  - (IData)(0x1000U))),32);
        bufp->chgSData(oldp+119,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0),16);
    }
    bufp->chgBit(oldp+120,(vlSelfRef.buttons_tb__DOT__clk_100mhz));
    bufp->chgBit(oldp+121,((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                                  [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->chgCData(oldp+122,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                             [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]),8);
    bufp->chgIData(oldp+123,(((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                               << 0x18U) | ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)))),32);
}

void Vbuttons_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_cleanup\n"); );
    // Init
    Vbuttons_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbuttons_tb___024root*>(voidSelf);
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
