#include <stdio.h>

int main()
{
  int num, sum = 0, count = 0;
  double average;

  printf("Enter integers (enter 0 to stop):\n");

  do
  {
    scanf("%d", &num);
    if (num != 0)
    {
      sum += num;
      count++;
    }
  } while (num != 0);

  if (count > 0)
  {
    average = (double)sum / count;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
  }
  else
  {
    printf("No numbers were entered.\n");
  }

  return 0;
}