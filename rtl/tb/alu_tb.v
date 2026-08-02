`timescale 1ns/1ps

module alu_tb;

    reg  [31:0] a;
    reg  [31:0] b;
    reg  [3:0]  alu_ctrl;
    wire [31:0] result;
    wire        zero;

    integer total = 0;
    integer passed = 0;

    // Instantiate DUT
    alu dut (
        .a(a),
        .b(b),
        .alu_ctrl(alu_ctrl),
        .result(result),
        .zero(zero)
    );

    // Task to check ALU output
    task check;
        input [31:0] test_a;
        input [31:0] test_b;
        input [3:0]  ctrl;
        input [31:0] expected;
        input [255:0] name;

        begin
            a = test_a;
            b = test_b;
            alu_ctrl = ctrl;

            #1;

            total = total + 1;

            $display("----------------------------------------");
            $display("%s", name);
            $display("A        = %0d", $signed(test_a));
            $display("B        = %0d", $signed(test_b));
            $display("Result   = %0d", $signed(result));
            $display("Expected = %0d", $signed(expected));
            $display("Zero     = %b", zero);

            if (result == expected) begin
                passed = passed + 1;
                $display("PASS");
            end
            else begin
                $display("FAIL");
            end

            $display("----------------------------------------\n");
        end
    endtask

    initial begin

        // ADD
        check(32'd5, 32'd3, 4'b0000, 32'd8, "ADD");

        // SUB
        check(32'd5, 32'd3, 4'b0001, 32'd2, "SUB");

        // SUB (negative)
        check(32'd0, 32'd5, 4'b0001, -32'sd5, "SUB Negative");

        // AND
        check(32'hF0, 32'h0F, 4'b0010, 32'h00, "AND");

        // OR
        check(32'hF0, 32'h0F, 4'b0011, 32'hFF, "OR");

        // XOR
        check(32'hFF, 32'h0F, 4'b0100, 32'hF0, "XOR");

        // SLL
        check(32'd1, 32'd4, 4'b0101, 32'd16, "SLL");

        // SRL
        check(32'h80000000, 32'd1, 4'b0110, 32'h40000000, "SRL");

        // SRA
        check(32'h80000000, 32'd1, 4'b0111, 32'hC0000000, "SRA");

        // SRA (-1 >> 1)
        check(32'hFFFFFFFF, 32'd1, 4'b0111, 32'hFFFFFFFF, "SRA -1");

        // SLT
        check(-32'sd5, 32'd3, 4'b1000, 32'd1, "SLT (-5 < 3)");

        // SLTU
        check(32'hFFFFFFFB, 32'd3, 4'b1001, 32'd0, "SLTU");

        // SLT true
        check(32'd3, 32'd5, 4'b1000, 32'd1, "SLT (3 < 5)");

        // SLT false
        check(32'd5, 32'd3, 4'b1000, 32'd0, "SLT (5 < 3)");

        $display("\n======================================");
        $display("Tests Passed : %0d / %0d", passed, total);
        $display("======================================");

        $finish;

    end

endmodule