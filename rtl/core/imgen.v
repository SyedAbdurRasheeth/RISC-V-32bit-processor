module imgen(
    input wire [31:0] instruction,
    output reg [31:0] im_out
);

    wire [6:0] opcode = instruction[6:0];

    always@(*) begin
        case(opcode)

            //I-type ,loads,JALR
            7'b0010011, 7'b0000011, 7'b1100111: begin

                im_out = { {20{instruction[31]}} , instruction[31:20]};

            end
            
            //S-Type
            7'b0100011: begin

                im_out = { {20{instruction[31]}} , instruction[31:25] , instruction[11:7]};

            end

            // B-Type 
            7'b1100011: begin

                im_out = { {20{instruction[31]}} , instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            
            end 

            //U-type
            7'b0110111, 7'b0010111: begin

                im_out = {  instruction[31:12]  ,  12'b0 };

            end

            //J-type
            7'b1101111: begin

                im_out = { {12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0};

            end

            default: im_out = 32'd0;
        endcase
    end
endmodule 