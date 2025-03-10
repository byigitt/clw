#include <stdio.h>

int main()
{
  // Initialize variables
  int x = 5;
  int y = 10;

  // Initialize pointers
  int *xptr;
  int *yptr;

  // Assign addresses to pointers
  xptr = &x;
  yptr = &y;

  // Print values of x and y
  printf("Value of x: %d\n", x);
  printf("Value of y: %d\n", y);

  // Print addresses of x and y
  printf("\nAddress of x: %p\n", (void *)&x);
  printf("Address of y: %p\n", (void *)&y);

  // Print values of xptr and yptr (which are addresses of x and y)
  printf("\nValue of xptr (address of x): %p\n", (void *)xptr);
  printf("Value of yptr (address of y): %p\n", (void *)yptr);

  // Print addresses of xptr and yptr themselves
  printf("\nAddress of xptr: %p\n", (void *)&xptr);
  printf("Address of yptr: %p\n", (void *)&yptr);

  return 0;
}