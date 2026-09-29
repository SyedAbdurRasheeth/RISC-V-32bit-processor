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
    # DMEM starts at address 0x1000.
    # Put each ELF section at its correct address inside DMEM.

    dmem = bytearray(size_bytes)

    sections = [
        (".data",   0x1000),
        (".sdata",  0x1014),
        (".rodata", 0x1000),
        (".srodata", 0x1000),
    ]

    for section, default_addr in sections:
        try:
            data = extract_section(elf_path, section)
        except subprocess.CalledProcessError:
            continue

        if len(data) == 0:
            continue

        # Get the section address from objdump/readelf.
        result = subprocess.run(
            [
                "riscv32-unknown-elf-readelf",
                "-S",
                elf_path
            ],
            capture_output=True,
            text=True,
            check=True
        )

        section_addr = None

        for line in result.stdout.splitlines():
            if f"] {section}" in line:
                fields = line.split()

                # Typical format:
                # [ 2] .data PROGBITS 00001000 ...
                for i, field in enumerate(fields):
                    if field == section and i + 2 < len(fields):
                        section_addr = int(fields[i + 2], 16)
                        break

        if section_addr is None:
            section_addr = default_addr

        offset = section_addr - 0x1000

        if offset < 0 or offset >= size_bytes:
            continue

        end = min(offset + len(data), size_bytes)

        dmem[offset:end] = data[:end - offset]

        print(
            f"Loaded {section}: "
            f"address=0x{section_addr:08x}, "
            f"DMEM offset=0x{offset:03x}, "
            f"size={len(data)}"
        )

    with open(hex_path, "w") as out:
        for byte in dmem:
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