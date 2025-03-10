#include <stdio.h>

int main()
{
  int a[4] = {5, 15, 25, 35};

  printf("%d\n", a[1]);      // Prints the value at index 1: 15
  printf("%p\n", &a[2]);     // Prints the address of element at index 2
  printf("%d\n", a[2] + 5);  // Prints the value at index 2 plus 5: 25 + 5 = 30
  printf("%p\n", &a[3] + 1); // Prints the address of element at index 3 + 1 (pointer arithmetic)
  printf("%p\n", a + 2);     // Prints the address of element at index 2 (pointer arithmetic)
  printf("%d\n", *(a + 3));  // Prints the value at index 3: 35
  printf("%p\n", &a[0]);     // Prints the address of element at index 0
  printf("%d\n", *a + 4);    // Prints the value at index 0 plus 4: 5 + 4 = 9

  return 0;
}