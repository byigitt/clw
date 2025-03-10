#include <stdio.h>

void printArrayReverse(int *arr, int size)
{
  int *ptr = arr + size - 1; // Points to the last element

  printf("Array elements in reverse order: ");
  while (ptr >= arr)
  {
    printf("%d ", *ptr);
    ptr--;
  }
  printf("\n");
}

int main()
{
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];

  printf("Enter %d elements:\n", size);
  for (int i = 0; i < size; i++)
  {
    printf("Element %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  // Display the original array
  printf("Original array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  // Display array in reverse using pointers
  printArrayReverse(array, size);

  return 0;
}