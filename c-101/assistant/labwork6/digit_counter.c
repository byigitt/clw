#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, temp, digit_count = 0, digit_sum = 0;

  printf("Enter an integer: ");
  scanf("%d", &num);

  // Handle negative numbers
  temp = abs(num);

  // Handle case when number is 0
  if (temp == 0)
  {
    digit_count = 1;
    digit_sum = 0;
  }

  // Calculate number of digits and their sum
  while (temp > 0)
  {
    digit_sum += temp % 10;
    digit_count++;
    temp /= 10;
  }

  printf("Number of digits: %d\n", digit_count);
  printf("Sum of digits: %d\n", digit_sum);

  return 0;
}