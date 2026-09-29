#ifndef TIMING_H
#define TIMING_H

#define FRAME_COUNT_ADDR (*(volatile unsigned int *)0x20000004)

static inline unsigned int get_frame_count(void) {
    return FRAME_COUNT_ADDR;
}

// Blocks until the next new frame begins (i.e. waits for frame_count to change)
static inline void wait_for_frame(void) {
    unsigned int start = get_frame_count();
    while (get_frame_count() == start) {
        // spin
    }
}

#endif
