module alu_tb;

    reg [31:0] a;
    reg [31:0] b;
    reg [3:0]  alu_ctrl;
    wire  [31:0] result;
    wire        zero;

    alu dut(
        
        .a(a),
        .b(b),
        .alu_ctrl(alu_ctrl),
        .result(result),
        .zero(zero)
    );


    initial begin

        a = 0;
        b = 0;
        alu_ctrl = 0;
        
        

        #10
        // Add case 1
        ("Test 1 : ADD 10 , 20");
        a = 32'd10;
        b = 32'd20;
        alu_ctrl = 4'b0000
        ("A = 10");
        ("B = 20");
        ("Expected = 30");
        ("Actual = %d", result);
        if (result == 32'd30)
            ("PASS");
        else
            ("FAIL: Expected 30, Got %d", result");

        #10
        // Add case 2
        ("Test 2 : ADD 0 , 0");
        a = 32'd0;
        b = 32'd0;
        alu_ctrl = 4'b0000
        ("A = 0");
        ("B = 0");
        ("Expected = 0");
        ("Actual = %d", result);
        ("Zero flag = %d", zero)
        if (result == 32'd0)
            ("PASS");
        else
            ("FAIL: Expected 0, Got %d", result")

        #10
        // Sub case 1
        ("Test 3 : Sub 20, 10");
        a = 32'd20;
        b = 32'd10;
        alu_ctrl = 4'b0001
        ("A = 20");
        ("B = 10");
        ("Expected = 10");
        ("Actual = %d", result);
        if (result == 32'd10)
            ("PASS");
        else
            ("FAIL: Expected 10, Got %d", result")

        #10
        // Sub case 2
        ("Test 4 : Sub 5, 10");
        a = 32'd5;
        b = 32'd10;
        alu_ctrl = 4'b0001
        ("A = 5");
        ("B = 10");
        ("Expected = -5");
        ("Actual = %d", result);
        if (result == 32'd-5)
            ("PASS");
        else
            ("FAIL: Expected -5, Got %d", result")

        

        #10
        // AND
        ("Test 5 :AND 0,1");
        a = 32'b0;
        b = 32'd10;
        alu_ctrl = 4'b0001
        ("A = 5");
        ("B = 10");
        ("Expected = -5");
        ("Actual = %d", result);
        if (result == 32'd-5)
            ("PASS");
        else
            ("FAIL: Expected -5, Got %d", result")