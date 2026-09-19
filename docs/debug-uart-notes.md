# Debug Output (fake UART)

Address 0xF0000000 (any bit outside real memory range) is reserved
as a "write here to print a character" register.

C usage:
    volatile char *DEBUG_OUT = (volatile char *)0xF0000000;
    *DEBUG_OUT = 'H';  // prints 'H' to the simulation console

Hardware: cpu_top exposes a new output port `debug_char` + `debug_char_valid`,
driven whenever mem_write fires with addr == 0xF0000000. The Verilator
testbench watches these ports every cycle and prints characters as they
appear, building up a line until a newline is seen.
