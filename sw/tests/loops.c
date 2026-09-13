volatile int sum_result = 0;
volatile int array_result = 0;
volatile int factorial_result = 0;

int multiply(int a, int b) {
    int result = 0;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    return result;
}

int array_sum(int *arr, int len) {
    int total = 0;

    for (int i = 0; i < len; i++) {
        total += arr[i];
    }

    return total;
}

int factorial(int n) {
    if (n <= 1)
        return 1;

    return multiply(n, factorial(n - 1));
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    sum_result = array_sum(numbers, 5);
    array_result = numbers[2];
    factorial_result = factorial(5);

    return 0;
}