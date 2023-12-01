#include <stdio.h>

int main () {
  char weeks[7][10] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
  int selection;

  printf("Please enter the order of day: ");
  scanf("%d", &selection);

  if (selection >= 0 && selection <= 7) {
    printf("Today is %s!", weeks[selection - 1]);
  } else {
    printf("You entered a wrong order. Please try it between 1-7.");
  };

  return 0;
};