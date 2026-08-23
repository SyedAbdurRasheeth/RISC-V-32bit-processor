#!/bin/bash

RTL_DIR=~/riscv-console/rtl

CORE_FILES="
core/cpu_top.v
core/regfile.v
core/alu.v
core/imgen.v
core/control_unit.v
"

TESTS=(
    "cpu_top_tb:program.hex"
    "cpu_top_tb2:program2.hex"
)

echo "=========================================="
echo "       RISC-V REGRESSION TEST"
echo "=========================================="

FAIL=0

for TEST_INFO in "${TESTS[@]}"
do

    TEST="${TEST_INFO%%:*}"
    PROGRAM="${TEST_INFO##*:}"

    BUILD_NAME="${TEST}_${PROGRAM%.hex}"

    echo ""
    echo "=========================================="
    echo "Running $TEST"
    echo "Program: $PROGRAM"
    echo "=========================================="

    cd "$RTL_DIR"

    verilator --binary --timing \
    --top-module "$TEST" \
    $CORE_FILES \
    "tb/$TEST.v" \
    -Icore \
    -DPROGRAM_FILE=\"$RTL_DIR/$PROGRAM\" \
    --Mdir "obj_dir_$BUILD_NAME"

    if "./obj_dir_$BUILD_NAME/V$TEST"; then
        echo "[PASS] $TEST using $PROGRAM"
    else
        echo "[FAIL] $TEST using $PROGRAM"
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