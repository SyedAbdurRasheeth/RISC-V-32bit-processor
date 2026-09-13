ENTRY(_start)

MEMORY
{
    IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K
    DMEM (rw)  : ORIGIN = 0x00001000, LENGTH = 4K
}

SECTIONS
{
    .text : {
        *(.text.start)   /* our startup code goes first, always */
        *(.text)
        *(.text.*)
    } > IMEM

    .data : {
        *(.data)
        *(.data.*)
        *(.rodata)
        *(.rodata.*)
    } > DMEM

    .bss : {
        __bss_start = .;
        *(.bss)
        *(.bss.*)
        *(.sbss)
        *(.sbss.*)
        __bss_end = .;
    } > DMEM

    __stack_top = ORIGIN(DMEM) + LENGTH(DMEM);
}
