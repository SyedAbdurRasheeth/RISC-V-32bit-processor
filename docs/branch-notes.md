# Branch Logic

## Comparator (separate from ALU)
Inputs: rs1_data, rs2_data, funct3
Output: branch_taken (1 bit)

| funct3 | Condition                   |
|--------|-----------------------------|
| 000    | rs1 == rs2                  |
| 001    | rs1 != rs2                  |
| 100    | signed(rs1) < signed(rs2)   |
| 101    | signed(rs1) >= signed(rs2)  |
| 110    | rs1 < rs2 (unsigned)        |
| 111    | rs1 >= rs2 (unsigned)       |

## PC mux
next_pc = (branch && branch_taken) ? (pc + im_out) : (pc + 4)

"branch" here is a control signal meaning "this IS a branch instruction"
(distinct from branch_taken, which is whether the condition evaluated true)
