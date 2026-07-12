#include "Vregfile.h"
#include "verilated.h"
#include <iostream>

void tick(Vregfile* dut) {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vregfile* dut = new Vregfile;

    int pass = 1;

    // Test 1: write x5 = 42, read it back
    dut->rd_addr = 5; dut->rd_wdata = 42; dut->rd_we = 1;
    tick(dut);
    dut->rd_we = 0;
    dut->rs1_addr = 5;
    dut->eval();
    std::cout << "Test 1 - x5 = " << (int)dut->rs1_rdata << " (expect 42): ";
    if (dut->rs1_rdata == 42) std::cout << "PASS\n"; else { std::cout << "FAIL\n"; pass = 0; }

    // Test 2: write to x0 should have no effect
    dut->rd_addr = 0; dut->rd_wdata = 999; dut->rd_we = 1;
    tick(dut);
    dut->rd_we = 0;
    dut->rs1_addr = 0;
    dut->eval();
    std::cout << "Test 2 - x0 = " << (int)dut->rs1_rdata << " (expect 0): ";
    if (dut->rs1_rdata == 0) std::cout << "PASS\n"; else { std::cout << "FAIL\n"; pass = 0; }

    // Test 3: simultaneous dual-port read
    dut->rd_addr = 10; dut->rd_wdata = 100; dut->rd_we = 1;
    tick(dut);
    dut->rd_addr = 11; dut->rd_wdata = 200; dut->rd_we = 1;
    tick(dut);
    dut->rd_we = 0;
    dut->rs1_addr = 10; dut->rs2_addr = 11;
    dut->eval();
    std::cout << "Test 3 - x10=" << (int)dut->rs1_rdata << " x11=" << (int)dut->rs2_rdata
               << " (expect 100, 200): ";
    if (dut->rs1_rdata == 100 && dut->rs2_rdata == 200) std::cout << "PASS\n";
    else { std::cout << "FAIL\n"; pass = 0; }

    std::cout << (pass ? "\nALL TESTS PASSED\n" : "\nSOME TESTS FAILED\n");

    delete dut;
    return pass ? 0 : 1;
}
