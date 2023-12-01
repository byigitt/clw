#include <stdio.h>

int main () {
  int firstNumber = 0, editableNumber = 0, temp = 0, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &firstNumber);

  editableNumber = firstNumber;
  while (editableNumber >= 1) {
    temp = editableNumber % 10;
    sum += temp * temp * temp;
    editableNumber = editableNumber / 10;
  };

  if (firstNumber == sum)
    printf("This number is a armstrong number.");
  else
    printf("This number is NOT a armstrong number.");

  return 0;
};