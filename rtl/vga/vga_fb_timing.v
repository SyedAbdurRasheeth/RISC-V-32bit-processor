`timescale 1ns/1ps

module vga_fb_timing(
    input wire clk_100mhz,
    input wire rst,
    output wire vga_hs,
    output wire vga_vs,
    output wire [3:0] vga_r,
    output wire [3:0] vga_g,
    output wire [3:0] vga_b,

    input wire [14:0] fb_waddr,
    input wire [7:0]  fb_wdata,
    input wire        fb_we
);

    

    wire clk_25mhz;
    clk_div4 divider (
        .clk_in(clk_100mhz), .rst(rst), .clk_out(clk_25mhz)
    );

    wire hsync, vsync, video_on;
    wire [9:0] pixel_x, pixel_y;

    vga_timing timing (
        .clk_25mhz(clk_25mhz), .rst(rst),
        .hsync(hsync), .vsync(vsync), .video_on(video_on),
        .pixel_x(pixel_x), .pixel_y(pixel_y)
    );

    wire [7:0] fb_x = pixel_x[9:2]; // divide by four
    wire [6:0] fb_y = pixel_y[8:2];

    wire [14:0] fb_raddr = (fb_y *15'd160) + {7'd0, fb_x};

    wire [7:0] fb_pixel;

    framebuffer fb (
        .rclk(clk_25mhz), .wclk(clk_100mhz),
        .waddr(fb_waddr), .wdata(fb_wdata), .we(fb_we),
        .raddr(fb_raddr), .rdata(fb_pixel)
    );
    
    // Delay video_on/hsync/vsync by 1 cycle to match the framebuffer's latency

    reg video_on_d, hsync_d, vsync_d;
    always @(posedge clk_25mhz) begin
        video_on_d <= video_on;
        hsync_d <= hsync;
        vsync_d <= vsync;
    end


    // Expand 8-bit palette color to 4-bit VGA channels
    wire [2:0] pr = fb_pixel[7:5];
    wire [2:0] pg = fb_pixel[4:2];
    wire [1:0] pb = fb_pixel[1:0];

    assign vga_r = video_on_d ? {pr, pr[0]} : 4'h0;
    assign vga_g = video_on_d ? {pg, pg[0]} : 4'h0;
    assign vga_b = video_on_d ? {pb, pb} : 4'h0;

    assign vga_hs = hsync_d;
    assign vga_vs = vsync_d;
endmodule