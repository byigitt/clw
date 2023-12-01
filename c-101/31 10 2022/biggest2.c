#include <stdio.h>

int main () {
  int n1, n2, n3, biggest;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 > n2 && n1 > n3) { biggest = n1; }
  else if (n2 > n1 && n2 > n3) { biggest = n2; }
  else { biggest = n3; };
  printf("%d", biggest);
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  return 0;
};