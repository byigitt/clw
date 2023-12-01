#include <stdio.h>

int main () {
  int number, counter, first = 0, second = 1, temp = 0;

  printf("Please enter a positive integer: ");
  scanf("%d", &number);

  printf("Series %d: %d %d ", number, first, second);

  while (counter < number) {
    temp = first + second;
    first = second;
    second = temp;
    counter++;
    printf("%d ", temp);
  };

  return 0;
};