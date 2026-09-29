`timescale 1ns/1ps

module ball_debug_tb;

    reg clk_100mhz;
    reg rst;

    reg btnU;
    reg btnD;
    reg btnL;
    reg btnR;

    wire vga_hs;
    wire vga_vs;
    wire [3:0] vga_r;
    wire [3:0] vga_g;
    wire [3:0] vga_b;

    integer i;

    fpga_cpu_vga_top dut (
        .clk_100mhz(clk_100mhz),
        .rst(rst),

        .btnU(btnU),
        .btnD(btnD),
        .btnL(btnL),
        .btnR(btnR),

        .vga_hs(vga_hs),
        .vga_vs(vga_vs),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    always #5 clk_100mhz = ~clk_100mhz;

    initial begin
        clk_100mhz = 0;
        rst = 1;

        btnU = 0;
        btnD = 0;
        btnL = 0;
        btnR = 0;

        #20;
        rst = 0;

        $display("----------------------------------------");
        $display("BALL DEBUG TEST");
        $display("----------------------------------------");

        // Run long enough for VGA frames to occur.
        for (i = 0; i < 20000000; i = i + 1) begin
            @(posedge clk_100mhz);

            if (dut.cpu.debug_char_valid) begin
                $write("%c", dut.cpu.debug_char);
            end
        end

        $display("");
        $display("----------------------------------------");
        $display("DEBUG TEST FINISHED");
        $display("----------------------------------------");

        $finish;
    end

    initial begin
        $dumpfile("ball_debug_tb.vcd");
        $dumpvars(0, ball_debug_tb);
    end

endmodule
