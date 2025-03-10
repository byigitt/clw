#include <stdio.h>

int sumArrayElements(int *arr, int size)
{
  int sum = 0;
  int *ptr = arr;
  int *endPtr = arr + size;

  while (ptr < endPtr)
  {
    sum += *ptr;
    ptr++;
  }

  return sum;
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

  int result = sumArrayElements(array, size);

  printf("Sum of all elements in the array: %d\n", result);

  return 0;
}