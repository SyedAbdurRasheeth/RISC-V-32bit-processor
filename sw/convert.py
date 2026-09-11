
import sys

# Default values
input_file = "cpu_top_test1.bin"
output_file = "program.hex"

# Override defaults if arguments are provided
if len(sys.argv) >= 2:
    input_file = sys.argv[1]

if len(sys.argv) >= 3:
    output_file = sys.argv[2]

data = open(input_file, 'rb').read()

with open(output_file, 'w') as f:
    for i in range(0, len(data), 4):
        word = int.from_bytes(data[i:i+4], byteorder="little")
        f.write(f"{word:08x}\n")
