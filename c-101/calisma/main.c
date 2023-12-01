#include <stdio.h>

int main () {
  int number = 0, n1 = 0, n2 = 0, n3 = 0, temp;

  printf("Please enter a 3 digit number: ");
  scanf("%d", &number);

  n1 = number / 100;
  n2 = (number - (n1 * 100)) / 10;
  n3 = number - (n1 * 100) - (n2 * 10);

  printf("%d %d %d\n", n1, n2, n3);
  if (n1 < n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  };
  printf("step1: %d %d %d\n", n1, n2, n3);

  if (n1 < n3) {
    temp = n1;
    n1 = n3;
    n3 = temp;
  };
  printf("step2: %d %d %d\n", n1, n2, n3);

  if (n2 < n3) {
    temp = n2;
    n2 = n3;
    n3 = temp;
  };
  printf("step3: %d %d %d\n", n1, n2, n3);

  printf("%d %d %d", n1, n2, n3);
  return 0;
};