#include <stdio.h>

int main () {
  int n = 0;

  printf("Give me a number: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("%d is a negative number.", n);
  } else if (n > 0) {
    printf("%d is a positive number.", n);
  } else {
    printf("Number %d is zero.", n);
  };

  return 0;
};