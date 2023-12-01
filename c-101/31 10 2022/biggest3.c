#include <stdio.h>
int main () {
  int a = 0, b = 0, c = 0, biggest;
  printf("Enter 3 numbers: \n");
  scanf("%d %d %d", &a, &b, &c);
  biggest = (a > c) ? (a > b) ? a : b : (b > c) ? b : c;
  printf("Biggest: %d", biggest);
  return 0;
};