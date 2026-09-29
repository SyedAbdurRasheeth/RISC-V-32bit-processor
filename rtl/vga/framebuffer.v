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
        if (we) begin
            mem[waddr] <= wdata;

            $display("FRAMEBUFFER ACTUAL WRITE: addr=%0d data=%02x",
                    waddr, wdata);
        end
    end

    always @(posedge wclk) begin
        if (we && (waddr == 9680 || waddr == 9681)) begin
            #1;
            $display("FRAMEBUFFER AFTER WRITE: addr=%0d mem=%02x",
                    waddr, mem[waddr]);
        end
    end

    always @(posedge rclk) begin
        rdata <= mem[raddr];
    end

    
endmodule


