# RV32I Instruction Formats

## R-type (register-register)
31        25 24   20 19   15 14  12 11    7 6      0
| funct7    | rs2   | rs1   | funct3| rd    | opcode |

## I-type (immediate, loads, JALR)
31              20 19   15 14  12 11    7 6      0
| imm[11:0]        | rs1   | funct3| rd    | opcode |

## S-type (stores)
31        25 24   20 19   15 14  12 11    7 6      0
| imm[11:5] | rs2   | rs1   | funct3| imm[4:0]| opcode |

## B-type (branches) - imm bits scrambled, represents even offset
31   25 24  20 19  15 14  12 11    7 6      0
|imm[12,10:5]|rs2 |rs1  |funct3|imm[4:1,11]|opcode|

## U-type (LUI, AUIPC)
31                    12 11    7 6      0
| imm[31:12]             | rd    | opcode |

## J-type (JAL) - imm bits scrambled
31                        12 11    7 6      0
| imm[20,10:1,11,19:12]     | rd    | opcode |
