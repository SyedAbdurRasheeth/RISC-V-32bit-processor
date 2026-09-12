
`timescale 1ns/1ps

module jump_test_tb;

    reg clk;
    reg rst;

    integer errors;

    // Instantiate CPU
    cpu_top dut (
        .clk(clk),
        .rst(rst)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

        errors = 0;

        // Initial values
        clk = 0;
        rst = 1;

        // Reset
        #10;
        rst = 0;

        // Run CPU
        #120;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS - JAL/JALR/LUI/AUIPC");
        $display("----------------------------------------");

        $display("x1  (LUI + ADDI) : expect 0x12345678, got 0x%08h",dut.rf.regs[1]);

        $display("x2  (AUIPC)      : expect 8, got %0d", $signed(dut.rf.regs[2]));

        $display("x10 (JAL link)   : expect 16, got %0d",$signed(dut.rf.regs[10]));

        $display("x21 (JAL target) : expect 42, got %0d",$signed(dut.rf.regs[21]));

        $display("x20 (skipped)    : expect 0, got %0d",$signed(dut.rf.regs[20]));


        // Check expected values

        // LUI + ADDI builds 0x12345678
        if (dut.rf.regs[1] !== 32'h12345678) begin
            $display("ERROR: x1 incorrect");
            errors = errors + 1;
        end

        // AUIPC captures its own PC
        if (dut.rf.regs[2] !== 32'h00000008) begin
            $display("ERROR: x2 incorrect");
            errors = errors + 1;
        end

        // JAL stores PC + 4 in x10
        if (dut.rf.regs[10] !== 32'h00000010) begin
            $display("ERROR: x10 incorrect");
            errors = errors + 1;
        end

        // JAL landed at the correct target
        if (dut.rf.regs[21] !== 32'h0000002A) begin
            $display("ERROR: x21 incorrect");
            errors = errors + 1;
        end

        // Instruction that should have been skipped
        if (dut.rf.regs[20] !== 32'h00000000) begin
            $display("ERROR: x20 was executed unexpectedly");
            errors = errors + 1;
        end


        $display("----------------------------------------");

        // Final result
        if (errors == 0) begin
            $display("TEST PASSED");
            $finish;
        end
        else begin
            $display("TEST FAILED: %0d errors", errors);
            $fatal(1);
        end

    end

    // Waveform dump
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, jump_tb);
    end

endmodule

