
`timescale 1ns/1ps

module control_unit_tb;

    reg  [6:0] opcode;
    reg  [2:0] funct3;
    reg        funct7_bit5;
    wire [3:0] alu_ctrl;
    wire       alu_src;
    wire       reg_write;
    
    
    integer total = 0;
    integer passed = 0;

    localparam OPCODE_R = 7'b0110011;
    localparam OPCODE_I = 7'b0010011;


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


    // Instantiate DUT
    control_unit dut (
        .opcode(opcode),
        .funct3(funct3),
        .alu_ctrl(alu_ctrl),
        .funct7_bit5(funct7_bit5),
        .alu_src(alu_src),
        .reg_write(reg_write)
    );

   
    task check;
        input [6:0] test_opcode;
        input [2:0] test_funct3;
        input       test_funct7_bit5;
        input       expected_reg_write;
        input       expected_alu_src;
        input [3:0] expected_alu_ctrl;
        input [255:0] name;

        begin
            opcode = test_opcode;
            funct3 = test_funct3;
            funct7_bit5 = test_funct7_bit5;

            

            #1;

            total = total + 1;

            $display("----------------------------------------");

            if ((reg_write == expected_reg_write) &&
                (alu_src == expected_alu_src)  &&
                (alu_ctrl == expected_alu_ctrl)) begin

                passed = passed + 1;
                $display("%s : PASS", name);

            end
            else begin

                $display("%s : FAIL", name);

                $display("  Expected: reg_write=%b alu_src=%b alu_ctrl=%b",
                         expected_reg_write,
                         expected_alu_src,
                         expected_alu_ctrl);

                $display("  Got:      reg_write=%b alu_src=%b alu_ctrl=%b",
                         reg_write,
                         alu_src,
                         alu_ctrl);


            end

            $display("----------------------------------------\n");
        end
    endtask

    initial begin
        
      
        // I-type instructions


        check(OPCODE_R, 3'b000, 1'b0, 1'b1, 1'b0, ALU_ADD, "ADD");

        check(OPCODE_R, 3'b000, 1'b1, 1'b1, 1'b0, ALU_SUB, "SUB");

        check(OPCODE_R, 3'b111, 1'b0, 1'b1, 1'b0, ALU_AND, "AND");

        check(OPCODE_R, 3'b110, 1'b0, 1'b1, 1'b0, ALU_OR, "OR");

        check(OPCODE_R, 3'b100, 1'b0, 1'b1, 1'b0, ALU_XOR, "XOR");

        check(OPCODE_R, 3'b001, 1'b0, 1'b1, 1'b0, ALU_SLL, "SLL");

        check(OPCODE_R, 3'b101, 1'b0, 1'b1, 1'b0, ALU_SRL, "SRL");

        check(OPCODE_R, 3'b101, 1'b1, 1'b1, 1'b0, ALU_SRA, "SRA");

        check(OPCODE_R, 3'b010, 1'b0, 1'b1, 1'b0, ALU_SLT, "SLT");

        check(OPCODE_R, 3'b011, 1'b0, 1'b1, 1'b0, ALU_SLTU, "SLTU");


     
        // I-type instructions


        check(OPCODE_I, 3'b000, 1'b0, 1'b1, 1'b1, ALU_ADD, "ADDI");

        check(OPCODE_I, 3'b111, 1'b0, 1'b1, 1'b1, ALU_AND, "ANDI");

        check(OPCODE_I, 3'b110, 1'b0, 1'b1, 1'b1, ALU_OR, "ORI");

        check(OPCODE_I, 3'b100, 1'b0, 1'b1, 1'b1, ALU_XOR, "XORI");

        check(OPCODE_I, 3'b001, 1'b0, 1'b1, 1'b1, ALU_SLL, "SLLI");

        check(OPCODE_I, 3'b101, 1'b0, 1'b1, 1'b1, ALU_SRL, "SRLI");

        check(OPCODE_I, 3'b101, 1'b1, 1'b1, 1'b1, ALU_SRA, "SRAI");

        check(OPCODE_I, 3'b010, 1'b0, 1'b1, 1'b1, ALU_SLT, "SLTI");

        check(OPCODE_I, 3'b011, 1'b0, 1'b1, 1'b1, ALU_SLTU, "SLTIU");


        // Unknown opcode
 

        check(7'b1111111, 3'b000, 1'b0,
              1'b0, 1'b0, ALU_ADD, "Unknown opcode");



        // Final result


        $display("");
        $display("-----------------------------");
        $display("Tests passed: %0d/%0d", passed, total);
        $display("-----------------------------");

        if (passed == total)
            $display("ALL TESTS PASSED");
        else
            $display("SOME TESTS FAILED");

        $finish;

    end

endmodule