volatile int *LED_OUT = (volatile int *)0xE0000000;

int add(int a, int b) { return a + b; }

int main() {
    int result = add(7, 5);   
    *LED_OUT = result;
    while (1);                  
    return 0;
}