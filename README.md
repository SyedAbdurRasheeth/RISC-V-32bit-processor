# RISC-V VGA Game Console

Custom RV32I single-cycle CPU running on FPGA, driving VGA output,
reading button input, to run simple games (Pong, Snake) natively.

## Structure
- rtl/core   - CPU RTL modules
- rtl/vga    - VGA controller RTL
- rtl/tb     - Verilator testbenches
- sw/tests   - hand-written assembly test programs
- sw/startup - linker script + startup code for C
- docs       - notes, ISA reference, memory map, VGA timing notes
- fpga       - Vivado project files, constraints
