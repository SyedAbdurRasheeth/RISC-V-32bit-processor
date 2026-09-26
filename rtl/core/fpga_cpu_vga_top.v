`timescale 1ns/1ps

module fpga_cpu_vga_top (
    input  wire clk_100mhz,
    input  wire rst,
    output wire vga_hs, vga_vs,
    output wire [3:0] vga_r, vga_g, vga_b
);
    wire [14:0] fb_waddr;
    wire [7:0]  fb_wdata;
    wire        fb_we;

    cpu_top cpu (
        .clk(clk_100mhz),
        .rst(rst),
        .debug_char_valid(), .debug_char(),
        .led_out(),
        .fb_waddr(fb_waddr), .fb_wdata(fb_wdata), .fb_we(fb_we)
    );

    vga_fb_timing timing(
        .clk_100mhz(clk_100mhz), .rst(rst),
        .vga_hs(vga_hs), .vga_vs(vga_vs),
        .vga_r(vga_r), .vga_g(vga_g), .vga_b(vga_b),
        .fb_waddr(fb_waddr), .fb_wdata(fb_wdata), .fb_we(fb_we)
    );
endmodule
