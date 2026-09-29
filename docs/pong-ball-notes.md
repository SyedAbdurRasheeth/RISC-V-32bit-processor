# Pong Ball

## State
- ball_x, ball_y: current position (top-left of a small square, e.g. 2x2 px)
- ball_dx, ball_dy: velocity, either +1 or -1 pixel per game tick (simple,
  constant speed - no acceleration needed for a first working version)

## Wall bounce logic
- If ball_y <= 0: ball_dy = +1 (bounce off top wall)
- If ball_y >= FB_HEIGHT - BALL_SIZE: ball_dy = -1 (bounce off bottom wall)
- Left/right walls: for today, just bounce off them too (real "miss = score"
  logic comes Day 23 alongside paddle collision)

## Update sequence per frame
1. erase ball at old position
2. update ball_x += ball_dx, ball_y += ball_dy
3. check wall bounce conditions, flip dx/dy if needed
4. draw ball at new position
