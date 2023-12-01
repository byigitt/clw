#include <stdio.h>

int main () {
  int num = 0, counter = 1;

  printf("Enter a number: ");
  scanf("%d", &num);

  while (counter <= num) {
    printf("%d\n", counter);
    counter++;
  };
  
  return 0;
};