#include <stdio.h>

int main () {
  int counter = 0, n1 = 0, n2 = 0, nsum = 0, sum = 0;

  for (counter = 1000; counter <= 9999; counter++) {
    n1 = counter / 100;
    n2 = counter % 100;
    nsum = n1 + n2;

    if (nsum * nsum == counter) {
      printf("%d\n", counter);
      sum++;
    };
  };

  printf("There is %d interesting numbers!", sum);
  return 0;
};