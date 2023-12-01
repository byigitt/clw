#include <stdio.h>

int main () {
  char department;
  float value;

  do {
    printf("Enter department name: ");
    scanf(" %c", &department);

    switch (department) {
      case 'a':
      case 'A':
        printf("Enter number of hours worked: ");
        scanf("%f", &value);

        printf("Monthly salary = %.0f\n", ((15 * value) / 100) + 500);
        break;
      case 'b':
      case 'B':
        printf("Enter number of sales: ");
        scanf("%f", &value);

        printf("Monthly salary = %.0f\n", value * 10);
        break;
      case 'c':
      case 'C':
        printf("Enter number of sales: ");
        scanf("%f", &value);

        if (value > 40)
          value = 400 + (value - 40) * 15;
        else
          value = value * 10;

        printf("Monthly salary = %.0f\n", value);
        break;
      case 'x':
      case 'X':
        break;
      default:
        printf("Please enter a valid department!\n");
    }

  } while (department != 'x' && department != 'X');

  return 0;
};