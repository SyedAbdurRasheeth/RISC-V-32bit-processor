// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top_tb__Syms.h"


void Vcpu_top_tb___024root__trace_chg_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vcpu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top_tb___024root*>(voidSelf);
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_top_tb___024root__trace_chg_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+32,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+33,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__instruction),32);
        bufp->chgCData(oldp+34,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__opcode),7);
        bufp->chgCData(oldp+35,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rd),5);
        bufp->chgCData(oldp+36,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1),5);
        bufp->chgCData(oldp+37,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2),5);
        bufp->chgBit(oldp+38,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__reg_write));
        bufp->chgBit(oldp+39,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_src));
        bufp->chgCData(oldp+40,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+41,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__im_out),32);
        bufp->chgIData(oldp+42,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1_rdata),32);
        bufp->chgIData(oldp+43,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result),32);
        bufp->chgIData(oldp+44,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_b),32);
        bufp->chgBit(oldp+45,((0U == vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result)));
    }
    bufp->chgBit(oldp+46,(vlSelfRef.cpu_top_tb__DOT__clk));
    bufp->chgBit(oldp+47,(vlSelfRef.cpu_top_tb__DOT__rst));
    bufp->chgCData(oldp+48,((7U & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                   [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                   >> 0xcU))),3);
    bufp->chgBit(oldp+49,((1U & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                 [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                             >> 2U))] 
                                 >> 0x1eU))));
    bufp->chgIData(oldp+50,(((0U == (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2))
                              ? 0U : vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                             [vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2])),32);
    bufp->chgIData(oldp+51,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__i),32);
}

void Vcpu_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top_tb___024root*>(voidSelf);
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
