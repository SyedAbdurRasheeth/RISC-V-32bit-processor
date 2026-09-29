`timescale 1ns/1ps

module fpga_cpu_vga_top (
    input  wire clk_100mhz,
    input  wire rst,
    input  wire btnU, btnD, btnL, btnR,
    output wire vga_hs, vga_vs,
    output wire [3:0] vga_r, vga_g, vga_b
);
    wire [14:0] fb_waddr;
    wire [7:0]  fb_wdata;
    wire        fb_we;

    wire btnU_clean, btnD_clean, btnL_clean, btnR_clean;

    debouncer db_u (.clk(clk_100mhz), .rst(rst), .raw_signal(btnU), .clean_signal(btnU_clean));
    debouncer db_d (.clk(clk_100mhz), .rst(rst), .raw_signal(btnD), .clean_signal(btnD_clean));
    debouncer db_l (.clk(clk_100mhz), .rst(rst), .raw_signal(btnL), .clean_signal(btnL_clean));
    debouncer db_r (.clk(clk_100mhz), .rst(rst), .raw_signal(btnR), .clean_signal(btnR_clean));

    wire [3:0] buttons_clean = {btnR_clean, btnL_clean, btnD_clean, btnU_clean};

    

    cpu_top cpu (
        .clk(clk_100mhz),
        .rst(rst),
        .debug_char_valid(), .debug_char(),
        .led_out(),
        .fb_waddr(fb_waddr), .fb_wdata(fb_wdata), .fb_we(fb_we),
        .buttons(buttons_clean)
    );

    vga_fb_timing display(
        .clk_100mhz(clk_100mhz), .rst(rst),
        .vga_hs(vga_hs), .vga_vs(vga_vs),
        .vga_r(vga_r), .vga_g(vga_g), .vga_b(vga_b),
        .fb_waddr(fb_waddr), .fb_wdata(fb_wdata), .fb_we(fb_we)
    );
endmodule
