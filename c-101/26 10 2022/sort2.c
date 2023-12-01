#include <stdio.h>

int main () {
  float n1 = 0, n2 = 0, n3 = 0, temp;

  printf("Please enter your first number: ");
  scanf("%f", &n1);
 
  printf("Please enter your second number: ");
  scanf("%f", &n2);
 
  printf("Please enter your last number: ");
  scanf("%f", &n3);

  if (n1 < n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  };

  if (n1 < n3) {
    temp = n1;
    n1 = n3;
    n3 = temp;
  };

  if (n2 < n3) {
    temp = n2;
    n2 = n3;
    n3 = temp;
  };

  printf("Sorted: %f, %f, %f", n1, n2, n3);
  return 0;
}