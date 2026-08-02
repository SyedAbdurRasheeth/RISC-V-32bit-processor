// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile_tb__Syms.h"


VL_ATTR_COLD void Vregfile_tb___024root__trace_init_sub__TOP__0(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("regfile_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_init_top(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregfile_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregfile_tb___024root__trace_register(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vregfile_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregfile_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregfile_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregfile_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_const_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.regfile_tb__DOT__rs1_addr),5);
    bufp->fullCData(oldp+2,(vlSelfRef.regfile_tb__DOT__rs2_addr),5);
    bufp->fullCData(oldp+3,(vlSelfRef.regfile_tb__DOT__rd_addr),5);
    bufp->fullBit(oldp+4,(vlSelfRef.regfile_tb__DOT__rd_we));
    bufp->fullIData(oldp+5,(vlSelfRef.regfile_tb__DOT__rd_wdata),32);
    bufp->fullIData(oldp+6,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[0]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[1]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[2]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[3]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[4]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[5]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[6]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[7]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[8]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[9]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[10]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[11]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[12]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[13]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[14]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[15]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[16]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[17]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[18]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[19]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[20]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[21]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[22]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[23]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[24]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[25]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[26]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[27]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[28]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[29]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[30]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.regfile_tb__DOT__dut__DOT__regs[31]),32);
    bufp->fullBit(oldp+38,(vlSelfRef.regfile_tb__DOT__clk));
    bufp->fullIData(oldp+39,(((0U == (IData)(vlSelfRef.regfile_tb__DOT__rs1_addr))
                               ? 0U : vlSelfRef.regfile_tb__DOT__dut__DOT__regs
                              [vlSelfRef.regfile_tb__DOT__rs1_addr])),32);
    bufp->fullIData(oldp+40,(((0U == (IData)(vlSelfRef.regfile_tb__DOT__rs2_addr))
                               ? 0U : vlSelfRef.regfile_tb__DOT__dut__DOT__regs
                              [vlSelfRef.regfile_tb__DOT__rs2_addr])),32);
    bufp->fullIData(oldp+41,(vlSelfRef.regfile_tb__DOT__dut__DOT__i),32);
}
