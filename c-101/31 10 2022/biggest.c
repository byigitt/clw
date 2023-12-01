#include <stdio.h>
int main () {
  int n1 = 0, n2 = 0, n3 = 0, temp;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if (n1 < n2) { temp = n1;n1 = n2;n2 = temp; };
  if (n1 < n3) { temp = n1;n1 = n3;n3 = temp; };
  if (n2 < n3) { temp = n2;n2 = n3;n3 = temp; };
  printf("Biggest one is: %d", n1);
  return 0;
};