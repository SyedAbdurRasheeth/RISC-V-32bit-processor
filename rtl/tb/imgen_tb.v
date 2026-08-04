module imgen_tb;

    reg  [31:0] instruction;
    wire [31:0] im_out;

    integer total = 0;
    integer passed = 0;

    imgen dut (
        .instruction(instruction),
        .im_out(im_out)
        
    );

    task check;
        input [31:0] test_instruction;
        input signed [31:0] expected;
        input [255:0] name;

        begin
            instruction = test_instruction;

            #10

            total = total + 1;

            $display("--------------------------------------------------------------------------------------");
            
            $display("Name : %s", name);
            $display("Instruction= %h", test_instruction);
            $display("Immediate   = %0d",  $signed(im_out));
            $display("Expected = %0d", expected);

            if ($signed(im_out)== expected) begin
                passed = passed + 1;
                $display("PASS");
            end
            else begin
                $display("FAIL");
            end


            $display("--------------------------------------------------------------------------------------");
            
        end
    endtask
    
    initial begin
        
        // ADDI x1, x0, -5  -> imm should be -5
        check(32'hFFB00093, -5, "I-Type ADDI -5");

        // ADDI x1, x0, 100 -> imm should be 100
        check(32'h06400093, 100,  "I-Type ADDI 100");

        // SW x2, 8(x1) -> imm should be 8
        check(32'h0020A423, 8 , "S-Type Store x1+8 at x2");

        // BEQ x1, x2, 16 -> imm should be 16
        check(32'h00208863, 16, "B-Type offset to 16");

        // LUI x3, 0x12345 -> imm should be 0x12345000
        check(32'h123451B7, 32'h12345000, "U-type lui 0x12345" );

        // JAL x4, 32 -> imm should be 32
        check(32'h0200026F, 32,   "J- Type offset 32");

        $display("\n-----------------------------------------");
        $display("Tests Passed : %0d / %0d", passed, total);
        $display("-------------------------------------------");

        $finish;
    end
endmodule

