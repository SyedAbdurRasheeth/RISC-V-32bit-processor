`timescale 1ns/1ps


module hello_tb;

    reg clk;
    reg rst;

    integer errors;

    // Instantiate CPU
    cpu_top dut (
        .clk(clk),
        .rst(rst)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin

        errors = 0;

        // Initial values
        clk = 0;
        rst = 1;

        // Reset
        #10;
        rst = 0;

        // Run CPU
        #600;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS HELLO");
        $display("----------------------------------------");

        $display("result byte 0 : 0x%02h", dut.mem.mem[0]);
        $display("result byte 1 : 0x%02h", dut.mem.mem[1]);
        $display("result byte 2 : 0x%02h", dut.mem.mem[2]);
        $display("result byte 3 : 0x%02h", dut.mem.mem[3]);
    
        $display("result = %0d (expect 12)",
                 {dut.mem.mem[3],
                  dut.mem.mem[2],
                  dut.mem.mem[1],
                  dut.mem.mem[0]});

        // Check expected values
        if ({dut.mem.mem[3],
             dut.mem.mem[2],
             dut.mem.mem[1],
             dut.mem.mem[0]} !== 32'h0000000C) begin

            $display("ERROR: result incorrect");
            errors = errors + 1;
        
        end
        


        $display("----------------------------------------");

        // Final result
        if (errors == 0) begin
            $display("TEST PASSED");
            $finish;
        end
        else begin
            $display("TEST FAILED: %0d errors", errors);
            $fatal(1);
        end

    end

    // Waveform dump
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars(0, hello_tb);
    end

endmodule