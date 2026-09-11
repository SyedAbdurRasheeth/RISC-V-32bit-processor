`timescale 1ns/1ps

module loadstore_tb;

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
        #120;

        // Check register values
        $display("----------------------------------------");
        $display("CPU TEST RESULTS AFTER LOAD AND STORE");
        $display("----------------------------------------");

        $display("x10 (LW) : expect -5, got %0d", $signed(dut.rf.regs[10]));
        $display("x11 (LB) : expect -56, got %0d", $signed(dut.rf.regs[11]));
        $display("x12 (LBU): expect 200, got %0d", $signed(dut.rf.regs[12]));
        $display("x13 (LH) : expect 200, got %0d", $signed(dut.rf.regs[13]));
        $display("x14 (LHU): expect 200, got %0d", $signed(dut.rf.regs[14]));


        // Check expected values
        if (dut.rf.regs[10] !== 32'hFFFFFFFB) begin 
            $display("ERROR: x10 incorrect"); 
            errors = errors + 1; 
        end;

        if (dut.rf.regs[11] !== 32'hFFFFFFC8) begin 
            $display("ERROR: x11 incorrect"); 
            errors = errors + 1; 
        end

        if (dut.rf.regs[12] !== 32'h000000C8) begin 
            $display("ERROR: x12 incorrect"); 
            errors = errors + 1; 
        end

        if (dut.rf.regs[13] !== 32'h000000C8) begin 
            $display("ERROR: x13 incorrect"); 
            errors = errors + 1; 
        end

        if (dut.rf.regs[14] !== 32'h000000C8) begin 
            $display("ERROR: x14 incorrect"); 
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
        $dumpvars(0, cpu_top_tb);
    end

endmodule