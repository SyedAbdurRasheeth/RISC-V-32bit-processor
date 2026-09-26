`timescale 1ns/1ps

module graphics_test_tb;

    reg clk_100mhz;
    reg rst;

    wire       vga_hs;
    wire       vga_vs;
    wire [3:0] vga_r;
    wire [3:0] vga_g;
    wire [3:0] vga_b;

    integer i;
    integer idx_green;
    integer idx_red;
    integer errors;

    // DUT
    fpga_cpu_vga_top dut (
        .clk_100mhz(clk_100mhz),
        .rst(rst),
        .vga_hs(vga_hs),
        .vga_vs(vga_vs),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    // 100 MHz clock
    always #5 clk_100mhz = ~clk_100mhz;


    
    

    initial begin

        errors = 0;
        clk_100mhz = 0;
        rst = 1;

        // Reset
        #10;
        rst = 0;

        // ------------------------------------------------
        // Run CPU
        // ------------------------------------------------
        
        // clear_screen() writes 160 * 120 = 19200 pixels,
        // so give the CPU plenty of time.

        repeat (1000000)
            @(posedge clk_100mhz);
        
        

        

        idx_red = 20 * 160 + 20;
        idx_green = 5 * 160 + 5;
        $display("----------------------------------------");
        $display("GRAPHICS TEST");
        $display("----------------------------------------");

        // -----------------------------------------------
        // Check GREEN pixel (5,5)
        // -----------------------------------------------

        $display("pixel(5,5) address = %0d", idx_green);
        $display("pixel(5,5) = 0x%02h", dut.timing.fb.mem[idx_green]);

        $display("expected green = 0x1c");

        if (dut.timing.fb.mem[idx_green] !== 8'h1C) begin
            $display("ERROR: pixel(5,5) is not green");
            errors = errors + 1;
        end
        else begin
            $display("pixel(5,5) GREEN PASS");
        end

        // -----------------------------------------------
        // Check RED pixel (20,20)
        // -----------------------------------------------

        $display("pixel(20,20) address = %0d", idx_red);
        $display("pixel(20,20) = 0x%02h",
                dut.timing.fb.mem[idx_red]);

        $display("expected red = 0xe0");

        if (dut.timing.fb.mem[idx_red] !== 8'hE0) begin
            $display("ERROR: pixel(20,20) is not red");
            errors = errors + 1;
        end
        else begin
            $display("pixel(20,20) RED PASS");
        end

        // ------------------------------------------------
        // Final result
        // ------------------------------------------------

        $display("----------------------------------------");

        if (errors == 0) begin

            $display("GRAPHICS TEST PASSED");

        end
        else begin

            $display("GRAPHICS TEST FAILED: %0d errors",  errors);

        end

        $display("----------------------------------------");

        $finish;

    end

    // Waveform
    initial begin
        $dumpfile("graphics_test_tb.vcd");
        $dumpvars(0, graphics_test_tb);
    end

endmodule