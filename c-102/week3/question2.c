#include <stdio.h>

int main()
{
  // Initialize variables
  int a = 1;
  int b = 3;

  // Initialize pointers
  int *aptr;
  int *bptr;

  // Assign addresses to pointers
  aptr = &a;
  bptr = &b;

  // Print initial values
  printf("Initial values:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  // Add a and b using pointers
  int sum = *aptr + *bptr;
  printf("\nSum using pointers: %d\n", sum);

  // Find maximum using pointers
  int max = (*aptr > *bptr) ? *aptr : *bptr;
  printf("Maximum using pointers: %d\n", max);

  // Swap a and b using pointers
  int temp = *aptr;
  *aptr = *bptr;
  *bptr = temp;

  // Print swapped values
  printf("\nAfter swapping:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}