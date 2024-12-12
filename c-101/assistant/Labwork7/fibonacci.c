#include <stdio.h>

int main() {
    int terms = 20;
    long long fib[20]; // Using long long to handle larger Fibonacci numbers
    
    // Initialize first two terms
    fib[0] = 1;
    fib[1] = 1;
    
    // Generate Fibonacci sequence
    for (int i = 2; i < terms; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    printf("First %d numbers of Fibonacci sequence:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%lld", fib[i]);
        if (i < terms - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
} 