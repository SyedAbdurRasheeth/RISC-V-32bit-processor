module vga_test_pattern (
    input  wire clk_100mhz,
    input  wire rst,
    output wire vga_hs,
    output wire vga_vs,
    output wire [3:0] vga_r,
    output wire [3:0] vga_g,
    output wire [3:0] vga_b
);
    wire clk_25mhz;
    clk_div4 divider (
        .clk_in(clk_100mhz),
        .rst(rst),
        .clk_out(clk_25mhz)
    );

    wire hsync, vsync, video_active;
    wire [9:0] pixel_x, pixel_y;

    vga_timing timing (
        .clk_25mhz(clk_25mhz),
        .rst(rst),
        .hsync(hsync),
        .vsync(vsync),
        .video_active(video_active),
        .pixel_x(pixel_x),
        .pixel_y(pixel_y)
    );

    // Simple vertical color bars: divide 640 pixels into 4 bands of 160
    reg [3:0] r, g, b;
    always @(*) begin
        if (!video_active) begin
            r = 4'h0; g = 4'h0; b = 4'h0;  // black during blanking
        end else begin
            case (pixel_x[9:7])  // top 3 bits of 0-639 range roughly divide into bands
                3'd0: begin r = 4'hF; g = 4'h0; b = 4'h0; end  // red
                3'd1: begin r = 4'h0; g = 4'hF; b = 4'h0; end  // green
                3'd2: begin r = 4'h0; g = 4'h0; b = 4'hF; end  // blue
                3'd3: begin r = 4'hF; g = 4'hF; b = 4'h0; end  // yellow
                default: begin r = 4'hF; g = 4'hF; b = 4'hF; end // white
            endcase
        end
    end

    assign vga_hs = hsync;
    assign vga_vs = vsync;
    assign vga_r  = r;
    assign vga_g  = g;
    assign vga_b  = b;

endmodule
