// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_top_tb__Syms.h"


VL_ATTR_COLD void Vcpu_top_tb___024root__trace_init_sub__TOP__0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("cpu_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"funct7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"im_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+49,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+50,0,"funct7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+54,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+55,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ig", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"im_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+47,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+39,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+52,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_init_top(Vcpu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_register(Vcpu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcpu_top_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcpu_top_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcpu_top_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcpu_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_const_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_const_0\n"); );
    // Init
    Vcpu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top_tb___024root*>(voidSelf);
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_const_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+53,(0x33U),7);
    bufp->fullCData(oldp+54,(0x13U),7);
    bufp->fullCData(oldp+55,(0U),4);
    bufp->fullCData(oldp+56,(1U),4);
    bufp->fullCData(oldp+57,(2U),4);
    bufp->fullCData(oldp+58,(3U),4);
    bufp->fullCData(oldp+59,(4U),4);
    bufp->fullCData(oldp+60,(5U),4);
    bufp->fullCData(oldp+61,(6U),4);
    bufp->fullCData(oldp+62,(7U),4);
    bufp->fullCData(oldp+63,(8U),4);
    bufp->fullCData(oldp+64,(9U),4);
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_full_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_full_0\n"); );
    // Init
    Vcpu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_top_tb___024root*>(voidSelf);
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_top_tb___024root__trace_full_0_sub_0(Vcpu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcpu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+34,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+35,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__opcode),7);
    bufp->fullCData(oldp+36,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rd),5);
    bufp->fullCData(oldp+37,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1),5);
    bufp->fullCData(oldp+38,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2),5);
    bufp->fullBit(oldp+39,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__reg_write));
    bufp->fullBit(oldp+40,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_src));
    bufp->fullCData(oldp+41,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+42,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__im_out),32);
    bufp->fullIData(oldp+43,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs1_rdata),32);
    bufp->fullIData(oldp+44,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result),32);
    bufp->fullIData(oldp+45,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_b),32);
    bufp->fullBit(oldp+46,((0U == vlSelfRef.cpu_top_tb__DOT__dut__DOT__alu_result)));
    bufp->fullBit(oldp+47,(vlSelfRef.cpu_top_tb__DOT__clk));
    bufp->fullBit(oldp+48,(vlSelfRef.cpu_top_tb__DOT__rst));
    bufp->fullCData(oldp+49,((7U & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                    [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                                >> 2U))] 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+50,((1U & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__imem
                                  [(0x3ffU & (vlSelfRef.cpu_top_tb__DOT__dut__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+51,(((0U == (IData)(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2))
                               ? 0U : vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__regs
                              [vlSelfRef.cpu_top_tb__DOT__dut__DOT__rs2])),32);
    bufp->fullIData(oldp+52,(vlSelfRef.cpu_top_tb__DOT__dut__DOT__rf__DOT__i),32);
}
