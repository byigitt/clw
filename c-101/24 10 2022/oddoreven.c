#include <stdio.h>

int main () {
  int n = 0;
  
  printf("Please give a number that we can check if its odd or even: ");
  scanf("%d", &n);
  
  if (n % 2 == 0) {
    printf("%d is even.", n);
  } else {
    printf("%d is odd.", n);
  };
  
  return 0;
}
