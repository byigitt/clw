#include <stdio.h>

int numberOfDigits(int num) {
    int count = 0;
    
    // Handle case when number is 0
    if (num == 0) {
        return 1;
    }
    
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    
    // Count digits
    while (num > 0) {
        count++;
        num /= 10;
    }
    
    return count;
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    printf("Number of digits: %d\n", numberOfDigits(number));
    
    return 0;
} 