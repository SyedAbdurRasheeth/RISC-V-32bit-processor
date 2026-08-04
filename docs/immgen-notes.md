# Immediate Generator

Input: full 32-bit instruction
Output: 32-bit sign-extended immediate

Decision is based on opcode (instr[6:0]).

I-type:  {20{instr[31]}, instr[31:20]}
S-type:  {20{instr[31]}, instr[31:25], instr[11:7]}
B-type:  {20{instr[31]}, instr[7], instr[30:25], instr[11:8], 1'b0}
U-type:  {instr[31:12], 12'b0}
J-type:  {12{instr[31]}, instr[19:12], instr[20], instr[30:21], 1'b0}



Format	        Opcode(s)	                    Immediate bits in instruction	                Notes

I-type	        0010011 (ALU imm),	              instr[31:20]	                               Simple contiguous 12 bits
               0000011 (loads), 1100111 (JALR)

S-type	        0100011 (stores)	              instr[31:25] + instr[11:7]	               Split because rs2 sits in the middle


B-type	        1100011 (branches)	            instr[31], instr[7], instr[30:25],             Scrambled, represents an always-even offset (bit 0 is implicitly 0)
                                                    instr[11:8]


U-type	        0110111 (LUI), 0010111 (AUIPC)	    instr[31:12]	                           Occupies upper 20 bits, lower 12 bits are zero


J-type	        1101111 (JAL)	                    instr[31], instr[19:12],	               Scrambled, also always-even offset
                                                    instr[20], instr[30:21]
