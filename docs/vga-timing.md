# VGA Timing — 640x480 @ 60Hz

## Horizontal (pixel clocks)
| Region        | Range        | Count |
|---------------|--------------|-------|
| Visible       | 0-639        | 640   |
| Front porch   | 640-655      | 16    |
| Sync pulse    | 656-751      | 96    |
| Back porch    | 752-799      | 48    |
| Total         | 0-799        | 800   |

## Vertical (lines)
| Region        | Range        | Count |
|---------------|--------------|-------|
| Visible       | 0-479        | 480   |
| Front porch   | 480-489      | 10    |
| Sync pulse    | 490-491      | 2     |
| Back porch    | 492-524      | 33    |
| Total         | 0-524        | 525   |

Pixel clock: 25.175 MHz (25MHz close enough in practice)
HSYNC/VSYNC: active LOW during their respective sync pulse windows
Visible/active region: h_count < 640 AND v_count < 480
