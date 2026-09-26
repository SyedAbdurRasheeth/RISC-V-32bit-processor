#include "../startup/graphics.h"

int main() {
    clear_screen(COLOR_BLACK);

    
    for (int i = 0; i < 120; i++) {
        draw_pixel(i, i, COLOR_RED);
    }


    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            draw_pixel(x, y, COLOR_GREEN);
        }
    }

    while (1);
    return 0;
}