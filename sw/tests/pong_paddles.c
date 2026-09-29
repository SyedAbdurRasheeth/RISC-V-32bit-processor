#include "../startup/graphics.h"
#include "../startup/input.h"
#include "../startup/timing.h"

#define PADDLE_HEIGHT 20
#define PADDLE_WIDTH  2
#define PADDLE_SPEED  2

#define LEFT_X  4
#define RIGHT_X 154

void draw_paddle(int x, int y, unsigned char color) {
    for (int dy = 0; dy < PADDLE_HEIGHT; dy++) {
        for (int dx = 0; dx < PADDLE_WIDTH; dx++) {
            draw_pixel(x + dx, y + dy, color);
        }
    }
}

int clamp(int val, int min, int max) {
    if (val < min) return min;
    if (val > max) return max;
    return val;
}

int main() {
    int left_y = 50;
    int right_y = 50;

    clear_screen(COLOR_BLACK);
    draw_paddle(LEFT_X, left_y, COLOR_WHITE);
    draw_paddle(RIGHT_X, right_y, COLOR_WHITE);

    while (1) {
        wait_for_frame();  // gate updates to 60Hz

        int left_old = left_y, right_old = right_y;

        if (button_pressed(BTN_UP))   left_y -= PADDLE_SPEED;
        if (button_pressed(BTN_DOWN)) left_y += PADDLE_SPEED;

        
        if (button_pressed(BTN_LEFT))  right_y -= PADDLE_SPEED;
        if (button_pressed(BTN_RIGHT)) right_y += PADDLE_SPEED;

        left_y  = clamp(left_y, 0, FB_HEIGHT - PADDLE_HEIGHT);
        right_y = clamp(right_y, 0, FB_HEIGHT - PADDLE_HEIGHT);

        if (left_y != left_old) {
            draw_paddle(LEFT_X, left_old, COLOR_BLACK);  
            draw_paddle(LEFT_X, left_y, COLOR_WHITE);      
        }
        if (right_y != right_old) {
            draw_paddle(RIGHT_X, right_old, COLOR_BLACK);
            draw_paddle(RIGHT_X, right_y, COLOR_WHITE);
        }
    }
    return 0;
}