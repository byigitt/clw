#include <stdio.h>

int main () {
  int selection = 0;
  char operation;
  float n1 = 0, n2 = 0;

  do {
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("Choose operation (+,-,*,/): ");
    scanf(" %c", &operation);

    switch (operation) {
      case '+':
        printf("%.2f %c %.2f = %.2f\n", n1, operation, n2, n1 + n2);
        break;
      case '-':
        printf("%.2f %c %.2f = %.2f\n", n1, operation, n2, n1 - n2);
        break;
      case '*':
        printf("%.2f %c %.2f = %.2f\n", n1, operation, n2, n1 * n2);
        break;
      case '/':
        printf("%.2f %c %.2f = %.2f\n", n1, operation, n2, n1 / n2);
        break;
      default:
        printf("Enter a valid operation!\n");
    };

    printf("Do you want to continue?: ");
    scanf("%d", &selection);
  } while (selection != 0);
  
  return 0;
};