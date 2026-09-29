#ifndef INPUT_H
#define INPUT_H

#define BUTTON_ADDR (*(volatile unsigned int *)0x20000000)

#define BTN_UP    (1 << 0)
#define BTN_DOWN  (1 << 1)
#define BTN_LEFT  (1 << 2)
#define BTN_RIGHT (1 << 3)

static inline unsigned int read_buttons(void) {
    return BUTTON_ADDR;
}

static inline int button_pressed(unsigned int mask) {
    return (read_buttons() & mask) != 0;
}

#endif
