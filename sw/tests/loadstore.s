.section .text
.globl _start

_start:
    addi x1, x0, 100      # x1 = 100 (base address)
    addi x2, x0, -5       # x2 = -5 (value to store)
    addi x3, x0, 200      # x3 = 200

    sw   x2, 0(x1)         # mem[100..103] = -5 (word)
    sb   x3, 4(x1)         # mem[104] = 200 & 0xFF = 200 (byte)
    sh   x3, 8(x1)         # mem[108..109] = 200 (halfword)

    lw   x10, 0(x1)        # x10 = -5 (word load)
    lb   x11, 4(x1)        # x11 = sign-extended byte at 104
    lbu  x12, 4(x1)        # x12 = zero-extended byte at 104
    lh   x13, 8(x1)        # x13 = sign-extended halfword at 108
    lhu  x14, 8(x1)        # x14 = zero-extended halfword at 108
