`timescale 1ns/1ps

module vga_timing_tb;

    reg clk_25mhz;
    reg rst;
    wire hsync;
    wire vsync;
    wire [9:0] pixel_x;
    wire [9:0] pixel_y;
    wire video_on;

    integer errors;

    vga_timing dut (
        .clk_25mhz(clk_25mhz),
        .rst(rst),
        .hsync(hsync),
        .vsync(vsync),
        .pixel_x(pixel_x),
        .pixel_y(pixel_y),
        .video_on(video_on)
    );

    
    always #20 clk_25mhz = ~clk_25mhz;

    initial begin

        errors = 0;

        
        clk_25mhz = 0;
        rst = 1;

        
        #40;
        rst = 0;

      
        $display("----------------------------------------");
        $display("CHECKING HORIZONTAL TIMING");
        $display("----------------------------------------");

        
        if (video_on !== 1'b1) begin
            $display("ERROR: video_on should be HIGH at pixel 0");
            errors = errors + 1;
        end

        
        repeat (639) @(posedge clk_25mhz);
        #1
        if (video_on !== 1'b1) begin
            $display("ERROR: video_on should be HIGH at pixel 639");
            errors = errors + 1;
        end

        // Pixel 640
        @(posedge clk_25mhz);
        #1
        if (video_on !== 1'b0) begin
            $display("ERROR: video_on should be LOW at pixel 640");
            errors = errors + 1;
        end

        // Advance from 640 to 656
        repeat (16) @(posedge clk_25mhz);
        #1
        // Pixel 656
        if (hsync !== 1'b0) begin
            $display("ERROR: HSYNC should be LOW at pixel 656");
            errors = errors + 1;
        end

        // Advance to pixel 751
        repeat (95) @(posedge clk_25mhz);
        #1
        if (hsync !== 1'b0) begin
            $display("ERROR: HSYNC should remain LOW at pixel 751");
            errors = errors + 1;
        end

        // Pixel 752
        @(posedge clk_25mhz);
        #1
        if (hsync !== 1'b1) begin
            $display("ERROR: HSYNC should return HIGH at pixel 752");
            errors = errors + 1;
        end

        $display("Horizontal timing check complete");



        $display("----------------------------------------");
        $display("CHECKING VERTICAL TIMING");
        $display("----------------------------------------");

        // Finish the current horizontal line
        repeat (48) @(posedge clk_25mhz);
        #1
        //Line 1
        if (video_on !== 1'b1) begin
            $display("ERROR: video_on should be HIGH at line 2 ");
            errors = errors + 1;
        end

        // 480 visible lines
        repeat (479 * 800) @(posedge clk_25mhz);
        #1
        // Line 480
        if (video_on !== 1'b0) begin
            $display("ERROR: video_on should be LOW at line 480");
            errors = errors + 1;
        end

        // Lines 480-489
        repeat (10 * 800) @(posedge clk_25mhz);
        #1
        // Line 490 - VSYNC starts
        if (vsync !== 1'b0) begin
            $display("ERROR: VSYNC should be LOW at line 490");
            errors = errors + 1;
        end

        // Line 491
        repeat (800) @(posedge clk_25mhz);
        #1
        if (vsync !== 1'b0) begin
            $display("ERROR: VSYNC should remain LOW at line 491");
            errors = errors + 1;
        end

        // Line 492 - VSYNC ends
        repeat (800) @(posedge clk_25mhz);
        #1
        if (vsync !== 1'b1) begin
            $display("ERROR: VSYNC should return HIGH at line 492");
            errors = errors + 1;
        end


        
        $display("----------------------------------------");

        if (errors == 0) begin
            $display("VGA TIMING TEST PASSED");
        end
        else begin
            $display("VGA TIMING TEST FAILED: %0d errors", errors);
        end

        $display("----------------------------------------");

        $finish;

    end


    // Waveform dump
    initial begin
        $dumpfile("vga_waveform.vcd");
        $dumpvars(0, vga_timing_tb);
    end

endmodule
