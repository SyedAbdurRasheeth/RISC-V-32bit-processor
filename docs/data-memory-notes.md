- Byte-addressable, but implemented as an array of bytes for simplicity
  (allows clean byte/halfword/word access without complex muxing)
- Combinational read (single-cycle datapath, no clock delay on reads)
- Synchronous write (on clock edge)
- funct3 determines access size:
  000 = byte, 001 = halfword, 010 = word (loads use 100/101 for unsigned byte/half)

## Sign/zero extension truth table
| funct3 | Load type | Extension               |
|--------|-----------|-------------------------|
| 000    | LB        | sign-extend from bit 7  |
| 001    | LH        | sign-extend from bit 15 |
| 010    | LW        | no extension needed     |
| 100    | LBU       | zero-extend             |
| 101    | LHU       | zero-extend             |

| funct3 | Instruction |    Size | Data        |
| ------ | ----------- | ------- | ----------- |
| 000    | SB          | 1 byte | rs2[7:0]  |
| 001    | SH          | 2 bytes | rs2[15:0] |
| 010    | SW          | 4 bytes | rs2[31:0] |

