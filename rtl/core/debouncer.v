`timescale 1ns/1ps

module debouncer (
    input wire clk,
    input wire rst,
    input raw_signal,
    output reg clean_signal
);

    localparam [17:0] DEBOUNCE_CYCLES = 18'd250000;

    reg [17:0] counter;
    reg        raw_sync1, raw_sync2;  
                                        
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            raw_sync1 <= 1'b0;
            raw_sync2 <= 1'b0;
            clean_signal <= 1'b0;
        end else begin
            raw_sync1 <= raw_signal;
            raw_sync2 <= raw_sync1;
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter      <= 18'd0;
            clean_signal <= 1'b0;
        end else begin
            if (raw_sync2 == clean_signal) begin
                counter <= 18'd0;  // signal matches current state, no change pending
            end else begin
                counter <= counter + 18'd1;
                if (counter >= DEBOUNCE_CYCLES) begin
                    clean_signal <= raw_sync2;  // held stable long enough - accept it
                    counter <= 18'd0;
                end
            end
        end
    end
endmodule