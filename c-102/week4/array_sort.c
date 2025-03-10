#include <stdio.h>

void sortArray(int *arr, int size)
{
  int *i, *j, *min;
  int temp;

  // Using selection sort with pointers
  for (i = arr; i < arr + size - 1; i++)
  {
    min = i; // Assume the current position has the minimum value

    // Find the minimum element in the unsorted part
    for (j = i + 1; j < arr + size; j++)
    {
      if (*j < *min)
      {
        min = j; // Update the pointer to the minimum element
      }
    }

    // Swap the found minimum element with the first element of unsorted part
    if (min != i)
    {
      temp = *i;
      *i = *min;
      *min = temp;
    }
  }
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

  // Sort the array using pointers
  sortArray(array, size);

  // Display the sorted array
  printf("Sorted array (ascending order): ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}