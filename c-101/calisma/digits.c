#include <stdio.h>

int main () {
  int number = 0, digits = 1;
  
  printf("Please enter a positive integer: ");
  scanf("%d", &number);

  while (number >= 10) {
    digits++;
    number = number / 10;
  };

  printf("%d digits.", digits);
  return 0;
};