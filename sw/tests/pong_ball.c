#include "../startup/graphics.h"
#include "../startup/timing.h"

#define BALL_SIZE 2

void draw_ball(int x, int y, unsigned char color) {
    for (int dy = 0; dy < BALL_SIZE; dy++) {
        for (int dx = 0; dx < BALL_SIZE; dx++) {
            draw_pixel(x + dx, y + dy, color);
        }
    }
}

int main() {
    int ball_x = 80, ball_y = 60;
    int ball_dx = 1, ball_dy = 1;

    clear_screen(COLOR_BLACK);
    draw_ball(ball_x, ball_y, COLOR_WHITE);

    while (1) {
        wait_for_frame();

        int old_x = ball_x, old_y = ball_y;

        ball_x += ball_dx;
        ball_y += ball_dy;

        // Wall bounce - top/bottom
        if (ball_y <= 0) {
            ball_y = 0;
            ball_dy = -ball_dy;
        }
        if (ball_y >= FB_HEIGHT - BALL_SIZE) {
            ball_y = FB_HEIGHT - BALL_SIZE;
            ball_dy = -ball_dy;
        }

        // Wall bounce - left/right (temporary, until Day 23 scoring)
        if (ball_x <= 0) {
            ball_x = 0;
            ball_dx = -ball_dx;
        }
        if (ball_x >= FB_WIDTH - BALL_SIZE) {
            ball_x = FB_WIDTH - BALL_SIZE;
            ball_dx = -ball_dx;
        }

        draw_ball(old_x, old_y, COLOR_BLACK);
        draw_ball(ball_x, ball_y, COLOR_WHITE);
    }
    return 0;
}