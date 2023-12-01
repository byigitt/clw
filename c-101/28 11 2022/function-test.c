#include <stdio.h>
#include "calc.h"

int main () {
  int x, y;
  char o;

  printf("Please specify 2 integers: ");
  scanf("%d %d", &x, &y);
  
  printf("Please specify an operator: ");
  scanf(" %c", &o);

  switch (o) {
    case '+':
      printf("%d %c %d = %d", x, o, y, add(x, y));
      break;
    case '-':
      printf("%d %c %d = %d", x, o, y, sub(x, y));
      break;
    case '/':
      printf("%d %c %d = %d", x, o, y, div(x, y));
      break;
    case '*':
      printf("%d %c %d = %d", x, o, y, multp(x, y));
      break;
    default:
      printf("Please specify a correct operator!");
  };

  return 0;
};