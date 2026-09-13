#!/usr/bin/env python3
import sys
import subprocess

def section_to_hex(elf_path, section, hex_path, size_bytes):
    bin_path = elf_path + f".{section}.bin"

    subprocess.run([
        "riscv32-unknown-elf-objcopy",
        "-O", "binary",
        f"--only-section={section}",
        elf_path,
        bin_path
    ], check=True)

    try:
        with open(bin_path, "rb") as f:
            data = f.read()
    except FileNotFoundError:
        data = b""

    # Pad to full memory size
    if len(data) < size_bytes:
        data += b'\x00' * (size_bytes - len(data))

    data = data[:size_bytes]

    with open(hex_path, "w") as out:
        for i in range(0, len(data), 4):
            word = data[i:i+4]
            val = int.from_bytes(word, byteorder="little")
            out.write(f"{val:08x}\n")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python3 convert.py <program.elf>")
        sys.exit(1)

    elf_path = sys.argv[1]

    section_to_hex(elf_path, ".text", "program.hex", 4096)
    section_to_hex(elf_path, ".data", "data_init.hex", 4096)

    print("Created program.hex")
    print("Created data_init.hex")