`timescale 1ns/1ps

module  data_mem(
    input  wire       clk,
    input  wire [31:0]addr,
    input  wire [31:0]wdata,
    input  wire       mem_read,
    input  wire       mem_write,
    input  wire [2:0] funct3,
    output reg  [31:0]rdata 
);

   reg[7:0] mem[0:4095];

   integer i;
   initial begin
    for(i = 0; i < 4096; i = i+1 )
        mem[i] = 8'd0;
    end


    //WRITE 
    always @(posedge clk) begin
        if (mem_write) begin

            case (funct3)

                3'b000 : begin //SB
                    mem[addr] <= wdata[7:0];
                end 

                3'b001 : begin //SH
                    mem[addr] <= wdata[7:0];
                    mem[addr+1] <= wdata[15:8];
                end

                3'b010 : begin //SW
                    mem[addr] <= wdata[7:0];
                    mem[addr+1] <= wdata[15:8];
                    mem[addr+2] <= wdata[23:16];
                    mem[addr+3] <= wdata[31:24];
                end


                default: ;
            endcase
        end
    end


    // READ


    wire [7:0]  byte0 = mem[addr];
    wire [15:0] half0 = {mem[addr+1], mem[addr]};
    wire [31:0] word0 = {mem[addr+3], mem[addr+2],mem[addr+1], mem[addr]};

    always @(*) begin
        rdata = 32'd0;

        if (mem_read) begin

            case (funct3)

                3'b000 : rdata = {{24{byte0[7]}}, byte0}; //LB
                3'b001 : rdata = {{16{half0[15]}}, half0}; //LH
                3'b010 : rdata = word0; //LW
                3'b100 : rdata = {24'd0, byte0}; //LBU
                3'b101 : rdata = {16'd0, half0}; //LHU

                default: rdata = 32'd0;

            endcase
        end 
    end
endmodule
