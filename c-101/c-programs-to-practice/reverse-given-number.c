#include <stdio.h>

int main () {
  int number = 0, reverse = 0;

  printf("Please enter a number: ");
  scanf("%d", &number);

  while (number >= 1) {
    reverse = reverse * 10 + number % 10;
    number = number / 10;
  }

  printf("%d", reverse);
  return 0;
};