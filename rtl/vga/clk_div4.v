module clk_div4 (
    input  wire clk_in,   // 100MHz
    input  wire rst,
    output reg  clk_out   // 25MHz
);
    reg [1:0] counter;

    always @(posedge clk_in or posedge rst) begin
        if (rst) begin
            counter <= 2'd0;
            clk_out <= 1'b0;
        end else begin
            counter <= counter + 2'd1;
            if (counter == 2'd1)  // toggle every 2 input cycles = divide by 4 overall
                clk_out <= ~clk_out;
        end
    end
endmodule
