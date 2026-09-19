#ifndef DEBUG_IO_H
#define DEBUG_IO_H

#define DEBUG_OUT (*(volatile char *)0xF0000000)

static inline void debug_putc(char c) {
    DEBUG_OUT = c;
}

static inline void debug_puts(const char *s) {
    while (*s) {
        debug_putc(*s);
        s++;
    }
}

// Minimal integer printer (no full printf - keeps things simple on bare metal)
static inline void debug_put_int(int val) {
    if (val < 0) {
        debug_putc('-');
        val = -val;
    }
    if (val >= 10) {
        debug_put_int(val / 10);
    }
    debug_putc('0' + (val % 10));
}

#endif
