// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vgraphics_test_tb__Syms.h"


VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_init_sub__TOP__0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("graphics_test_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk_100mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"vga_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"vga_vs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"vga_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"vga_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"vga_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+94,0,"idx_green",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+95,0,"idx_red",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+96,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk_100mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"vga_hs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"vga_vs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"fb_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+97,0,"fb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"fb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"debug_char_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"debug_char",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"led_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"fb_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+97,0,"fb_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"fb_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+52,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+53,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+54,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+98,0,"funct7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"alu_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"im_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"jump_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"DEBUG_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"LED_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"FB_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"FB_TOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"is_fb_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"real_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+70,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+53,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+98,0,"funct7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+58,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"alu_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+106,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+107,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+109,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+110,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+111,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+112,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+113,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+114,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+115,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+118,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ig", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"im_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+99,0,"byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+91,0,"half0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+100,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+55,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+52,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+56,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("timing", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk_100mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"vga_hs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"vga_vs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"fb_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+97,0,"fb_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"fb_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk_25mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"pixel_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+77,0,"pixel_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+78,0,"fb_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+79,0,"fb_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+80,0,"fb_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+44,0,"fb_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,0,"video_on_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"hsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"vsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"pr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"pg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"pb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("fb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+97,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+82,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+44,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("timing", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+37,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"pixel_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+77,0,"pixel_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+75,0,"video_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"H_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"H_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"H_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"H_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"H_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"V_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"V_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"V_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"V_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"V_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+77,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_init_top(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vgraphics_test_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgraphics_test_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vgraphics_test_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_register(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vgraphics_test_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vgraphics_test_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vgraphics_test_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vgraphics_test_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_const_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_const_0\n"); );
    // Init
    Vgraphics_test_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgraphics_test_tb___024root*>(voidSelf);
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgraphics_test_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_const_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+101,(vlSelfRef.graphics_test_tb__DOT__i),32);
    bufp->fullIData(oldp+102,(0xf0000000U),32);
    bufp->fullIData(oldp+103,(0xe0000000U),32);
    bufp->fullIData(oldp+104,(0x10000000U),32);
    bufp->fullIData(oldp+105,(0x10004affU),32);
    bufp->fullCData(oldp+106,(0x33U),7);
    bufp->fullCData(oldp+107,(0x13U),7);
    bufp->fullCData(oldp+108,(3U),7);
    bufp->fullCData(oldp+109,(0x23U),7);
    bufp->fullCData(oldp+110,(0x63U),7);
    bufp->fullCData(oldp+111,(0x6fU),7);
    bufp->fullCData(oldp+112,(0x67U),7);
    bufp->fullCData(oldp+113,(0x37U),7);
    bufp->fullCData(oldp+114,(0x17U),7);
    bufp->fullCData(oldp+115,(0U),4);
    bufp->fullCData(oldp+116,(1U),4);
    bufp->fullCData(oldp+117,(2U),4);
    bufp->fullCData(oldp+118,(3U),4);
    bufp->fullCData(oldp+119,(4U),4);
    bufp->fullCData(oldp+120,(5U),4);
    bufp->fullCData(oldp+121,(6U),4);
    bufp->fullCData(oldp+122,(7U),4);
    bufp->fullCData(oldp+123,(8U),4);
    bufp->fullCData(oldp+124,(9U),4);
    bufp->fullIData(oldp+125,(0x280U),32);
    bufp->fullIData(oldp+126,(0x10U),32);
    bufp->fullIData(oldp+127,(0x60U),32);
    bufp->fullIData(oldp+128,(0x30U),32);
    bufp->fullIData(oldp+129,(0x320U),32);
    bufp->fullIData(oldp+130,(0x1e0U),32);
    bufp->fullIData(oldp+131,(0xaU),32);
    bufp->fullIData(oldp+132,(2U),32);
    bufp->fullIData(oldp+133,(0x21U),32);
    bufp->fullIData(oldp+134,(0x20dU),32);
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_full_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_full_0\n"); );
    // Init
    Vgraphics_test_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vgraphics_test_tb___024root*>(voidSelf);
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vgraphics_test_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vgraphics_test_tb___024root__trace_full_0_sub_0(Vgraphics_test_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vgraphics_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgraphics_test_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[31]),32);
    bufp->fullCData(oldp+36,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__led_out),4);
    bufp->fullBit(oldp+37,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__clk_25mhz));
    bufp->fullCData(oldp+38,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__divider__DOT__counter),2);
    bufp->fullBit(oldp+39,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__hsync_d));
    bufp->fullBit(oldp+40,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__vsync_d));
    bufp->fullCData(oldp+41,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                           >> 4U)) 
                                  | (1U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                           >> 5U)))
                               : 0U)),4);
    bufp->fullCData(oldp+42,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                           >> 1U)) 
                                  | (1U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                           >> 2U)))
                               : 0U)),4);
    bufp->fullCData(oldp+43,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d)
                               ? (0xfU & ((0xcU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                                   << 2U)) 
                                          | (3U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel))))
                               : 0U)),4);
    bufp->fullCData(oldp+44,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel),8);
    bufp->fullBit(oldp+45,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__video_on_d));
    bufp->fullCData(oldp+46,((7U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                    >> 5U))),3);
    bufp->fullCData(oldp+47,((7U & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+48,((3U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_pixel))),2);
    bufp->fullIData(oldp+49,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+50,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__instruction),32);
    bufp->fullCData(oldp+51,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__opcode),7);
    bufp->fullCData(oldp+52,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+53,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3),3);
    bufp->fullCData(oldp+54,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+55,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2),5);
    bufp->fullBit(oldp+56,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+57,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_src));
    bufp->fullBit(oldp+58,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+59,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+60,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch));
    bufp->fullBit(oldp+61,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump));
    bufp->fullBit(oldp+62,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr));
    bufp->fullCData(oldp+63,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+64,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel),2);
    bufp->fullCData(oldp+65,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel),2);
    bufp->fullIData(oldp+66,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out),32);
    bufp->fullBit(oldp+67,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                            & (0xf0000000U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
    bufp->fullIData(oldp+68,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jump)
                               ? ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                       + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                   : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
                               : (((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__branch) 
                                   & ((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                       ? ((2U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                           ? ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  >= vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  < vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                                           : ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? VL_GTES_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : VL_LTS_III(32, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                                       : ((1U & (~ 
                                                 ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                                  >> 1U))) 
                                          && ((1U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                                   ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                                   : ((IData)(4U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+69,(((1U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                               ? vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata
                               : ((2U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                   ? ((IData)(4U) + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc)
                                   : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))),32);
    bufp->fullBit(oldp+70,(((4U & (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__funct3))
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
    bufp->fullIData(oldp+71,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__jalr)
                               ? (0xfffffffeU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                                 + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                               : vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)),32);
    bufp->fullBit(oldp+72,(((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                            & ((~ ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we) 
                                   | (0xe0000000U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
                               & (0xf0000000U != vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)))));
    bufp->fullBit(oldp+73,((1U & (~ ((0x290U <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)) 
                                     & (0x2f0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)))))));
    bufp->fullBit(oldp+74,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
                                     & (0x1ecU > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)))))));
    bufp->fullBit(oldp+75,(((0x1e0U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count)) 
                            & (0x280U > (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count)))));
    bufp->fullSData(oldp+76,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count),10);
    bufp->fullSData(oldp+77,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count),10);
    bufp->fullCData(oldp+78,((0xffU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__h_count) 
                                       >> 2U))),8);
    bufp->fullCData(oldp+79,((0x7fU & ((IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__timing__DOT__v_count) 
                                       >> 2U))),7);
    bufp->fullSData(oldp+80,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__timing__DOT__fb_raddr),15);
    bufp->fullSData(oldp+81,((0x7fffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)),15);
    bufp->fullBit(oldp+82,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__fb_we));
    bufp->fullIData(oldp+83,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata),32);
    bufp->fullIData(oldp+84,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata),32);
    bufp->fullIData(oldp+85,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_a),32);
    bufp->fullIData(oldp+86,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_b),32);
    bufp->fullIData(oldp+87,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+88,((0U == vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
    bufp->fullIData(oldp+89,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+90,((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result 
                              - (IData)(0x1000U))),32);
    bufp->fullSData(oldp+91,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0),16);
    bufp->fullBit(oldp+92,(vlSelfRef.graphics_test_tb__DOT__clk_100mhz));
    bufp->fullBit(oldp+93,(vlSelfRef.graphics_test_tb__DOT__rst));
    bufp->fullIData(oldp+94,(vlSelfRef.graphics_test_tb__DOT__idx_green),32);
    bufp->fullIData(oldp+95,(vlSelfRef.graphics_test_tb__DOT__idx_red),32);
    bufp->fullIData(oldp+96,(vlSelfRef.graphics_test_tb__DOT__errors),32);
    bufp->fullCData(oldp+97,(((0U == (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2))
                               ? 0U : (0xffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs
                                       [vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__rs2]))),8);
    bufp->fullBit(oldp+98,((1U & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__imem
                                  [(0x3ffU & (vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__pc 
                                              >> 2U))] 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+99,(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                             [(0xfffU & vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result)]),8);
    bufp->fullIData(oldp+100,(((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                << 0x18U) | ((vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.graphics_test_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)))),32);
}
