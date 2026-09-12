.section .text
.global _start

_start:

    addi x1, x0, 5
    addi x2, x0, 5
    addi x3, x0, 10

    beq  x1, x2, .+8       # taken (5==5), skip next instruction
    addi x10, x0, 999       # SKIPPED
    addi x10, x0, 1         # x10 = 1

    bne  x1, x3, .+8        # taken (5!=10), skip next
    addi x11, x0, 999       # SKIPPED
    addi x11, x0, 2         # x11 = 2

    blt  x1, x3, .+8        # taken (5<10), skip next
    addi x12, x0, 999       # SKIPPED
    addi x12, x0, 3         # x12 = 3

    bge  x3, x1, .+8        # taken (10>=5), skip next
    addi x13, x0, 999       # SKIPPED
    addi x13, x0, 4         # x13 = 4

    beq  x1, x3, .+8        # NOT taken (5!=10)
    addi x14, x0, 5         # x14 = 5