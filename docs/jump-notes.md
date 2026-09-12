# Jump / Upper-Immediate Logic

## New writeback source
rd_wdata now has 3 possible sources:
- ALU result (R-type, I-type, LUI, AUIPC) - 00
- Memory read data (loads) - 01 
- PC + 4 (JAL, JALR) -- the "link" value - 10

## New PC sources
next_pc now has 3 possible sources:
- pc + 4 (default, sequential)
- pc + imm (branch taken)
- JAL: pc + imm (jump, direct)
- JALR: (rs1 + imm) & ~1 (jump, indirect, bit 0 cleared)

## LUI / AUIPC reuse the ALU
LUI:   rd = 0 + imm         -> ALU does ADD with a=0, b=imm
AUIPC: rd = pc + imm         -> ALU does ADD with a=pc, b=imm
This means LUI/AUIPC need a new ALU input A source: either rs1_data (normal)
or pc (for AUIPC) or 0 (for LUI). We'll add an alu_a_src-style mux.

00=rs1_data, 01=PC (AUIPC), 10=zero (LUI)