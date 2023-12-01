#include <stdio.h>

int main () {
  float x = 0, y = 0, q = 0;

  printf("Please enter x: \n");
  scanf("%d", &x);

  printf("Please enter y: \n");
  scanf("%d", &y);

  if (x < 0 && y < 0) 
    q = 3;
  else if (x < 0 && y > 0)
    q = 2;
  else if (x > 0 && y <0)
    q = 4;
  else if (x == 0 && y == 0)
    q = 0;
  else
    q = 1;
  
  printf("(%d, %d) is in %d", q);
  return 0;
};