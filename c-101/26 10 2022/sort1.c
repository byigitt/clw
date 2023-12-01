#include <stdio.h>

int main () {
  float n1 = 0, n2 = 0, n3 = 0;

  printf("Please enter your first number: ");
  scanf("%f", &n1);
 
  printf("Please enter your second number: ");
  scanf("%f", &n2);
 
  printf("Please enter your last number: ");
  scanf("%f", &n3);
 
  if (n1 > n2 && n1 > n3 && n2 > n3)
    printf("Sorted: %f, %f, %f", n1, n2, n3);
  else if (n1 > n2 && n1 > n3 && n2 < n3)
    printf("Sorted: %f, %f, %f", n1, n3, n2);
  else if (n2 > n1 && n2 > n3 && n1 > n3)
    printf("Sorted: %f, %f, %f", n2, n1, n3);
  else if (n2 > n1 && n2 > n3 && n1 < n3)
    printf("Sorted: %f, %f, %f", n2, n3, n1);
  else if (n3 > n1 && n3 > n2 && n1 < n2)
    printf("Sorted: %f, %f, %f", n3, n2, n1);
  else
    printf("Sorted: %f, %f, %f", n3, n1, n2);
  
  return 0;
}