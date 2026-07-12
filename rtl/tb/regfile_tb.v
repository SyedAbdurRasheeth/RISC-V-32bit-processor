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

    reg_file dut(
        .clk(clk),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_we(rd_we),
        .rd_wdata(rd_wdata),
        .rs1_data(rs1_rdata),
        .rs2_data(rs2_rdata)
    );
    
    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk=~clk;
     end
     
     initial begin
        rs1_addr = 0;
        rs2_addr = 0;
        rd_addr  = 0;
        rd_we    = 0;
        rd_wdata = 0;

        #10;  
        // Test 1 : Write 100 to x1
        
        ("Test 1 : Write 100 to x1");
        
        rd_addr = 5'd1;
        rd_wdata = 32'd100;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs1_addr = 5'd1;
        
        
        #4; 
        

        ("x1 = %d", rs1_rdata);
        
        // Test 2 : Write 200 to x2

        ("Test 1 : Write 200 to x2");
        
        rd_addr = 5'd2;
        rd_wdata = 32'd200;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs2_addr = 5'd2;
        #4
        

        ("x2 = %d", rs2_rdata);
       
        // Test 3 : Simultaneous Read
        
        ("Test 3 : Read x1 and x2");
        
        rs1_addr = 5'd1;
        rs2_addr = 5'd2;
        
        ("x1 = %d", rs1_rdata);
        ("x2 = %d", rs2_rdata);
        
        
        // Test 4 : Attempt Write to x0
        ("TTest 4 : Attempt Write to x0");
        rd_addr = 5'd0;
        rd_wdata = 32'd100;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs2_addr = 5'd0;
        #4
        

        ("x0 = %d", rs2_rdata);
        
        
        // Test 5 : Write Disabled
        ("Test 5 : Write Disabled");
        
        rd_addr = 5'd3;
        rd_wdata = 32'd100;
        rd_we = 0;
        
        @(posedge clk);
        #1
        
        rs1_addr = 5'd3;
        #1
   
        ("x3 = %d", rs1_rdata);
        #3
         // Test 6 : Overwrite x1
         
        ("Test 6 : Overwrite x1");
        
        rd_addr = 5'd1;
        rd_wdata = 32'd50;
        rd_we = 1;
        
        @(posedge clk);
        #1
        rd_we = 0;
        rs1_addr = 5'd1;
        
        #4;

        ("x1 = %d", rs1_data);
        
        // End Simulation
        ("--------------------------------");
        ("Simulation Finished Successfully");
        ("--------------------------------");

        ;
        
    end
        
endmodule


