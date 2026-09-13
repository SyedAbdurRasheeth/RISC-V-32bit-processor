# Memory Layout

## Instruction memory (imem) - 4KB, addresses 0x000-0xFFC
- Compiled program code lives here (.text section)
- Loaded via $readmemh from program.hex

## Data memory (data_mem) - 4KB, addresses 0x000-0xFFF
- Global/static variables (.data, .bss sections)
- Stack grows DOWN from the top of this region
- Stack pointer (sp / x2) initialized to top of data memory (0xFFC, word-aligned)

## Stack direction reminder
RISC-V grows the stack DOWNWARD - each push DECREASES sp.
