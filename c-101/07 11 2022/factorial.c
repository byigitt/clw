#include <stdio.h>

int main() {
    int number = 0, counter = 1, sum = 1;
    
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    while (counter < number + 1) {
        sum = counter * sum;
        counter++;
    };
    
    printf("Your sum is: %d", sum);
    return 0;
}