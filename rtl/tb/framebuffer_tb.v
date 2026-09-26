`timescale 1ns/1ps

module framebuffer_tb;

    reg clk_100mhz;
    reg rst;

    reg [14:0] fb_waddr;
    reg [7:0]  fb_wdata;
    reg        fb_we;

    wire vga_hs;
    wire vga_vs;
    wire [3:0] vga_r;
    wire [3:0] vga_g;
    wire [3:0] vga_b;

    integer i;
    reg red_found;
    reg green_found;
    reg blue_found;

    vga_fb_timing dut (
        .clk_100mhz(clk_100mhz),
        .rst(rst),

        .fb_waddr(fb_waddr),
        .fb_wdata(fb_wdata),
        .fb_we(fb_we),

        .vga_hs(vga_hs),
        .vga_vs(vga_vs),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    // 100 MHz clock
    always #5 clk_100mhz = ~clk_100mhz;

    initial begin

        red_found = 0; 
        green_found = 0; 
        blue_found = 0;

        clk_100mhz = 0;
        rst = 1;

        fb_waddr = 15'd0;
        fb_wdata = 8'd0;
        fb_we = 0;

        // Reset
        #10;
        rst = 0;
        
        

        // ------------------------------------------------
        // Write logical framebuffer pixel (5,5)
        // Address = 5 * 160 + 5 = 805
        // Red = 1110 0000
        // ------------------------------------------------

        @(posedge clk_100mhz);

        fb_waddr = 15'd805;
        fb_wdata = 8'b11100000;
        fb_we = 1;

        repeat (8) @(posedge clk_100mhz);

        fb_we = 0;


        // ------------------------------------------------ 
        // Write GREEN at logical pixel (6,5) 
        // Address = 5 * 160 + 6 = 806 
        // RGB332 = 000 111 00 
        // ------------------------------------------------ 
        
        @(posedge clk_100mhz);
        fb_waddr = 15'd806;
        fb_wdata = 8'b00011100;
        fb_we = 1;

        repeat (8) @(posedge clk_100mhz);

        fb_we = 0;


        // Give framebuffer some time before scanning
        repeat (10) @(posedge clk_100mhz);

        // ------------------------------------------------ 
        // Write BLUE at logical pixel (7,5) 
        // Address = 5 * 160 + 7 = 807 
        // RGB332 = 000 000 11 
        // ------------------------------------------------ 
        
        @(posedge clk_100mhz);
        fb_waddr = 15'd807;
        fb_wdata = 8'b00000011;
        fb_we = 1;

        repeat (8) @(posedge clk_100mhz);

        fb_we = 0;

        // Give framebuffer time before scanning
        repeat (10) @(posedge clk_100mhz);

        // ------------------------------------------------
        // Run VGA scan
        // ------------------------------------------------

       for (i = 0; i < 2000000; i = i + 1) begin
    
            @(posedge clk_100mhz);

            // RED
            if (!red_found &&
                (vga_r == 4'hF) &&
                (vga_g == 4'h0) &&
                (vga_b == 4'h0)) begin

                red_found = 1;

                $display("----------------------------------------");
                $display("RED PIXEL FOUND");
                $display("vga_r = %h", vga_r);
                $display("vga_g = %h", vga_g);
                $display("vga_b = %h", vga_b);
                $display("----------------------------------------");
            end

            // GREEN
            if (!green_found &&
                (vga_r == 4'h0) &&
                (vga_g == 4'hF) &&
                (vga_b == 4'h0)) begin

                green_found = 1;

                $display("----------------------------------------");
                $display("GREEN PIXEL FOUND");
                $display("vga_r = %h", vga_r);
                $display("vga_g = %h", vga_g);
                $display("vga_b = %h", vga_b);
                $display("----------------------------------------");
            end

            // BLUE
            if (!blue_found &&
                (vga_r == 4'h0) &&
                (vga_g == 4'h0) &&
                (vga_b == 4'hF)) begin

                blue_found = 1;

                $display("----------------------------------------");
                $display("BLUE PIXEL FOUND");
                $display("vga_r = %h", vga_r);
                $display("vga_g = %h", vga_g);
                $display("vga_b = %h", vga_b);
                $display("----------------------------------------");
            end

            // All three colors found
            if (red_found && green_found && blue_found) begin

                $display("----------------------------------------");
                $display("ALL RGB PIXELS FOUND");
                $display("FRAMEBUFFER TEST PASSED");
                $display("----------------------------------------");

                $finish;
            end
        end

        // ------------------------------------------------
        // Test failed
        // ------------------------------------------------

        $display("----------------------------------------");

        if (!red_found)
            $display("ERROR: Red pixel was not observed");

        if (!green_found)
            $display("ERROR: Green pixel was not observed");

        if (!blue_found)
            $display("ERROR: Blue pixel was not observed");

        $display("FRAMEBUFFER TEST FAILED");
        $display("----------------------------------------");

        $finish;

    end

    // Waveform
    initial begin
        $dumpfile("fb_waveform.vcd");
        $dumpvars(0, tb_framebuffer);
    end

endmodule