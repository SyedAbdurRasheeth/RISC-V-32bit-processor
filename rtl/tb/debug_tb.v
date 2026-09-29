`timescale 1ns/1ps

module debug_tb;

    reg clk;
    reg rst;
    wire       debug_char_valid;
    wire [7:0] debug_char;

    wire [3:0] buttons = 4'b0000;
    wire [7:0] frame_count = 8'b0;

    wire [3:0] led_out;
    wire [14:0] fb_waddr;
    wire [7:0] fb_wdata;
    wire fb_we;

    integer i;

    // Instantiate CPU
    cpu_top dut (
        .clk(clk),
        .rst(rst),
        .buttons(buttons),
        .frame_count(frame_count),

        .debug_char_valid(debug_char_valid),
        .debug_char(debug_char),

        .led_out(led_out),
        .fb_waddr(fb_waddr),
        .fb_wdata(fb_wdata),
        .fb_we(fb_we)
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
        for (i = 0; i < 20000000; i = i + 1) begin
            #5;

            if (dut.debug_char_valid) begin
                $write("%c", dut.debug_char);
                
            end

            if (dut.mem_write && (dut.alu_result == 32'hF0000000)) begin
                $display("UART STORE: pc=%08x addr=%08x data=%08x char=%c",
                        dut.pc,
                        dut.alu_result,
                        dut.rs2_rdata,
                        dut.rs2_rdata[7:0]);
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