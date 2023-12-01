#include <stdio.h>

int main () {
  int n1 = 0, n2 = 0, gcd = 0, biggest = 0;
  
  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);
  
  if (n1 > n2)
	biggest = n1;
  else
	biggest = n2;

  for (int i = 1; i < biggest; i++) {
    if (n1 % i == 0 && n2 % i == 0 && i > gcd) {
      gcd = i;
    };
  };

  printf("The GCD of %d and %d is %d.", n1, n2, gcd);
  return 0;
};