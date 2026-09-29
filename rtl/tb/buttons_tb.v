`timescale 1ns/1ps

module buttons_tb;

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

    // 100 MHz clock
    always #5 clk_100mhz = ~clk_100mhz;

    integer i;
    integer idx_new;
    integer idx_old;
    integer errors;

    initial begin

        errors = 0;

        clk_100mhz = 0;
        rst = 1;

        btnU = 0;
        btnD = 0;
        btnL = 0;
        btnR = 0;

        // Reset
        #20;
        rst = 0;

        // ------------------------------------------------
        // Initial pixel should be at (80,60)
        // ------------------------------------------------

        // Press RIGHT
        btnR = 1;

        // Hold button long enough for debounce + CPU
        for (i = 0; i < 26000; i = i + 1)
            @(posedge clk_100mhz);

        
        btnR = 0;

        for (i = 0; i < 1000; i = i + 1)
            @(posedge clk_100mhz);

        // ------------------------------------------------
        // Check framebuffer
        //
        // New position: (81,60)
        // Old position: (80,60)
        // ------------------------------------------------

        idx_new = 60 * 160 + 81;
        idx_old = 60 * 160 + 80;

        $display("----------------------------------------");
        $display("BUTTON TEST");
        $display("----------------------------------------");

        $display("DEBUG idx_new=%0d", idx_new);
        $display("DEBUG idx_old=%0d", idx_old);
        $display("DEBUG mem[9680]=%02h", dut.display.fb.mem[9680]);
        $display("DEBUG mem[9681]=%02h", dut.display.fb.mem[9681]);
        
        $display("pixel(81,60) = 0x%h (expect ff)", dut.display.fb.mem[idx_new]);

        $display("pixel(80,60) = 0x%h (expect 00)", dut.display.fb.mem[idx_old]);

        if (dut.display.fb.mem[idx_new] !== 8'hFF) begin
            $display("ERROR: pixel(81,60) should be WHITE");
            errors = errors + 1;
        end

        if (dut.display.fb.mem[idx_old] !== 8'h00) begin
            $display("ERROR: pixel(80,60) should be BLACK");
            errors = errors + 1;
        end

        $display("----------------------------------------");

        if (errors == 0) begin
            $display("BUTTON TEST PASSED");
        end
        else begin
            $display("BUTTON TEST FAILED: %0d errors", errors);
        end

        $display("----------------------------------------");

        $finish;
    end

endmodule
