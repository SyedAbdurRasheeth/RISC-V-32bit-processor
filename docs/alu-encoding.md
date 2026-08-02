# ALU Control Encoding

| alu_ctrl | Operation | Meaning                         |
|----------|-----------|---------------------------------|
| 0000     | ADD       | a + b                           |
| 0001     | SUB       | a - b                           |
| 0010     | AND       | a & b                           |
| 0011     | OR        | a | b                           |
| 0100     | XOR       | a ^ b                           |
| 0101     | SLL       | a << b[4:0]                     |
| 0110     | SRL       | a >> b[4:0] (logical)           |
| 0111     | SRA       | a >>> b[4:0] (arithmetic, sign-preserving) |
| 1000     | SLT       | (signed a < signed b) ? 1 : 0   |
| 1001     | SLTU      | (unsigned a < unsigned b) ? 1 : 0 |
