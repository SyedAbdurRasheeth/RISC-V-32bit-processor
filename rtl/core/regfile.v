module regfile (
input       clk,
    input [4:0]  rs1_addr,
    input [4:0]  rs2_addr,
    input [4:0]  rd_addr,
    input        rd_we,
    input [31:0] rd_wdata,
    output[31:0] rs1_rdata,
    output[31:0] rs2_rdata
    );
    
    reg [31:0] regs[0:31];
    
    assign rs1_rdata = (rs1_addr == 5'd0) ? 32'd0: regs[rs1_addr];
    assign rs2_rdata = (rs2_addr == 5'd0) ? 32'd0: regs[rs2_addr];
    
    always @(posedge clk) begin
        
    
        if (rd_we && rd_addr != 5'd0)
            regs[rd_addr] <= rd_wdata;
    end     
    
    integer i;
    initial begin
        for(i=0; i<32; i=i+1)
            regs[i] = 32'd0;
    end
endmodule
