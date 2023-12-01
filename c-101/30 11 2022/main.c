/*
  Write a program that checks the given number and returns 1 if the
  number is odd returns 0 if its even.

  Do it with a sub function!!!
*/
#include <stdio.h>
int odd_or_even(int num) {
  if (num % 2 == 0) {
    return 0;
  } else {
    return 1;
  };
};

void main () {
  int num = 0;

  printf("Please enter a number: ");
  scanf("%d", &num);

  printf("%d", odd_or_even(num));
};
