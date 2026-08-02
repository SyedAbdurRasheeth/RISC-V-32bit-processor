`timescale 1ns/1ps

module regfile_tb;

    // Inputs
    reg clk;
    reg [4:0] rs1_addr;
    reg [4:0] rs2_addr;
    reg [4:0] rd_addr;
    reg rd_we;
    reg [31:0] rd_wdata;

    // Outputs
    wire [31:0] rs1_rdata;
    wire [31:0] rs2_rdata;

    integer total = 0;
    integer passed = 0;

    // DUT
    regfile dut (
        .clk(clk),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_we(rd_we),
        .rd_wdata(rd_wdata),
        .rs1_rdata(rs1_rdata),
        .rs2_rdata(rs2_rdata)
    );

    // Clock
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Check Task
    task check;
        input [31:0] actual;
        input [31:0] expected;
        input [255:0] name;

        begin
            total = total + 1;

            $display("----------------------------------------");
            $display("%s", name);
            $display("Expected = %0d", expected);
            $display("Actual   = %0d", actual);

            if (actual == expected) begin
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

        $dumpfile("regfile.vcd");
        $dumpvars(0, regfile_tb);

        rs1_addr = 0;
        rs2_addr = 0;
        rd_addr  = 0;
        rd_we    = 0;
        rd_wdata = 0;

        //--------------------------------------------------
        // Test 1 : Write 100 to x1
        //--------------------------------------------------

        rd_addr   = 5'd1;
        rd_wdata  = 32'd100;
        rd_we     = 1;

        @(posedge clk);
        #1;

        rd_we = 0;
        rs1_addr = 5'd1;

        #1;

        check(rs1_rdata, 32'd100, "Write 100 to x1");

        //--------------------------------------------------
        // Test 2 : Write 200 to x2
        //--------------------------------------------------

        rd_addr   = 5'd2;
        rd_wdata  = 32'd200;
        rd_we     = 1;

        @(posedge clk);
        #1;

        rd_we = 0;
        rs2_addr = 5'd2;

        #1;

        check(rs2_rdata, 32'd200, "Write 200 to x2");

        //--------------------------------------------------
        // Test 3 : Read x1 and x2
        //--------------------------------------------------

        rs1_addr = 5'd1;
        rs2_addr = 5'd2;

        #1;

        check(rs1_rdata, 32'd100, "Read x1");
        check(rs2_rdata, 32'd200, "Read x2");

        //--------------------------------------------------
        // Test 4 : Attempt write to x0
        //--------------------------------------------------

        rd_addr   = 5'd0;
        rd_wdata  = 32'd999;
        rd_we     = 1;

        @(posedge clk);
        #1;

        rd_we = 0;
        rs1_addr = 5'd0;

        #1;

        check(rs1_rdata, 32'd0, "x0 remains zero");

        //--------------------------------------------------
        // Test 5 : Write Disabled
        //--------------------------------------------------

        rd_addr   = 5'd3;
        rd_wdata  = 32'd100;
        rd_we     = 0;

        @(posedge clk);
        #1;

        rs1_addr = 5'd3;

        #1;

        check(rs1_rdata, 32'd0, "Write disabled");

        //--------------------------------------------------
        // Test 6 : Overwrite x1
        //--------------------------------------------------

        rd_addr   = 5'd1;
        rd_wdata  = 32'd50;
        rd_we     = 1;

        @(posedge clk);
        #1;

        rd_we = 0;
        rs1_addr = 5'd1;

        #1;

        check(rs1_rdata, 32'd50, "Overwrite x1");

        //--------------------------------------------------
        // Summary
        //--------------------------------------------------

        $display("========================================");
        $display("Tests Passed : %0d / %0d", passed, total);
        $display("========================================");

        $finish;

    end

endmodule