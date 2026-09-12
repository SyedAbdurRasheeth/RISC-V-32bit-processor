// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbranch_tb__Syms.h"


VL_ATTR_COLD void Vbranch_tb___024root__trace_init_sub__TOP__0(Vbranch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("branch_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+61,0,"funct7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"im_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+55,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+61,0,"funct7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+67,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+68,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+69,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+70,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+71,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ig", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"im_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+43,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+63,0,"byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"half0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+40,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+41,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+65,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_init_top(Vbranch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbranch_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbranch_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbranch_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbranch_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbranch_tb___024root__trace_register(Vbranch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbranch_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbranch_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbranch_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbranch_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_const_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbranch_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_const_0\n"); );
    // Init
    Vbranch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_tb___024root*>(voidSelf);
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbranch_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_const_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+66,(0x33U),7);
    bufp->fullCData(oldp+67,(0x13U),7);
    bufp->fullCData(oldp+68,(3U),7);
    bufp->fullCData(oldp+69,(0x23U),7);
    bufp->fullCData(oldp+70,(0x63U),7);
    bufp->fullCData(oldp+71,(0U),4);
    bufp->fullCData(oldp+72,(1U),4);
    bufp->fullCData(oldp+73,(2U),4);
    bufp->fullCData(oldp+74,(3U),4);
    bufp->fullCData(oldp+75,(4U),4);
    bufp->fullCData(oldp+76,(5U),4);
    bufp->fullCData(oldp+77,(6U),4);
    bufp->fullCData(oldp+78,(7U),4);
    bufp->fullCData(oldp+79,(8U),4);
    bufp->fullCData(oldp+80,(9U),4);
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_full_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbranch_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_full_0\n"); );
    // Init
    Vbranch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_tb___024root*>(voidSelf);
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbranch_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbranch_tb___024root__trace_full_0_sub_0(Vbranch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.branch_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+34,((((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__branch) 
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
    bufp->fullIData(oldp+35,(vlSelfRef.branch_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+36,(vlSelfRef.branch_tb__DOT__dut__DOT__opcode),7);
    bufp->fullCData(oldp+37,(vlSelfRef.branch_tb__DOT__dut__DOT__rd),5);
    bufp->fullCData(oldp+38,(vlSelfRef.branch_tb__DOT__dut__DOT__funct3),3);
    bufp->fullCData(oldp+39,(vlSelfRef.branch_tb__DOT__dut__DOT__rs1),5);
    bufp->fullCData(oldp+40,(vlSelfRef.branch_tb__DOT__dut__DOT__rs2),5);
    bufp->fullBit(oldp+41,(vlSelfRef.branch_tb__DOT__dut__DOT__reg_write));
    bufp->fullBit(oldp+42,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_src));
    bufp->fullBit(oldp+43,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_read));
    bufp->fullBit(oldp+44,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_write));
    bufp->fullBit(oldp+45,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_to_reg));
    bufp->fullBit(oldp+46,(vlSelfRef.branch_tb__DOT__dut__DOT__branch));
    bufp->fullCData(oldp+47,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+48,(vlSelfRef.branch_tb__DOT__dut__DOT__im_out),32);
    bufp->fullIData(oldp+49,(vlSelfRef.branch_tb__DOT__dut__DOT__rs1_rdata),32);
    bufp->fullIData(oldp+50,(vlSelfRef.branch_tb__DOT__dut__DOT__rs2_rdata),32);
    bufp->fullIData(oldp+51,(((IData)(vlSelfRef.branch_tb__DOT__dut__DOT__mem_to_reg)
                               ? vlSelfRef.branch_tb__DOT__dut__DOT__mem_rdata
                               : vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)),32);
    bufp->fullIData(oldp+52,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_b),32);
    bufp->fullIData(oldp+53,(vlSelfRef.branch_tb__DOT__dut__DOT__alu_result),32);
    bufp->fullBit(oldp+54,((0U == vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)));
    bufp->fullBit(oldp+55,(((4U & (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__funct3))
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
    bufp->fullIData(oldp+56,(vlSelfRef.branch_tb__DOT__dut__DOT__mem_rdata),32);
    bufp->fullSData(oldp+57,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__half0),16);
    bufp->fullBit(oldp+58,(vlSelfRef.branch_tb__DOT__clk));
    bufp->fullBit(oldp+59,(vlSelfRef.branch_tb__DOT__rst));
    bufp->fullIData(oldp+60,(vlSelfRef.branch_tb__DOT__errors),32);
    bufp->fullBit(oldp+61,((1U & (vlSelfRef.branch_tb__DOT__dut__DOT__imem
                                  [(0x3ffU & (vlSelfRef.branch_tb__DOT__dut__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+62,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__i),32);
    bufp->fullCData(oldp+63,(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                             [(0xfffU & vlSelfRef.branch_tb__DOT__dut__DOT__alu_result)]),8);
    bufp->fullIData(oldp+64,(((vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelfRef.branch_tb__DOT__dut__DOT__alu_result))] 
                               << 0x18U) | ((vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__mem
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.branch_tb__DOT__dut__DOT__alu_result))] 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.branch_tb__DOT__dut__DOT__mem__DOT__half0)))),32);
    bufp->fullIData(oldp+65,(vlSelfRef.branch_tb__DOT__dut__DOT__rf__DOT__i),32);
}
