// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbuttons_tb__Syms.h"


VL_ATTR_COLD void Vbuttons_tb___024root__trace_init_sub__TOP__0(Vbuttons_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("buttons_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk_100mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"btnU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"btnD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"btnL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"btnR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"vga_hs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"vga_vs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"vga_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"vga_g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"vga_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"idx_new",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+11,0,"idx_old",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+12,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk_100mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"btnU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"btnD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"btnL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"btnR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"vga_hs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"vga_vs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"fb_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+110,0,"fb_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+111,0,"fb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"btnU_clean",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"btnD_clean",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"btnL_clean",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"btnR_clean",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"buttons_clean",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"buttons",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+93,0,"debug_char_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"debug_char",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"led_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"fb_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+110,0,"fb_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+111,0,"fb_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+78,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+79,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+122,0,"funct7_bit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"wb_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"alu_a_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"im_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"jump_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"DEBUG_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"LED_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"FB_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"FB_TOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"BUTTON_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"is_fb_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"real_mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+99,0,"is_button_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"mem_rdata_actual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+77,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+79,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+122,0,"funct7_bit5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+84,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"wb_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"alu_a_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+131,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+132,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+133,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+134,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+135,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+136,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+137,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+138,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+139,0,"ALU_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+140,0,"ALU_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"ALU_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+142,0,"ALU_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"ALU_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"ALU_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"ALU_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+146,0,"ALU_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"ALU_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"ALU_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ig", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"im_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+118,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+123,0,"byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+120,0,"half0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+124,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+81,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+78,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+82,0,"rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("db_d", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"raw_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"clean_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+46,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+47,0,"raw_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"raw_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("db_l", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"raw_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clean_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+49,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+50,0,"raw_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"raw_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("db_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"raw_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"clean_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+52,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+53,0,"raw_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"raw_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("db_u", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"raw_signal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"clean_signal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"DEBOUNCE_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+55,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+56,0,"raw_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"raw_sync2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("display", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk_100mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"vga_hs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"vga_vs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"fb_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+110,0,"fb_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+111,0,"fb_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"clk_25mhz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"video_on",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"pixel_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+105,0,"pixel_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+106,0,"fb_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+107,0,"fb_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+108,0,"fb_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"fb_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+66,0,"video_on_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"hsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"vsync_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"pr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"pg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+69,0,"pb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("fb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+110,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+111,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+65,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("timing", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+58,0,"clk_25mhz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"pixel_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+105,0,"pixel_y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+103,0,"video_on",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"H_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"H_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"H_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"H_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"H_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"V_VISIBLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"V_FRONT_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"V_SYNC_PULSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"V_BACK_PORCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"V_TOTAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+105,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_init_top(Vbuttons_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbuttons_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbuttons_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbuttons_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbuttons_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbuttons_tb___024root__trace_register(Vbuttons_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbuttons_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbuttons_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbuttons_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbuttons_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_const_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbuttons_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_const_0\n"); );
    // Init
    Vbuttons_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbuttons_tb___024root*>(voidSelf);
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbuttons_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_const_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+125,(0xf0000000U),32);
    bufp->fullIData(oldp+126,(0xe0000000U),32);
    bufp->fullIData(oldp+127,(0x10000000U),32);
    bufp->fullIData(oldp+128,(0x10004affU),32);
    bufp->fullIData(oldp+129,(0x20000000U),32);
    bufp->fullCData(oldp+130,(0x33U),7);
    bufp->fullCData(oldp+131,(0x13U),7);
    bufp->fullCData(oldp+132,(3U),7);
    bufp->fullCData(oldp+133,(0x23U),7);
    bufp->fullCData(oldp+134,(0x63U),7);
    bufp->fullCData(oldp+135,(0x6fU),7);
    bufp->fullCData(oldp+136,(0x67U),7);
    bufp->fullCData(oldp+137,(0x37U),7);
    bufp->fullCData(oldp+138,(0x17U),7);
    bufp->fullCData(oldp+139,(0U),4);
    bufp->fullCData(oldp+140,(1U),4);
    bufp->fullCData(oldp+141,(2U),4);
    bufp->fullCData(oldp+142,(3U),4);
    bufp->fullCData(oldp+143,(4U),4);
    bufp->fullCData(oldp+144,(5U),4);
    bufp->fullCData(oldp+145,(6U),4);
    bufp->fullCData(oldp+146,(7U),4);
    bufp->fullCData(oldp+147,(8U),4);
    bufp->fullCData(oldp+148,(9U),4);
    bufp->fullIData(oldp+149,(0x3d090U),18);
    bufp->fullIData(oldp+150,(0x280U),32);
    bufp->fullIData(oldp+151,(0x10U),32);
    bufp->fullIData(oldp+152,(0x60U),32);
    bufp->fullIData(oldp+153,(0x30U),32);
    bufp->fullIData(oldp+154,(0x320U),32);
    bufp->fullIData(oldp+155,(0x1e0U),32);
    bufp->fullIData(oldp+156,(0xaU),32);
    bufp->fullIData(oldp+157,(2U),32);
    bufp->fullIData(oldp+158,(0x21U),32);
    bufp->fullIData(oldp+159,(0x20dU),32);
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_full_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbuttons_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_full_0\n"); );
    // Init
    Vbuttons_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbuttons_tb___024root*>(voidSelf);
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbuttons_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbuttons_tb___024root__trace_full_0_sub_0(Vbuttons_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbuttons_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuttons_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb__DOT__i),32);
    bufp->fullBit(oldp+4,(vlSelfRef.buttons_tb__DOT__rst));
    bufp->fullBit(oldp+5,(vlSelfRef.buttons_tb__DOT__btnU));
    bufp->fullBit(oldp+6,(vlSelfRef.buttons_tb__DOT__btnD));
    bufp->fullBit(oldp+7,(vlSelfRef.buttons_tb__DOT__btnL));
    bufp->fullBit(oldp+8,(vlSelfRef.buttons_tb__DOT__btnR));
    bufp->fullIData(oldp+9,(vlSelfRef.buttons_tb__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelfRef.buttons_tb__DOT__idx_new),32);
    bufp->fullIData(oldp+11,(vlSelfRef.buttons_tb__DOT__idx_old),32);
    bufp->fullIData(oldp+12,(vlSelfRef.buttons_tb__DOT__errors),32);
    bufp->fullIData(oldp+13,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[0]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[1]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[2]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[3]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[4]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[5]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[6]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[7]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[8]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[9]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[10]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[11]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[12]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[13]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[14]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[15]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[16]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[17]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[18]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[19]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[20]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[21]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[22]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[23]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[24]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[25]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[26]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[27]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[28]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[29]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[30]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rf__DOT__regs[31]),32);
    bufp->fullCData(oldp+45,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__led_out),4);
    bufp->fullIData(oldp+46,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__counter),18);
    bufp->fullBit(oldp+47,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync1));
    bufp->fullBit(oldp+48,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_d__DOT__raw_sync2));
    bufp->fullIData(oldp+49,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__counter),18);
    bufp->fullBit(oldp+50,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync1));
    bufp->fullBit(oldp+51,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_l__DOT__raw_sync2));
    bufp->fullIData(oldp+52,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__counter),18);
    bufp->fullBit(oldp+53,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync1));
    bufp->fullBit(oldp+54,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_r__DOT__raw_sync2));
    bufp->fullIData(oldp+55,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__counter),18);
    bufp->fullBit(oldp+56,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync1));
    bufp->fullBit(oldp+57,(vlSelfRef.buttons_tb__DOT__dut__DOT__db_u__DOT__raw_sync2));
    bufp->fullBit(oldp+58,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__clk_25mhz));
    bufp->fullCData(oldp+59,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__divider__DOT__counter),2);
    bufp->fullBit(oldp+60,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__hsync_d));
    bufp->fullBit(oldp+61,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__vsync_d));
    bufp->fullCData(oldp+62,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                           >> 4U)) 
                                  | (1U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                           >> 5U)))
                               : 0U)),4);
    bufp->fullCData(oldp+63,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                               ? ((0xeU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                           >> 1U)) 
                                  | (1U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                           >> 2U)))
                               : 0U)),4);
    bufp->fullCData(oldp+64,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d)
                               ? (0xfU & ((0xcU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                                   << 2U)) 
                                          | (3U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel))))
                               : 0U)),4);
    bufp->fullCData(oldp+65,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel),8);
    bufp->fullBit(oldp+66,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__video_on_d));
    bufp->fullCData(oldp+67,((7U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                    >> 5U))),3);
    bufp->fullCData(oldp+68,((7U & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+69,((3U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_pixel))),2);
    bufp->fullBit(oldp+70,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean));
    bufp->fullBit(oldp+71,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean));
    bufp->fullBit(oldp+72,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean));
    bufp->fullBit(oldp+73,(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean));
    bufp->fullCData(oldp+74,(((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                << 1U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))),4);
    bufp->fullIData(oldp+75,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+76,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__instruction),32);
    bufp->fullCData(oldp+77,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__opcode),7);
    bufp->fullCData(oldp+78,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rd),5);
    bufp->fullCData(oldp+79,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3),3);
    bufp->fullCData(oldp+80,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+81,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2),5);
    bufp->fullBit(oldp+82,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+83,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_src));
    bufp->fullBit(oldp+84,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+85,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+86,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch));
    bufp->fullBit(oldp+87,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump));
    bufp->fullBit(oldp+88,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr));
    bufp->fullCData(oldp+89,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_ctrl),4);
    bufp->fullCData(oldp+90,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel),2);
    bufp->fullCData(oldp+91,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a_sel),2);
    bufp->fullIData(oldp+92,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out),32);
    bufp->fullBit(oldp+93,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                            & (0xf0000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
    bufp->fullIData(oldp+94,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jump)
                               ? ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                       + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                                   : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)
                               : (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__branch) 
                                   & ((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                       ? ((2U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                           ? ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  >= vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  < vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata))
                                           : ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? VL_GTES_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : VL_LTS_III(32, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata, vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))
                                       : ((1U & (~ 
                                                 ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3) 
                                                  >> 1U))) 
                                          && ((1U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
                                               ? (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)
                                               : (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata 
                                                  == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata)))))
                                   ? vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1
                                   : ((IData)(4U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)))),32);
    bufp->fullIData(oldp+95,(((1U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                               ? (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                                   & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                                   ? ((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                        << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                                  << 2U)) 
                                      | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                          << 1U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))
                                   : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata)
                               : ((2U == (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__wb_sel))
                                   ? ((IData)(4U) + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc)
                                   : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))),32);
    bufp->fullBit(oldp+96,(((4U & (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__funct3))
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
    bufp->fullIData(oldp+97,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__jalr)
                               ? (0xfffffffeU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__im_out 
                                                 + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata))
                               : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT____VdfgRegularize_hff2ff239_0_1)),32);
    bufp->fullBit(oldp+98,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_write) 
                            & ((~ ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write) 
                                   | (0xe0000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))) 
                               & (0xf0000000U != vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)))));
    bufp->fullBit(oldp+99,(((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                            & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))));
    bufp->fullIData(oldp+100,((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_read) 
                                & (0x20000000U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))
                                ? ((((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnR_clean) 
                                     << 3U) | ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnL_clean) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnD_clean) 
                                       << 1U) | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__btnU_clean)))
                                : vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata)),32);
    bufp->fullBit(oldp+101,((1U & (~ ((0x290U <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)) 
                                      & (0x2f0U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)))))));
    bufp->fullBit(oldp+102,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
                                      & (0x1ecU > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)))))));
    bufp->fullBit(oldp+103,(((0x1e0U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count)) 
                             & (0x280U > (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count)))));
    bufp->fullSData(oldp+104,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count),10);
    bufp->fullSData(oldp+105,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count),10);
    bufp->fullCData(oldp+106,((0xffU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__h_count) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+107,((0x7fU & ((IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__timing__DOT__v_count) 
                                        >> 2U))),7);
    bufp->fullSData(oldp+108,(vlSelfRef.buttons_tb__DOT__dut__DOT__display__DOT__fb_raddr),15);
    bufp->fullSData(oldp+109,((0x7fffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)),15);
    bufp->fullCData(oldp+110,(vlSelfRef.buttons_tb__DOT__dut__DOT__fb_wdata),8);
    bufp->fullBit(oldp+111,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__is_fb_write));
    bufp->fullIData(oldp+112,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs1_rdata),32);
    bufp->fullIData(oldp+113,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__rs2_rdata),32);
    bufp->fullIData(oldp+114,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_a),32);
    bufp->fullIData(oldp+115,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_b),32);
    bufp->fullIData(oldp+116,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+117,((0U == vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)));
    bufp->fullIData(oldp+118,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem_rdata),32);
    bufp->fullIData(oldp+119,((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result 
                               - (IData)(0x1000U))),32);
    bufp->fullSData(oldp+120,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0),16);
    bufp->fullBit(oldp+121,(vlSelfRef.buttons_tb__DOT__clk_100mhz));
    bufp->fullBit(oldp+122,((1U & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__imem
                                   [(0x3ffU & (vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__pc 
                                               >> 2U))] 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+123,(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                              [(0xfffU & vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result)]),8);
    bufp->fullIData(oldp+124,(((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                << 0x18U) | ((vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__alu_result))] 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.buttons_tb__DOT__dut__DOT__cpu__DOT__mem__DOT__half0)))),32);
}
