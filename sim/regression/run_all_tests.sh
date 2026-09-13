#!/bin/bash

RTL_DIR=~/riscv-console/rtl
SW_DIR=~/riscv-console/sw/tests
STARTUP_DIR=~/riscv-console/sw/startup

CORE_FILES="
core/cpu_top.v
core/regfile.v
core/alu.v
core/imgen.v
core/control_unit.v
core/data_mem.v
core/branch_comp.v
"

TESTS=(
    "cpu_top_tb:cpu_top_test1:s"
    "cpu_top_tb2:cpu_top_test2:s"
    "loadstore_tb:loadstore:s"
    "branch_tb:branch_test:s"
    "jump_test_tb:jump_test:s"
    "hello_tb:hello:c"
    "loops_tb:loops:c"
)

echo "=========================================="
echo "       RISC-V REGRESSION TEST"
echo "=========================================="

FAIL=0

for TEST_INFO in "${TESTS[@]}"
do

    TYPE="${TEST_INFO##*:}"
    TEMP="${TEST_INFO%:*}"
    TEST="${TEMP%%:*}"
    SOURCE="${TEMP##*:}"

    echo ""
    echo "=========================================="
    echo "Running $TEST"
    if [ "$TYPE" = "s" ]; then
        echo "Program: $SOURCE.s"
    else
        echo "Program: $SOURCE.c"
    fi
    echo "=========================================="

    # Go to software directory
    cd "$SW_DIR" || exit 1

    if [ "$TYPE" = "s" ]; then
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


    elif [ "$TYPE" = "c" ]; then
        echo "[1] Compiling $SOURCE.c"

        riscv32-unknown-elf-gcc \
            -march=rv32i \
            -mabi=ilp32 \
            -c \
            -O0 \
            -ffreestanding \
            -nostdlib \
            -o "$SOURCE.o" \
            "$SOURCE.c"

        if [ $? -ne 0 ]; then
            echo "[FAIL] C Compilation failed"
            FAIL=1
            continue
        fi

        echo "[2] Assembling startup crt0.s" 

        riscv32-unknown-elf-as \
            -march=rv32i \
            -o crt0.o \
            "$STARTUP_DIR/crt0.s"

        if [ $? -ne 0 ]; then
            echo "[FAIL] Startup assembly failed"
            FAIL=1
            continue
        fi

        echo "[3] Linking C program" 
        
        riscv32-unknown-elf-ld \
            -T "$STARTUP_DIR/link.ld" \
            -o "$SOURCE.elf" \
            crt0.o \
            "$SOURCE.o" 
            
        if [ $? -ne 0 ]; then 
            echo "[FAIL] C linking failed" 
            FAIL=1 
            continue 
        fi

    else 
            
        echo "[FAIL] Unknown test type: $TYPE" 
        FAIL=1 
        continue 
        
    fi
        

    echo "[4] Creating program.hex"

    python3 convert.py "$SOURCE.elf"

    if [ $? -ne 0 ]; then
        echo "[FAIL] HEX conversion failed"
        FAIL=1
        continue
    fi

    cp program.hex "$RTL_DIR/program.hex"
    cp data_init.hex "$RTL_DIR/data_init.hex"

    echo "[5] Building Verilator"

    cd "$RTL_DIR" || exit 1

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
        if [ "$TYPE" = "s" ]; then
            echo "[PASS] $TEST using $SOURCE.s"
        else
            echo "[PASS] $TEST using $SOURCE.c"
        fi
    else
        if [ "$TYPE" = "s" ]; then
            echo "[FAIL] $TEST using $SOURCE.s"
        else
            echo "[FAIL] $TEST using $SOURCE.c"
        
        fi
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