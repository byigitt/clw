// Write a program that prints a triangle with 
// starts with given number.

/*
  Example-1:
  Enter a number: 2
  ----
  **
  *

  Example-2:
  Enter a number: -1
  ----
  Wrong input!
*/

#include <stdio.h>

int main () {
  int number = 0, temp = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number < 1) {
    printf("Wrong input!");
  } else {
    while (number > 0) {
      temp = number;
      while (temp > 0) {
        printf("*");
        temp--;
      };

      printf("\n");
      number--;
    };
  };

  return 0;
};