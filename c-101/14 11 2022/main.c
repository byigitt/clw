#include <stdio.h>

int main () {
  int n1 = 0, n2 = 0;

  printf("Enter a time: ");
  scanf("%d:%d", &n1, &n2);

  n1 % 10 == n2 / 10 || n2 % 10 == n1 / 10 ? printf("Polindrome!") : printf("It isnt polindrome!");
  
  return 0; 
};