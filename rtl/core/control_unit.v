`timescale 1ns/1ps

module control_unit(
    input  [6:0] opcode,
    input  [2:0] funct3,
    input        funct7_bit5,
    output reg       alu_src,
    output reg       reg_write,
    output reg [3:0] alu_ctrl,
    output mem_read,
    output mem_write, 
    output mem_to_reg

);

    localparam OPCODE_R     = 7'b0110011;
    localparam OPCODE_I     = 7'b0010011;
    localparam OPCODE_LOAD  = 7'b0000011;
    localparam OPCODE_STORE = 7'b0100011;


    localparam ALU_ADD = 4'b0000;
    localparam ALU_SUB = 4'b0001;
    localparam ALU_AND = 4'b0010;
    localparam ALU_OR  = 4'b0011;
    localparam ALU_XOR = 4'b0100;
    localparam ALU_SLL = 4'b0101;
    localparam ALU_SRL = 4'b0110;
    localparam ALU_SRA = 4'b0111;
    localparam ALU_SLT = 4'b1000;
    localparam ALU_SLTU = 4'b1001;
    
    always @(*) begin
        
        alu_src = 1'b0;
        reg_write = 1'b0;
        alu_ctrl = 4'b0000;
        mem_read   = 1'b0;
        mem_write  = 1'b0;
        mem_to_reg = 1'b0;

        case(opcode)
            
            OPCODE_R: begin
                reg_write = 1'b1;
                alu_src = 1'b0;

                case(funct3)

                    3'b000: alu_ctrl = funct7_bit5 ? ALU_SUB : ALU_ADD; 
                    3'b111: alu_ctrl = ALU_AND; 
                    3'b110: alu_ctrl = ALU_OR; 
                    3'b100: alu_ctrl = ALU_XOR; 
                    3'b001: alu_ctrl = ALU_SLL; 
                    3'b101: alu_ctrl = funct7_bit5 ? ALU_SRA : ALU_SRL; 
                    3'b010: alu_ctrl = ALU_SLT;
                    3'b011: alu_ctrl = ALU_SLTU;
                    default: alu_ctrl= 4'b0000;

                endcase
            end

            OPCODE_I : begin
                reg_write = 1'b1;
                alu_src = 1'b1;


                case(funct3)

                    3'b000: alu_ctrl = ALU_ADD;
                    3'b111: alu_ctrl = ALU_AND; 
                    3'b110: alu_ctrl = ALU_OR; 
                    3'b100: alu_ctrl = ALU_XOR; 
                    3'b001: alu_ctrl = ALU_SLL; 
                    3'b101: alu_ctrl = funct7_bit5 ? ALU_SRA : ALU_SRL; 
                    3'b010: alu_ctrl = ALU_SLT;
                    3'b011: alu_ctrl = ALU_SLTU;
                    default: alu_ctrl= 4'b0000;
                
                endcase
            end



            OPCODE_LOAD : begin
                reg_write  = 1'b1;
                alu_src =  1'b1;
                alu_ctrl = 4'b0000;
                mem_read = 1'b1;
                mem_to_reg = 1'b1;
            end

            OPCODE_STORE : begin
                reg_write  = 1'b0;
                alu_src =  1'b1;
                alu_ctrl = 4'b0000;
                mem_write = 1'b1;
                mem_to_reg = 1'b0;
            end
            

            default: begin
                reg_write = 1'b0;
                alu_src = 1'b0;
                alu_ctrl= 4'b0000;
                mem_read   = 1'b0;
                mem_write  = 1'b0;
                mem_to_reg = 1'b0;
            end
        endcase
    end

endmodule