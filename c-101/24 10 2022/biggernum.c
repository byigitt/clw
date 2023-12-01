#include <stdio.h>

int main () {
  int n1 = 0, n2 = 0;

  printf("Input the first number: ");
  scanf("%d", &n1);

  printf("Input the second number: ");
  scanf("%d", &n2);

  if (n1 < n2) {
    printf("%d is bigger than %d", n2, n1);
  } else {
    printf("%d is bigger than %d", n1, n2);
  };
  
  return 0;
};