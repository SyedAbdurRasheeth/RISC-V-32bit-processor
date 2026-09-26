# Framebuffer Design 

Logical resolution: 160 x 120 (each logical pixel = 4x4 real screen pixels)
Total pixels: 19,200
Color format: 8-bit per pixel (RRRGGGBB - 3 bits red, 3 bits green, 2 bits blue)
Memory size: 19,200 bytes ≈ 18.75KB

## Dual-port access
Port A (write): CPU writes pixel color, indexed by (x,y) -> address = y*160+x
Port B (read):  VGA controller reads pixel color continuously, indexed by
                 (pixel_x/4, pixel_y/4) -> converts real screen coords to
                 logical framebuffer coords by dividing by 4 (i.e. >>2)

## Color expansion (8-bit palette -> 4-bit VGA channels)
r[2:0] -> vga_r[3:1], vga_r[0]=r[0]  
g[2:0] -> vga_g[3:1], vga_g[0]=g[0]
b[1:0] -> vga_b[3:2], vga_b[1:0]=b[0]

Replicating the top bit in order to color expand for 4 bit vga

