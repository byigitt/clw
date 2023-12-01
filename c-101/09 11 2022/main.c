#include <stdio.h>

int main () {
  // FOR CONSTRUCT
  // Does the same thing as WHILE CONSTRUCT in less lines.
  for (int i = 1; i < 10; i++) {
    printf("%d ", i);
  };

  printf("\n");

  // DO-WHILE CONSTRUCT
  // You execute your code at least one time,
  // than you check your if statement.
  int a = 1;
  do {
    printf("%d ", a);
    a++;
  } while (a < 10);

  printf("\n");

  // WHILE CONSTRUCT
  // while ... do ... (but it doesnt have do keyword)
  int b = 1;
  while (b < 10) {
    printf("%d ", b);
    b++;
  };

  return 0;
}; 