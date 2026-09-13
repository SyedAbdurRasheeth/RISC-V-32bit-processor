
`timescale 1ns/1ps


module loops_tb;

    reg clk;
    reg rst;

    integer errors;


    reg [31:0] sum_addr       = 32'h00000014;
    reg [31:0] array_addr     = 32'h00000018;
    reg [31:0] factorial_addr = 32'h0000001C;

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
        #10000;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS LOOPS");
        $display("----------------------------------------");

        
      

        $display("sum result = %0d (expect 150)",
                 {dut.mem.mem[sum_addr+3],
                  dut.mem.mem[sum_addr+2],
                  dut.mem.mem[sum_addr+1],
                  dut.mem.mem[sum_addr]});

        $display("array result = %0d (expect 30)",
                 {dut.mem.mem[array_addr+3],
                  dut.mem.mem[array_addr+2],
                  dut.mem.mem[array_addr+1],
                  dut.mem.mem[array_addr]});

        $display("factorial result = %0d (expect 120)",
                 {dut.mem.mem[factorial_addr+3],
                  dut.mem.mem[factorial_addr+2],
                  dut.mem.mem[factorial_addr+1],
                  dut.mem.mem[factorial_addr]});

        // Check expected values
        if ({dut.mem.mem[sum_addr+3],
                  dut.mem.mem[sum_addr+2],
                  dut.mem.mem[sum_addr+1],
                  dut.mem.mem[sum_addr]} !== 32'd150) begin

            $display("ERROR: sum result incorrect");
            errors = errors + 1;
        
        end
        
        if ({dut.mem.mem[array_addr+3],
                  dut.mem.mem[array_addr+2],
                  dut.mem.mem[array_addr+1],
                  dut.mem.mem[array_addr]} !== 32'd30) begin

            $display("ERROR: array result incorrect");
            errors = errors + 1;
        
        end

        if ({dut.mem.mem[factorial_addr+3],
                dut.mem.mem[factorial_addr+2],
                dut.mem.mem[factorial_addr+1],
                dut.mem.mem[factorial_addr]} !== 32'd120) begin

            $display("ERROR: factorial result incorrect");
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
        $dumpvars(0, loops_tb);
    end

endmodule