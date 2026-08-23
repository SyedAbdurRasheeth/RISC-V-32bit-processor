`timescale 1ns/1ps

module cpu_top_tb;

    reg clk;
    reg rst;

    // Instantiate CPU
    cpu_top dut (
        .clk(clk),
        .rst(rst)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

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

        $display("----------------------------------------");

        $finish;
    end

    // Waveform dump
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb_cpu_top);
    end

endmodule
