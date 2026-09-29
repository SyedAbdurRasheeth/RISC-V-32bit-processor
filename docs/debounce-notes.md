# Button Debouncing 

Problem: mechanical button contacts bounce for ~1-20ms after a press/release,
producing multiple rapid high/low transitions instead of one clean edge.

Solution: sample the raw button signal repeatedly; only accept a new stable
state after it's held consistently for N consecutive samples (a simple
counter-based debounce). At 100MHz, waiting for ~a few hundred thousand
cycles of consistency comfortably exceeds typical bounce duration
(a few hundred thousand cycles at 100MHz = a few milliseconds).
