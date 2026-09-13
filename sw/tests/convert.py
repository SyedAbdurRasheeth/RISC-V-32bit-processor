import sys
import subprocess


def extract_section(elf_path, section):
    bin_path = elf_path + f".{section}.bin"

    subprocess.run([
        "riscv32-unknown-elf-objcopy",
        "-O", "binary",
        f"--only-section={section}",
        elf_path,
        bin_path
    ], check=True)

    with open(bin_path, "rb") as f:
        return f.read()


def text_to_hex(elf_path, hex_path, size_bytes):
    data = extract_section(elf_path, ".text")

    data = data[:size_bytes]

    if len(data) < size_bytes:
        data += b'\x00' * (size_bytes - len(data))

    with open(hex_path, "w") as out:
        for i in range(0, len(data), 4):
            word = data[i:i+4]
            value = int.from_bytes(word, byteorder="little")
            out.write(f"{value:08x}\n")


def data_to_hex(elf_path, hex_path, size_bytes):
    data = extract_section(elf_path, ".data")

    data = data[:size_bytes]

    if len(data) < size_bytes:
        data += b'\x00' * (size_bytes - len(data))

    with open(hex_path, "w") as out:
        for byte in data:
            out.write(f"{byte:02x}\n")


if __name__ == "__main__":

    if len(sys.argv) != 2:
        print("Usage: python3 convert.py <program.elf>")
        sys.exit(1)

    elf_path = sys.argv[1]

    text_to_hex(
        elf_path,
        "program.hex",
        4096
    )

    data_to_hex(
        elf_path,
        "data_init.hex",
        4096
    )

    print("Created program.hex")
    print("Created data_init.hex")