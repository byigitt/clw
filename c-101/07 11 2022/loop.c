#include <stdio.h>

int main () {
  int i, sum;

  // While loop
  
  // i = 5;
  // while (i > 0) {
  //   printf("%d\n", i);
  //   i--;
  // };

  // For loop

  // for (i = 1; i < 11; i++) {
  //   printf("%d ", i);
  // };

  // Example
  // i = 1;
  // while (i < 1001) {
  //   sum += i;
  //   i++;
  // };

  // printf("%d", sum);
  i = 1;
  while (i < 801) {
    if (i % 4 == 0 && i % 7 == 0) {
      printf("%d ", i);
    };

    i++;
  };
  return 0;
};