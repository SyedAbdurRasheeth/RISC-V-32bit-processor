// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdebug_tb__Syms.h"


VL_ATTR_COLD void Vdebug_tb___024root__trace_init_sub__TOP__0(Vdebug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("debug_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"debug_char_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"debug_char",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"debug_char_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"debug_char",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+70,0,"funct7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"alu_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"im_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"jump_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DEBUG_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"real_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+60,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"funct7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"alu_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+77,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+80,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+81,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+82,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+84,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+85,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+93,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+94,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ig", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"im_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+72,0,"byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+65,0,"half0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+73,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+41,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+74,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_init_top(Vdebug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdebug_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdebug_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdebug_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdebug_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdebug_tb___024root__trace_register(Vdebug_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdebug_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdebug_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdebug_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdebug_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_const_0_sub_0(Vdebug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdebug_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_const_0\n"); );
    // Init
    Vdebug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdebug_tb___024root*>(voidSelf);
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdebug_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_const_0_sub_0(Vdebug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+75,(0xf0000000U),32);
    bufp->fullCData(oldp+76,(0x33U),7);
    bufp->fullCData(oldp+77,(0x13U),7);
    bufp->fullCData(oldp+78,(3U),7);
    bufp->fullCData(oldp+79,(0x23U),7);
    bufp->fullCData(oldp+80,(0x63U),7);
    bufp->fullCData(oldp+81,(0x6fU),7);
    bufp->fullCData(oldp+82,(0x67U),7);
    bufp->fullCData(oldp+83,(0x37U),7);
    bufp->fullCData(oldp+84,(0x17U),7);
    bufp->fullCData(oldp+85,(0U),4);
    bufp->fullCData(oldp+86,(1U),4);
    bufp->fullCData(oldp+87,(2U),4);
    bufp->fullCData(oldp+88,(3U),4);
    bufp->fullCData(oldp+89,(4U),4);
    bufp->fullCData(oldp+90,(5U),4);
    bufp->fullCData(oldp+91,(6U),4);
    bufp->fullCData(oldp+92,(7U),4);
    bufp->fullCData(oldp+93,(8U),4);
    bufp->fullCData(oldp+94,(9U),4);
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_full_0_sub_0(Vdebug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdebug_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_full_0\n"); );
    // Init
    Vdebug_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdebug_tb___024root*>(voidSelf);
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdebug_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdebug_tb___024root__trace_full_0_sub_0(Vdebug_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebug_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebug_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs[31]),32);
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem_write) 
                            & (0xf0000000U == vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))));
    bufp->fullIData(oldp+34,(vlSelfRef.debug_tb__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+35,(((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jump)
                               ? ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
                                       + vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata))
                                   : vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1)
                               : (((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__branch) 
                                   & ((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                       ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                           ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                               ? (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                  >= vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                               : (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                  < vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata))
                                           : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                               ? VL_GTES_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                               : VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))
                                       : ((1U & (~ 
                                                 ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                                  >> 1U))) 
                                          && ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                               ? (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                  != vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                               : (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                                  == vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))))
                                   ? vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1
                                   : ((IData)(4U) + vlSelfRef.debug_tb__DOT__dut__DOT__pc)))),32);
    bufp->fullIData(oldp+36,(vlSelfRef.debug_tb__DOT__dut__DOT__instruction),32);
    bufp->fullCData(oldp+37,(vlSelfRef.debug_tb__DOT__dut__DOT__opcode),7);
    bufp->fullCData(oldp+38,(vlSelfRef.debug_tb__DOT__dut__DOT__rd),5);
    bufp->fullCData(oldp+39,(vlSelfRef.debug_tb__DOT__dut__DOT__funct3),3);
    bufp->fullCData(oldp+40,(vlSelfRef.debug_tb__DOT__dut__DOT__rs1),5);
    bufp->fullCData(oldp+41,(vlSelfRef.debug_tb__DOT__dut__DOT__rs2),5);
    bufp->fullBit(oldp+42,(vlSelfRef.debug_tb__DOT__dut__DOT__reg_write));
    bufp->fullBit(oldp+43,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_src));
    bufp->fullBit(oldp+44,(vlSelfRef.debug_tb__DOT__dut__DOT__mem_read));
    bufp->fullBit(oldp+45,(vlSelfRef.debug_tb__DOT__dut__DOT__mem_write));
    bufp->fullBit(oldp+46,(vlSelfRef.debug_tb__DOT__dut__DOT__branch));
    bufp->fullBit(oldp+47,(vlSelfRef.debug_tb__DOT__dut__DOT__jump));
    bufp->fullBit(oldp+48,(vlSelfRef.debug_tb__DOT__dut__DOT__jalr));
    bufp->fullCData(oldp+49,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+50,(vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel),2);
    bufp->fullCData(oldp+51,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a_sel),2);
    bufp->fullIData(oldp+52,(vlSelfRef.debug_tb__DOT__dut__DOT__im_out),32);
    bufp->fullIData(oldp+53,(vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata),32);
    bufp->fullIData(oldp+54,(vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata),32);
    bufp->fullIData(oldp+55,(((1U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel))
                               ? vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata
                               : ((2U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__wb_sel))
                                   ? ((IData)(4U) + vlSelfRef.debug_tb__DOT__dut__DOT__pc)
                                   : vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))),32);
    bufp->fullIData(oldp+56,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_a),32);
    bufp->fullIData(oldp+57,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_b),32);
    bufp->fullIData(oldp+58,(vlSelfRef.debug_tb__DOT__dut__DOT__alu_result),32);
    bufp->fullBit(oldp+59,((0U == vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)));
    bufp->fullBit(oldp+60,(((4U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                             ? ((2U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                 ? ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                     ? (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                        >= vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                     : (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                        < vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata))
                                 : ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                     ? VL_GTES_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                     : VL_LTS_III(32, vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata, vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)))
                             : ((1U & (~ ((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3) 
                                          >> 1U))) 
                                && ((1U & (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__funct3))
                                     ? (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                        != vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata)
                                     : (vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata 
                                        == vlSelfRef.debug_tb__DOT__dut__DOT__rs2_rdata))))));
    bufp->fullIData(oldp+61,(((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__jalr)
                               ? (0xfffffffeU & (vlSelfRef.debug_tb__DOT__dut__DOT__im_out 
                                                 + vlSelfRef.debug_tb__DOT__dut__DOT__rs1_rdata))
                               : vlSelfRef.debug_tb__DOT__dut__DOT____VdfgRegularize_hff2ff239_0_1)),32);
    bufp->fullBit(oldp+62,(((IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem_write) 
                            & (0xf0000000U != vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))));
    bufp->fullIData(oldp+63,(vlSelfRef.debug_tb__DOT__dut__DOT__mem_rdata),32);
    bufp->fullIData(oldp+64,((vlSelfRef.debug_tb__DOT__dut__DOT__alu_result 
                              - (IData)(0x1000U))),32);
    bufp->fullSData(oldp+65,(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0),16);
    bufp->fullBit(oldp+66,(vlSelfRef.debug_tb__DOT__clk));
    bufp->fullBit(oldp+67,(vlSelfRef.debug_tb__DOT__rst));
    bufp->fullCData(oldp+68,(((0U == (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__rs2))
                               ? 0U : (0xffU & vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__regs
                                       [vlSelfRef.debug_tb__DOT__dut__DOT__rs2]))),8);
    bufp->fullIData(oldp+69,(vlSelfRef.debug_tb__DOT__i),32);
    bufp->fullBit(oldp+70,((1U & (vlSelfRef.debug_tb__DOT__dut__DOT__imem
                                  [(0x3ffU & (vlSelfRef.debug_tb__DOT__dut__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+71,(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__i),32);
    bufp->fullCData(oldp+72,(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                             [(0xfffU & vlSelfRef.debug_tb__DOT__dut__DOT__alu_result)]),8);
    bufp->fullIData(oldp+73,(((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                               << 0x18U) | ((vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__mem
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.debug_tb__DOT__dut__DOT__alu_result))] 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.debug_tb__DOT__dut__DOT__mem__DOT__half0)))),32);
    bufp->fullIData(oldp+74,(vlSelfRef.debug_tb__DOT__dut__DOT__rf__DOT__i),32);
}
