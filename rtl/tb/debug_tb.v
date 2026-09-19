`timescale 1ns/1ps

module debug_tb;

    reg clk;
    reg rst;
    wire       debug_char_valid;
    wire [7:0] debug_char;

    integer i;

    // Instantiate CPU
    cpu_top dut (
        .clk(clk),
        .rst(rst),
        .debug_char_valid(debug_char_valid),
        .debug_char(debug_char)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

        // Initial values
        clk = 0;
        rst = 1;

        // Reset
        #10;
        rst = 0;

        $display("----------------------------------------");
        $display("DEBUG OUTPUT");
        $display("----------------------------------------");

        // Run CPU
        for (i = 0; i < 10000; i = i + 1) begin
            #5;

            if (dut.debug_char_valid) begin
                $write("%c", dut.debug_char);
                
            end

            #5;
        end

        $display("");
        $display("");
        $display("----------------------------------------");
        $display("UART TEST FINISHED");
        $display("----------------------------------------");

        $finish;
    end

    // Waveform dump
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, debug_tb);
    end

endmodule