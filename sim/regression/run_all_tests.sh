#!/bin/bash

RTL_DIR=~/riscv-console/rtl
SW_DIR=~/riscv-console/sw/tests

CORE_FILES="
core/cpu_top.v
core/regfile.v
core/alu.v
core/imgen.v
core/control_unit.v
core/data_mem.v
"

TESTS=(
    "cpu_top_tb:cpu_top_test1"
    "cpu_top_tb2:cpu_top_test2"
    "loadstore_tb:loadstore"
)

echo "=========================================="
echo "       RISC-V REGRESSION TEST"
echo "=========================================="

FAIL=0

for TEST_INFO in "${TESTS[@]}"
do

    TEST="${TEST_INFO%%:*}"
    SOURCE="${TEST_INFO##*:}"

    echo ""
    echo "=========================================="
    echo "Running $TEST"
    echo "Program: $SOURCE.s"
    echo "=========================================="

    # Go to software directory
    cd "$SW_DIR" || exit 1

    echo "[1] Assembling $SOURCE.s"

    riscv32-unknown-elf-as \
        -march=rv32i \
        -o "$SOURCE.o" \
        "$SOURCE.s"

    if [ $? -ne 0 ]; then
        echo "[FAIL] Assembly failed"
        FAIL=1
        continue
    fi

    echo "[2] Linking"

    riscv32-unknown-elf-ld \
        -Ttext=0x0 \
        -o "$SOURCE.elf" \
        "$SOURCE.o"

    if [ $? -ne 0 ]; then
        echo "[FAIL] Linking failed"
        FAIL=1
        continue
    fi

    echo "[3] Creating binary"

    riscv32-unknown-elf-objcopy \
        -O binary \
        "$SOURCE.elf" \
        "$SOURCE.bin"

    if [ $? -ne 0 ]; then
        echo "[FAIL] objcopy failed"
        FAIL=1
        continue
    fi

    echo "[4] Creating program.hex"

    python3 convert.py \
        "$SOURCE.bin" \
        "$RTL_DIR/program.hex"

    if [ $? -ne 0 ]; then
        echo "[FAIL] HEX conversion failed"
        FAIL=1
        continue
    fi

    cd "$RTL_DIR" || exit 1

    echo "[5] Building Verilator"

    BUILD_NAME="${TEST}_${SOURCE}"

    rm -rf "obj_dir_$BUILD_NAME"

    verilator --binary --timing \
        --top-module "$TEST" \
        $CORE_FILES \
        "tb/$TEST.v" \
        -Icore \
        -DPROGRAM_FILE=\"$RTL_DIR/program.hex\" \
        --Mdir "obj_dir_$BUILD_NAME"

    if [ $? -ne 0 ]; then
        echo "[FAIL] Verilator build failed"
        FAIL=1
        continue
    fi

    echo "[6] Running"

    if "./obj_dir_$BUILD_NAME/V$TEST"; then
        echo "[PASS] $TEST using $SOURCE.s"
    else
        echo "[FAIL] $TEST using $SOURCE.s"
        FAIL=1
    fi

done

echo ""
echo "=========================================="

if [ $FAIL -eq 0 ]; then
    echo "ALL REGRESSION TESTS PASSED"
    echo "=========================================="
    exit 0
else
    echo "REGRESSION FAILED"
    echo "=========================================="
    exit 1
fi
