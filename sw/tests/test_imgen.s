addi x1, x0, -5
sw   x2, 8(x1)
beq  x1, x2, .+16
lui  x3, 0x12345
jal  x4, .+32

