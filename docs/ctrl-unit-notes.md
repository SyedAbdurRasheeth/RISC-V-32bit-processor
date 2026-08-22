# Control Unit logic for R-type and I type

## Opcodes

R-type (opcode = 0110011)
I-type (opcode = 0010011)

## Control signals oer group

If the input is register alu_src = 0
and if the input is immediate alu_src = 1

| Group        | reg_write | alu_src     |
|--------------|-----------|-------------|
| R-type ALU   | 1         | 0 (use rs2) |
| I-type ALU   | 1         | 1 (use imm) |

## alu ctrl to find out the the exact operation using funct3 or funct7

| funct3 | funct7[5] (R-type) or imm[10] (I-type shifts) | Operation | alu_ctrl |
|--------|-----------------------------------------------|-----------|----------|
| 000    | 0 (R-type only, ADD)                          | ADD/ADDI  | 0000     |
| 000    | 1 (R-type only, SUB)                          | SUB       | 0001     |
| 111    | x                                             | AND/ANDI  | 0010     |
| 110    | x                                             | OR/ORI    | 0011     |
| 100    | x                                             | XOR/XORI  | 0100     |
| 001    | x                                             | SLL/SLLI  | 0101     |
| 101    | 0                                             | SRL/SRLI  | 0110     |
| 101    | 1                                             | SRA/SRAI  | 0111     |
| 010    | x                                             | SLT/SLTI  | 1000     |
| 011    | x                                             | SLTU/SLTIU| 1001     |