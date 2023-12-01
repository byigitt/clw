#include <stdio.h>

int main () {
  int num = 0, counter = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > counter) {
    printf("%d\n", num);
    num--;
  };
  
  return 0;
};