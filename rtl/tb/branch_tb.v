`timescale 1ns/1ps

module branch_tb;

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
        // 14 clock cycles = 140 ns
        #140;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS AFTER BRANCH TEST");
        $display("----------------------------------------");

        $display("x10 (BEQ) : expect 1, got %0d",$signed(dut.rf.regs[10]));

        $display("x11 (BNE) : expect 2, got %0d",$signed(dut.rf.regs[11]));

        $display("x12 (BLT) : expect 3, got %0d", $signed(dut.rf.regs[12]));

        $display("x13 (BGE) : expect 4, got %0d", $signed(dut.rf.regs[13]));

        $display("x14 (BEQ NT): expect 5, got %0d", $signed(dut.rf.regs[14]));


        // Check expected values

        if (dut.rf.regs[10] !== 32'h00000001) begin
            $display("ERROR: x10 incorrect");
            errors = errors + 1;
        end

        if (dut.rf.regs[11] !== 32'h00000002) begin
            $display("ERROR: x11 incorrect");
            errors = errors + 1;
        end

        if (dut.rf.regs[12] !== 32'h00000003) begin
            $display("ERROR: x12 incorrect");
            errors = errors + 1;
        end

        if (dut.rf.regs[13] !== 32'h00000004) begin
            $display("ERROR: x13 incorrect");
            errors = errors + 1;
        end

        if (dut.rf.regs[14] !== 32'h00000005) begin
            $display("ERROR: x14 incorrect");
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
        $dumpvars(0, branch_tb);
    end

endmodule