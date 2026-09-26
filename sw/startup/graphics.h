#ifndef GRAPHICS_H
#define GRAPHICS_H

#define FB_BASE 0x10000000
#define FB_WIDTH 160
#define FB_HEIGHT 120

static inline void draw_pixel(int x, int y, unsigned char color) {
    if (x < 0 || x >= FB_WIDTH || y < 0 || y >= FB_HEIGHT) return;
    volatile unsigned char *addr = (volatile unsigned char *)(FB_BASE + y * FB_WIDTH + x);
    *addr = color;
}

static inline void clear_screen(unsigned char color) {
    for (int y = 0; y < FB_HEIGHT; y++) {
        for (int x = 0; x < FB_WIDTH; x++) {
            draw_pixel(x, y, color);
        }
    }
}

// Common colors (RRRGGGBB format)
#define COLOR_BLACK 0x00
#define COLOR_RED   0xE0
#define COLOR_GREEN 0x1C
#define COLOR_BLUE  0x03
#define COLOR_WHITE 0xFF
#define COLOR_YELLOW 0xFC

#endif
