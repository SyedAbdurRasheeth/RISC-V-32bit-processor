`timescale 1ns/1ps

module cpu_top(
    input clk,
    input rst
);

    `ifndef PROGRAM_FILE
        `define PROGRAM_FILE "program.hex"
    `endif

    //PROGRAM COUNTER
    reg [31:0] pc;

    always @(posedge clk or posedge rst) begin 

        if (rst)
            pc <= 32'd0;
        else
            pc <= pc + 32'd4;
    
    end

    //INSTRUCTION MEMORY
    reg [31:0] imem[0:1023];
    wire [31:0] instruction = imem[pc[11:2]];
    
    initial begin
        $readmemh(`PROGRAM_FILE, imem);
    end

    //DECODING INSTRUCTION
    
    wire [6:0] opcode = instruction[6:0];
    wire [4:0] rd     = instruction[11:7];
    wire [2:0] funct3 = instruction[14:12];
    wire [4:0] rs1    = instruction[19:15];
    wire [4:0] rs2    = instruction[24:20];
    wire       funct7_bit5 = instruction[30];

    //CONTROL UNIT
    wire reg_write, alu_src;
    wire [3:0] alu_ctrl;

    control_unit cu (

    .opcode(opcode),
    .funct3(funct3),
    .funct7_bit5(funct7_bit5),
    .reg_write(reg_write),
    .alu_src(alu_src),
    .alu_ctrl(alu_ctrl)

    );

    //IMMEDIATE GENERATOR
    wire [31:0] im_out;

    imgen ig(
        .instruction(instruction),
        .im_out(im_out)
    );

    //REGISTER FILE
    wire [31:0] rs1_rdata;
    wire [31:0] rs2_rdata;
    wire [31:0] rd_wdata;

    regfile rf(
        .clk(clk),
        .rs1_addr(rs1),
        .rs2_addr(rs2),
        .rd_addr(rd),
        .rd_we(reg_write),
        .rd_wdata(rd_wdata),
        .rs1_rdata(rs1_rdata),
        .rs2_rdata(rs2_rdata)
    );

    //ALU
    wire [31:0] alu_b = alu_src ? im_out : rs2_rdata;
    wire [31:0]  alu_result;
    wire alu_zero;

    alu ex(
        .a(rs1_rdata),
        .b(alu_b),
        .alu_ctrl(alu_ctrl),
        .result(alu_result),
        .zero(alu_zero)
    );

    assign rd_wdata = alu_result;

endmodule
