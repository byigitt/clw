#include <stdio.h>

int main () {
  int number = 0;

  printf("Please enter a positive integer: ");
  scanf("%d", &number);

  printf("%d", number % 9 == 0 ? 9 : number % 9);
  return 0;
};