`timescale 1ns/1ps

module cpu_top_tb2;

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
        #300;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS");
        $display("----------------------------------------");

        $display("x1  (expect 10): %0d", $signed(dut.rf.regs[1]));
        $display("x2  (expect -3): %0d", $signed(dut.rf.regs[2]));
        $display("x3  (expect 7):  %0d", $signed(dut.rf.regs[3]));
        $display("x4  (expect 2):  %0d", $signed(dut.rf.regs[4]));
        $display("x5  (expect 11): %0d", $signed(dut.rf.regs[5]));
        $display("x6  (expect 5):  %0d", $signed(dut.rf.regs[6]));
        $display("x7  (expect 40): %0d", $signed(dut.rf.regs[7]));
        $display("x8  (expect 5):  %0d", $signed(dut.rf.regs[8]));
        $display("x9  (expect -2): %0d", $signed(dut.rf.regs[9]));
        $display("x10 (expect 1):  %0d", $signed(dut.rf.regs[10]));
        $display("x11 (expect 0):  %0d", $signed(dut.rf.regs[11]));
        $display("x12 (expect 1):  %0d", $signed(dut.rf.regs[12]));
        $display("x13 (expect 0):  %0d", $signed(dut.rf.regs[13]));

        // Check expected values
        if (dut.rf.regs[1]  !== 32'd10)
            errors = errors + 1;

        if (dut.rf.regs[2]  !== -32'd3)
            errors = errors + 1;

        if (dut.rf.regs[3]  !== 32'd7)
            errors = errors + 1;

        if (dut.rf.regs[4]  !== 32'd2)
            errors = errors + 1;

        if (dut.rf.regs[5]  !== 32'd11)
            errors = errors + 1;

        if (dut.rf.regs[6]  !== 32'd5)
            errors = errors + 1;

        if (dut.rf.regs[7]  !== 32'd40)
            errors = errors + 1;

        if (dut.rf.regs[8]  !== 32'd5)
            errors = errors + 1;

        if (dut.rf.regs[9]  !== -32'd2)
            errors = errors + 1;

        if (dut.rf.regs[10] !== 32'd1)
            errors = errors + 1;

        if (dut.rf.regs[11] !== 32'd0)
            errors = errors + 1;

        if (dut.rf.regs[12] !== 32'd1)
            errors = errors + 1;

        if (dut.rf.regs[13] !== 32'd0)
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
        $dumpvars(0, cpu_top_tb2);
    end

endmodule