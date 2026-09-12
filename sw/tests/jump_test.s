.section .text
.global _start

_start:
    lui   x1, 0x12345
    addi  x1, x1, 0x678

    auipc x2, 0

    jal   x10, .+8          # jump to skip, x10 = PC+4
    addi  x20, x0, 999      # SKIPPED
    addi  x21, x0, 42       # landed here

    addi  x3, x0, 100
    jalr  x11, 4(x3)        # jump to x3+4 = 104
    addi  x22, x0, 888