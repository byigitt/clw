#include <stdio.h>

int main()
{
  int num;
  long long factorial = 1;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num < 0)
  {
    printf("Factorial is not defined for negative numbers.\n");
  }
  else if (num == 0)
  {
    printf("0! = 1\n");
  }
  else
  {
    for (int i = 1; i <= num; i++)
    {
      factorial *= i;
    }
    printf("%d! = %lld\n", num, factorial);
  }

  return 0;
}