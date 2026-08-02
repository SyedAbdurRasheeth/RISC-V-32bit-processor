module regfile_tb;
   
    // DUT Inputs & OUTPUTS
    reg       clk;
    reg [4:0]  rs1_addr;
    reg [4:0]  rs2_addr;
    reg [4:0]  rd_addr;
    reg        rd_we;
    reg [31:0] rd_wdata;
    wire [31:0]rs1_rdata;
    wire [31:0]rs2_rdata;
    
     
     // Instantiate DUT

    regfile dut(
        .clk(clk),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_we(rd_we),
        .rd_wdata(rd_wdata),
        .rs1_rdata(rs1_rdata),
        .rs2_rdata(rs2_rdata)
    );
    
    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk=~clk;
     end
     
     initial begin

        $dumpfile("regfile.vcd");
        $dumpvars(0, regfile_tb);

        rs1_addr = 0;
        rs2_addr = 0;
        rd_addr  = 0;
        rd_we    = 0;
        rd_wdata = 0;

        #10;  
        // Test 1 : Write 100 to x1
        
        $display("Test 1 : Write 100 to x1");
        
        rd_addr = 5'd1;
        rd_wdata = 32'd100;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs1_addr = 5'd1;
        
        
        #4; 
        

        if (rs1_rdata == 32'd100)
            $display("PASS: x1 = %d", rs1_rdata);
        else
            $display("FAIL: Expected 100, Got %d", rs1_rdata);
        
        // Test 2 : Write 200 to x2

        $display("Test 2 : Write 200 to x2");
        
        rd_addr = 5'd2;
        rd_wdata = 32'd200;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs2_addr = 5'd2;
        #4
        

        if (rs2_rdata == 32'd200)
            $display("PASS: x2 = %d", rs2_rdata);
        else
            $display("FAIL: Expected 200, Got %d", rs2_rdata);
       
        // Test 3 : Simultaneous Read
        
        $display("Test 3 : Read x1 and x2");
        
        rs1_addr = 5'd1;
        rs2_addr = 5'd2;
        
       
        if (rs1_rdata == 32'd100 && rs2_rdata == 32'd200) begin
            $display("x1 = %d", rs1_rdata);
            $display("x2 = %d", rs2_rdata);
            $display("PASS");
        end
        else begin
            $display("FAIL: x1=%d x2=%d", rs1_rdata, rs2_rdata);
        end
        
        // Test 4 : Attempt Write to x0
        $display("TTest 4 : Attempt Write to x0");
        rd_addr = 5'd0;
        rd_wdata = 32'd100;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs2_addr = 5'd0;
        #4
        

        if (rs2_rdata == 32'd0)
            $display("PASS: x0 remained zero");
        else
            $display("FAIL: x0 = %d", rs2_rdata);
        
        
        // Test 5 : Write Disabled
        $display("Test 5 : Write Disabled");
        
        rd_addr = 5'd3;
        rd_wdata = 32'd100;
        rd_we = 0;
        
        @(posedge clk);
        #1
        
        rs1_addr = 5'd3;
        #1
   
        if (rs1_rdata == 32'd0)
            $display("PASS: Write disabled");
        else
            $display("FAIL: x3 = %d", rs1_rdata);
        #3
         // Test 6 : Overwrite x1
         
        $display("Test 6 : Overwrite x1");
        
        rd_addr = 5'd1;
        rd_wdata = 32'd50;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs1_addr = 5'd1;
        
        #4;

        if (rs1_rdata == 32'd50)
            $display("PASS: x1 overwritten correctly");
        else
            $display("FAIL: Expected 50, Got %d", rs1_rdata);
        
        // End Simulation
        $display("--------------------------------");
        $display("Simulation Finished Successfully");
        $display("--------------------------------");
        $finish;

        ;
        
    
  
    end
    
endmodule


