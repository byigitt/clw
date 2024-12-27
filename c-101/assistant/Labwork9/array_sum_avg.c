#include <stdio.h>

int main()
{
  int numbers[5];
  int sum = 0;
  float average;

  // Input numbers
  printf("Enter 5 integers:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
    sum += numbers[i];
  }

  // Calculate average
  average = (float)sum / 5;

  // Display results
  printf("\nSum of the numbers: %d\n", sum);
  printf("Average of the numbers: %.2f\n", average);

  return 0;
}