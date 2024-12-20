#include <stdio.h>

int first(int num) {
    return num / 100;  // Returns first two digits (ab)
}

int last(int num) {
    return num % 100;  // Returns last two digits (cd)
}

int main() {
    int number;
    
    printf("Enter a 4-digit integer: ");
    scanf("%d", &number);
    
    // Check if it's a 4-digit number
    if (number < 1000 || number > 9999) {
        printf("Please enter a 4-digit number!\n");
        return 1;
    }
    
    int ab = first(number);
    int cd = last(number);
    int sum = ab + cd;
    
    if (number == sum * sum) {
        printf("%d follows the condition.\n", number);
    } else {
        printf("%d does not follow the condition.\n", number);
    }
    
    return 0;
} 