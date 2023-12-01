#include <stdio.h>

int main () {
  int number = 0, sum = 0, rem = 0;

  printf("Please enter a positive integer: ");
  scanf("%d", &number);

  while (number != 0) {
    sum = sum * 10 + number % 10;
    number = number / 10; 
  };

  printf("%d", sum);
  return 0;
};