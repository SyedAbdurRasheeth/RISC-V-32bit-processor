#include "../startup/graphics.h"
#include "../startup/timing.h"
#include "../startup/debug_io.h"

#define BALL_SIZE 2

volatile int ball_x = 80;
volatile int ball_y = 5;   // start close to top wall to trigger bounce quickly
volatile int ball_dx = 1;
volatile int ball_dy = -1;  // moving toward top wall immediately

void draw_ball(int x, int y, unsigned char color) {
    for (int dy = 0; dy < BALL_SIZE; dy++)
        for (int dx = 0; dx < BALL_SIZE; dx++)
            draw_pixel(x + dx, y + dy, color);
}

int main() {
    clear_screen(COLOR_BLACK);
    draw_ball(ball_x, ball_y, COLOR_WHITE);

    for (int frame = 0; frame < 10; frame++) {
        wait_for_frame();

        int old_x = ball_x, old_y = ball_y;
        ball_x += ball_dx;
        ball_y += ball_dy;

        if (ball_y <= 0) { ball_y = 0; ball_dy = -ball_dy; }
        if (ball_y >= FB_HEIGHT - BALL_SIZE) { ball_y = FB_HEIGHT - BALL_SIZE; ball_dy = -ball_dy; }
        if (ball_x <= 0) { ball_x = 0; ball_dx = -ball_dx; }
        if (ball_x >= FB_WIDTH - BALL_SIZE) { ball_x = FB_WIDTH - BALL_SIZE; ball_dx = -ball_dx; }

        draw_ball(old_x, old_y, COLOR_BLACK);
        draw_ball(ball_x, ball_y, COLOR_WHITE);

        debug_puts("y=");
        debug_put_int(ball_y);
        debug_puts(" dy=");
        debug_put_int(ball_dy);
        debug_putc('\n');
    }

    debug_puts("DONE\n");
    while (1);
    return 0;
}