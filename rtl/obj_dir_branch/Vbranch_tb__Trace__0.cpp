// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbranch_tb__Syms.h"


void Vbranch_tb___024root__trace_chg_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbranch_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_chg_0\n"); );
    // Init
    Vbranch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_tb___024root*>(voidSelf);
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbranch_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbranch_tb___024root__trace_chg_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+32,(vlSelfRef.branch_tb__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+33,((((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__branch) 
                                  & ((4U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                      ? ((2U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                          ? ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                              ? (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                                 >= vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                              : (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                                 < vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata))
                                          : ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                              ? VL_GTES_III(32, vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                              : VL_LTS_III(32, vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)))
                                      : ((1U & (~ ((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3) 
                                                   >> 1U))) 
                                         && ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                              ? (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                                 != vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                              : (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                                 == vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)))))
                                  ? (vlSelfRef.branch_tb__DOT__dut__DOT__im_out 
                                     + vlSelfRef.branch_tb__DOT__dut__DOT__pc)
                                  : ((IData)(4U) + vlSelfRef.branch_tb__DOT__dut__DOT__pc))),32);
        bufp->chgIData(oldp+34,(vlSelfRef.branch_tb__DOT__dut__DOT__instruction),32);
        bufp->chgCData(oldp+35,(vlSelfRef.branch_tb__DOT__dut__DOT__opcode),7);
        bufp->chgCData(oldp+36,(vlSelfRef.branch_tb__DOT__dut__DOT__rd),5);
        bufp->chgCData(oldp+37,(vlSelfRef.branch_tb__DOT__dut__DOT__funct3),3);
        bufp->chgCData(oldp+38,(vlSelfRef.branch_tb__DOT__dut__DOT__rs1),5);
        bufp->chgCData(oldp+39,(vlSelfRef.branch_tb__DOT__dut__DOT__rs2),5);
        bufp->chgBit(oldp+40,(vlSelfRef.branch_tb__DOT__dut__DOT__reg_write));
        bufp->chgBit(oldp+41,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_src));
        bufp->chgBit(oldp+42,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_read));
        bufp->chgBit(oldp+43,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_write));
        bufp->chgBit(oldp+44,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_to_reg));
        bufp->chgBit(oldp+45,(vlSelfRef.branch_tb__DOT__dut__DOT__branch));
        bufp->chgCData(oldp+46,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+47,(vlSelfRef.branch_tb__DOT__dut__DOT__im_out),32);
        bufp->chgIData(oldp+48,(vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata),32);
        bufp->chgIData(oldp+49,(vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata),32);
        bufp->chgIData(oldp+50,(((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__mem_to_reg)
                                  ? vlSelfRef.branch_tb__DOT__dut__DOT__mem_rdata
                                  : vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)),32);
        bufp->chgIData(oldp+51,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_b),32);
        bufp->chgIData(oldp+52,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_result),32);
        bufp->chgBit(oldp+53,((0U == vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)));
        bufp->chgBit(oldp+54,(((4U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                        ? (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                           >= vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                        : (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                           < vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata))
                                    : ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                        ? VL_GTES_III(32, vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                        : VL_LTS_III(32, vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)))
                                : ((1U & (~ ((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3) 
                                             >> 1U))) 
                                   && ((1U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
                                        ? (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                           != vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata)
                                        : (vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata 
                                           == vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata))))));
        bufp->chgIData(oldp+55,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_rdata),32);
        bufp->chgSData(oldp+56,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__half0),16);
    }
    bufp->chgBit(oldp+57,(vlSelfRef.branch_tb__DOT__clk));
    bufp->chgBit(oldp+58,(vlSelfRef.branch_tb__DOT__rst));
    bufp->chgIData(oldp+59,(vlSelfRef.branch_tb__DOT__errors),32);
    bufp->chgBit(oldp+60,((1U & (vlSelfRef.branch_tb__DOT__dut__DOT__imem
                                 [(0x3ffU & (vlSelfRef.branch_tb__DOT__dut__DOT__pc 
                                             >> 2U))] 
                                 >> 0x1eU))));
    bufp->chgIData(oldp+61,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__i),32);
    bufp->chgCData(oldp+62,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                            [(0xfffU & vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)]),8);
    bufp->chgIData(oldp+63,(((vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                              [(0xfffU & ((IData)(3U) 
                                          + vlSelfRef.branch_tb__DOT__dut__DOT__alu_result))] 
                              << 0x18U) | ((vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                                            [(0xfffU 
                                              & ((IData)(2U) 
                                                 + vlSelfRef.branch_tb__DOT__dut__DOT__alu_result))] 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__half0)))),32);
    bufp->chgIData(oldp+64,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__i),32);
}

void Vbranch_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_cleanup\n"); );
    // Init
    Vbranch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_tb___024root*>(voidSelf);
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
