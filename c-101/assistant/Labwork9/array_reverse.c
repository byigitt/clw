#include <stdio.h>

int main()
{
  int arr[10];
  int temp;

  // Input array elements
  printf("Enter 10 integers:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Display original array
  printf("\nOriginal array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  // Reverse the array
  for (int i = 0; i < 5; i++)
  {
    temp = arr[i];
    arr[i] = arr[9 - i];
    arr[9 - i] = temp;
  }

  // Display reversed array
  printf("\nReversed array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}