#include <stdio.h>

int main()
{
  int original[10];
  int even[10];
  int evenCount = 0;

  // Input array elements
  printf("Enter 10 integers:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &original[i]);

    // If number is even, add it to even array
    if (original[i] % 2 == 0)
    {
      even[evenCount] = original[i];
      evenCount++;
    }
  }

  // Display original array
  printf("\nOriginal array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", original[i]);
  }

  // Display even numbers array
  printf("\nEven numbers array: ");
  for (int i = 0; i < evenCount; i++)
  {
    printf("%d ", even[i]);
  }
  printf("\n");

  return 0;
}