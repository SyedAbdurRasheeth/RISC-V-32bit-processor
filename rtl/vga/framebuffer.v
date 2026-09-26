`timescale 1ns/1ps

module framebuffer(
    input wire wclk,
    input wire [14:0] waddr,     // 0-19199, needs 15 bits
    input wire [7:0]  wdata,
    input wire we,

    input wire rclk,
    input wire [14:0] raddr,
    output reg [7:0]rdata

);

    reg [7:0] mem [0:19199];

    integer i;
    initial begin
        for (i = 0; i < 19200; i = i + 1)
            mem[i] = 8'h00;   // start black
    end

    always @(posedge wclk) begin
        if (we) 
            mem[waddr] <= wdata;
            
    end  

    always @(posedge rclk) begin
        rdata <= mem[raddr];
    end

    
endmodule


