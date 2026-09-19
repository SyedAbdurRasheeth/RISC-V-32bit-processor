`timescale 1ns/1ps

module vga_timing(
    input wire clk_25mhz,
    input wire rst,
    output wire hsync,  // 0 when active and 1 when inactivve
    output wire vsync,
    output wire [9:0] pixel_x,
    output wire [9:0] pixel_y,
    output wire video_on
);

    localparam H_VISIBLE     = 640;
    localparam H_FRONT_PORCH = 16;
    localparam H_SYNC_PULSE  = 96;
    localparam H_BACK_PORCH  = 48;
    localparam H_TOTAL       = 800;

    localparam V_VISIBLE     = 480;
    localparam V_FRONT_PORCH = 10;
    localparam V_SYNC_PULSE  = 2;
    localparam V_BACK_PORCH  = 33;
    localparam V_TOTAL       = 525;

    reg [9:0] h_count;
    reg [9:0] v_count;

    always @(posedge clk_25mhz or posedge rst) begin
        if(rst) begin
            h_count <= 10'd0;
            v_count <= 10'd0;
        end

        else begin
            if (h_count == H_TOTAL -1) begin
                h_count <= 10'd0;
                if(v_count == V_TOTAL - 1) 
                    v_count <= 10'd0;
                else
                    v_count <= v_count + 10'd1;
            end

            else begin
                h_count <= h_count + 10'd1;
            end
        end
    end

    

    assign video_on = (v_count < V_VISIBLE) && (h_count < H_VISIBLE);

    assign hsync = !((h_count >= H_VISIBLE + H_FRONT_PORCH) &&  (h_count < H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE));
    
    assign vsync = !((v_count >= V_VISIBLE + V_FRONT_PORCH) &&  (v_count < V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE));

    assign pixel_x = h_count;
    assign pixel_y = v_count;

endmodule