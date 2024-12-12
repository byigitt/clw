#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // Input validation
    if (rows <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    
    // Print the triangle pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
} 