.section .text.start
.global _start

_start:
    # Initialize stack pointer to top of data memory
    la   sp, __stack_top

    # Zero out the .bss section (uninitialized globals must start at 0)
    la   t0, __bss_start
    la   t1, __bss_end
bss_zero_loop:
    bge  t0, t1, bss_zero_done
    sw   zero, 0(t0)
    addi t0, t0, 4
    j    bss_zero_loop
bss_zero_done:

    # Jump to main
    call main

    # If main ever returns, loop forever (no OS to return to)
halt:
    j halt
