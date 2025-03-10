#include <stdio.h>

void digit(int num, int *hundreds, int *tens, int *ones)
{
  *hundreds = num / 100;
  *tens = (num % 100) / 10;
  *ones = num % 10;
}

int main()
{
  int number;
  int h, t, o; // variables for hundreds, tens, and ones

  printf("Enter a 3-digit integer: ");
  scanf("%d", &number);

  // Check if the number is 3 digits
  if (number < 100 || number > 999)
  {
    printf("Error: Please enter a 3-digit integer.\n");
    return 1;
  }

  // Call the digit function with references
  digit(number, &h, &t, &o);

  // Print the results
  printf("Hundreds digit: %d\n", h);
  printf("Tens digit: %d\n", t);
  printf("Ones digit: %d\n", o);

  return 0;
}