#include "../startup/graphics.h"
#include "../startup/input.h"

int main() {
    int x = 80, y = 60;

    draw_pixel(x, y, COLOR_WHITE);

    int previous_buttons = 0;

    while (1) {
        int current_buttons = read_buttons();

        int moved = 0;
        int old_x = x;
        int old_y = y;

        if ((current_buttons & BTN_UP) &&
            !(previous_buttons & BTN_UP)) {
            y--;
            moved = 1;
        }

        if ((current_buttons & BTN_DOWN) &&
            !(previous_buttons & BTN_DOWN)) {
            y++;
            moved = 1;
        }

        if ((current_buttons & BTN_LEFT) &&
            !(previous_buttons & BTN_LEFT)) {
            x--;
            moved = 1;
        }

        if ((current_buttons & BTN_RIGHT) &&
            !(previous_buttons & BTN_RIGHT)) {
            x++;
            moved = 1;
        }

        if (moved) {
            draw_pixel(old_x, old_y, COLOR_BLACK);
            draw_pixel(x, y, COLOR_WHITE);
        }

        previous_buttons = current_buttons;
    }

    return 0;
}
