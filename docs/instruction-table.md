# RV32I Instruction Reference — Groups 1 & 2

## R-type (opcode = 0110011)
| Instr | funct3 | funct7    | Operation           |
|-------|--------|-----------|---------------------|
| ADD   | 000    | 0000000   | rd = rs1 + rs2      |
| SUB   | 000    | 0100000   | rd = rs1 - rs2      |
| SLL   | 001    | 0000000   | rd = rs1 << rs2[4:0]|
| SLT   | 010    | 0000000   | rd = (rs1 < rs2) signed ? 1 : 0 |
| SLTU  | 011    | 0000000   | rd = (rs1 < rs2) unsigned ? 1 : 0 |
| XOR   | 100    | 0000000   | rd = rs1 ^ rs2      |
| SRL   | 101    | 0000000   | rd = rs1 >> rs2[4:0] (logical) |
| SRA   | 101    | 0100000   | rd = rs1 >>> rs2[4:0] (arithmetic) |
| OR    | 110    | 0000000   | rd = rs1 \| rs2      |
| AND   | 111    | 0000000   | rd = rs1 & rs2      |

## I-type ALU (opcode = 0010011)
| Instr | funct3 | Operation                  |
|-------|--------|-----------------------------|
| ADDI  | 000    | rd = rs1 + imm             |
| SLTI  | 010    | rd = (rs1 < imm) signed ? 1 : 0 |
| SLTIU | 011    | rd = (rs1 < imm) unsigned ? 1 : 0 |
| XORI  | 100    | rd = rs1 ^ imm             |
| ORI   | 110    | rd = rs1 \| imm             |
| ANDI  | 111    | rd = rs1 & imm             |
| SLLI  | 001    | rd = rs1 << imm[4:0]       |
| SRLI  | 101    | rd = rs1 >> imm[4:0] (imm[30]=0) |
| SRAI  | 101    | rd = rs1 >>> imm[4:0] (imm[30]=1) |
