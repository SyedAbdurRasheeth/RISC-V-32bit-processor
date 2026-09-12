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
    wire [31:0] next_pc;

    always @(posedge clk or posedge rst) begin 

        if (rst)
            pc <= 32'd0;
        else
            pc <= next_pc;
    
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
    wire reg_write, alu_src, mem_read, mem_write, branch, jump, jalr;
    wire [3:0] alu_ctrl;
    wire [1:0] wb_sel, alu_a_sel;

    control_unit cu (

    .opcode(opcode),
    .funct3(funct3),
    .funct7_bit5(funct7_bit5),
    .reg_write(reg_write),
    .alu_src(alu_src),
    .alu_ctrl(alu_ctrl),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .jump(jump),
    .branch(branch),
    .jalr(jalr),
    .wb_sel(wb_sel),
    .alu_a_sel(alu_a_sel)

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
    
    reg [31:0] alu_a;
    always @(*) begin
        case (alu_a_sel)
            2'b01:   alu_a = pc;
            2'b10:   alu_a = 32'd0;
            default: alu_a = rs1_rdata;
        endcase
    end


    //ALU
    wire [31:0] alu_b = alu_src ? im_out : rs2_rdata;
    wire [31:0]  alu_result;
    wire alu_zero;

    alu ex(
        .a(alu_a),
        .b(alu_b),
        .alu_ctrl(alu_ctrl),
        .result(alu_result),
        .zero(alu_zero)
    );
    
    wire branch_taken;
    branch_comp bc (
        .rs1_data(rs1_rdata), 
        .rs2_data(rs2_rdata), 
        .funct3(funct3),
        .branch_taken(branch_taken)
    );

    wire [31:0] jump_target = jalr ? ((rs1_rdata + im_out) & 32'hFFFFFFFE)  : (pc +im_out);
    assign next_pc = jump ? jump_target : ((branch && branch_taken) ? (pc + im_out) : (pc + 32'd4));


    wire[31:0] mem_rdata;
    data_mem mem(
        .clk(clk),
        .addr(alu_result),
        .wdata(rs2_rdata),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .funct3(funct3),
        .rdata(mem_rdata) 
    ); 

    
    assign rd_wdata = (wb_sel == 2'b01) ? mem_rdata :(wb_sel == 2'b10) ? (pc + 32'd4) : alu_result;
    
    

endmodule
