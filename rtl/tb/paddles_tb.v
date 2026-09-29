`timescale 1ns/1ps

module paddles_tb;

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

    integer idx;
    integer errors;

    integer y;
    integer found;

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


    initial begin
        clk_100mhz = 0;
        forever #5 clk_100mhz = ~clk_100mhz;
    end

    initial begin
        errors = 0;

        clk_100mhz = 0;
        rst = 1;

        btnU = 0;
        btnD = 0;
        btnL = 0;
        btnR = 0;

        $display("----------------------------------------");
        $display("PADDLE TEST");
        $display("----------------------------------------");

        // Reset
        repeat (2) @(posedge clk_100mhz);
        rst = 0;

        // Press UP
        btnU = 1;

        // Run for 6,000,000 clock cycles
        repeat (6000000) @(posedge clk_100mhz);

        btnU = 0;
        // ------------------------------------------------
        // Check that the left paddle exists.
        //
        // Paddle X position is 4.
        // Since UP was held, its Y position may have changed.
        // Search the entire left paddle column.
        // ------------------------------------------------

        

        found = 0;

        for (y = 0; y < 120; y = y + 1) begin
            if (dut.display.fb.mem[y * 160 + 4] === 8'hFF)
                found = 1;
        end

        if (found == 0) begin
            $display("ERROR: LEFT PADDLE NOT FOUND");
            errors = errors + 1;
        end
        else begin
            $display("LEFT PADDLE FOUND");
        end

        $display("----------------------------------------");

        if (errors == 0)
            $display("PADDLE TEST PASSED");
        else
            $display("PADDLE TEST FAILED: %0d errors", errors);

        $display("----------------------------------------");

        $finish;
    end

endmodule