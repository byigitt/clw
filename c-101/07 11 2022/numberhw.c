#include <stdio.h>

int main () {
  int number = 0, temp;
  int first = 0, second = 0, third = 0;

  printf("Please enter a number: ");
  scanf("%d", &number);

  first = number / 100;
  second = (number - first * 100) / 10;
  third = number - first * 100 - second * 10;

  if (first < second) {
    temp = first;
    first = second;
    second = temp;
  };

  if (first < third) {
    temp = first;
    first = third;
    third = temp;
  };

  if (second < third) {
    temp = second;
    second = third;
    third = temp;
  };

  printf("Your biggest number would be: %d%d%d", first, second, third);
  return 0;
};