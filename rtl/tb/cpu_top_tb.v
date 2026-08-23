`timescale 1ns/1ps

module cpu_top_tb;

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
        $display("CPU TEST RESULTS");
        $display("----------------------------------------");

        $display("x3 (expect 8):  %0d", $signed(dut.rf.regs[3]));
        $display("x4 (expect 2):  %0d", $signed(dut.rf.regs[4]));
        $display("x5 (expect 1):  %0d", $signed(dut.rf.regs[5]));
        $display("x6 (expect 7):  %0d", $signed(dut.rf.regs[6]));
        $display("x7 (expect 6):  %0d", $signed(dut.rf.regs[7]));
        $display("x8 (expect 1):  %0d", $signed(dut.rf.regs[8]));
        $display("x9 (expect 0):  %0d", $signed(dut.rf.regs[9]));

        // Check expected values
        if (dut.rf.regs[3] !== 32'd8)
            errors = errors + 1;

        if (dut.rf.regs[4] !== 32'd2)
            errors = errors + 1;

        if (dut.rf.regs[5] !== 32'd1)
            errors = errors + 1;

        if (dut.rf.regs[6] !== 32'd7)
            errors = errors + 1;

        if (dut.rf.regs[7] !== 32'd6)
            errors = errors + 1;

        if (dut.rf.regs[8] !== 32'd1)
            errors = errors + 1;

        if (dut.rf.regs[9] !== 32'd0)
            errors = errors + 1;

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
        $dumpvars(0, cpu_top_tb);
    end

endmodule