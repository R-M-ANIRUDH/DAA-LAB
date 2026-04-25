#include <stdio.h>

int fib(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;

    
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 0) {
        printf("Invalid n\n");
    } else {
        printf("Fibonacci term is: %d\n", fib(n));
    }

    return 0;
}
