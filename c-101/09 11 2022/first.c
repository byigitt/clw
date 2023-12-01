// Write a program that calculates the sum of the numbers 
// entered by the user until the entered value is 0

#include <stdio.h>

int main () {
  int number = 0, sum = 0;

  do {
    printf("Enter your number (enter 0 if you want to stop): ");
    scanf("%d", &number);

    sum = sum + number;
  } while (number != 0);

  printf("\nSum is: %d", sum);
  return 0;
};