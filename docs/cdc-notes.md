# Clock Domain Crossing

CPU domain: 100MHz (writes to framebuffer)
VGA domain: 25MHz (reads from framebuffer)

Since both the clocks are on different frequency we need to make the framebuffer 
suitable for different clocks 100Mhz during writing and 25Mhz during read.
Dual port memory is enough for this specific framebuffer pattern no additional
synchroonizer logic is needed.

This WOULD need proper synchronization if we were:
- passing a multi-bit control signal that must change atomically
- signaling a single-cycle event/flag across domains
- doing very high-frequency writes with no idle time between them
None of these apply to simple pixel writes here.
