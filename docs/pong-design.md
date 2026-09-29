# Pong Design

Screen: 160 x 120 (logical framebuffer resolution)

## Paddles
- Left paddle: x = 4 (fixed), height = 20, width = 2
- Right paddle: x = 154 (fixed), height = 20, width = 2
- Both paddles move vertically only, controlled by buttons
- Left paddle: btnU/btnD (player 1)
- Right paddle: for now, also btnL/btnR repurposed as up/down for player 2
  testing on one board (later: could add a second controller, or simple AI)

## Movement speed
- Paddle moves 2 pixels per game "tick" while held
- Need a controlled game tick rate, NOT every CPU cycle (way too fast) and
  NOT every main-loop iteration without gating (also too fast/erratic) -
  need to derive a fixed-rate tick from vsync or a counter