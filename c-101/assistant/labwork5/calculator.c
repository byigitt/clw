#include <stdio.h>

int main()
{
  int num1, num2;
  char operator;
  float result;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter operator (+, -, *, /): ");
  scanf(" %c", &operator);
  printf("Enter second number: ");
  scanf("%d", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 != 0)
    {
      result = (float)num1 / num2;
    }
    else
    {
      printf("Error: Division by zero!\n");
      return 1;
    }
    break;
  default:
    printf("Invalid operator!\n");
    return 1;
  }

  printf("Result: %.2f\n", result);
  return 0;
}