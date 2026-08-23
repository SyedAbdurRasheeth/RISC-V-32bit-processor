data = open('cpu_top_test2.bin', 'rb').read()

with open("program.hex", "w") as f:
    for i in range(0, len(data), 4):
        word = int.from_bytes(data[i:i+4], byteorder="little")
        f.write(f"{word:08x}\n")