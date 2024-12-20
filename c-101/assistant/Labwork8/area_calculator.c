#include <stdio.h>
#define PI 3.14159

int menu() {
    int choice;
    printf("\n1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("4. Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void square() {
    float side;
    printf("Enter the side length: ");
    scanf("%f", &side);
    printf("The area of the square is %.2f.\n", side * side);
}

void circle() {
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("The area of the circle is %.2f.\n", PI * radius * radius);
}

void rectangle() {
    float length, width;
    printf("Enter the side lengths: ");
    scanf("%f %f", &length, &width);
    printf("The area of the rectangle is %.2f.\n", length * width);
}

int main() {
    int choice;
    
    do {
        choice = menu();
        
        switch(choice) {
            case 1:
                square();
                break;
            case 2:
                circle();
                break;
            case 3:
                rectangle();
                break;
            case 4:
                printf("The program is terminated.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);
    
    return 0;
} 