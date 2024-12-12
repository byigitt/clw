#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;
    
    printf("Enter two positive integers (start end): ");
    scanf("%d %d", &start, &end);
    
    // Input validation
    if (start <= 0 || end <= 0 || start > end) {
        printf("Please enter valid positive integers where start <= end.\n");
        return 1;
    }
    
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
} 