volatile int result;

int add(int a, int b) {
    return a + b;
}

int main() {
    result = add(7, 5);   // expect result = 12
    return 0;
}
