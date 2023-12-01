#include <stdio.h>

int main () {
  int selection;

  printf("Please enter a selection (1, 2, 3, 4): ");
  scanf("%d", &selection);

  switch (selection) {
    case (1):
      printf("1) Hello!");
      break;
    case (2):
      printf("2) Welcome!");
      break;
    case (3):
      printf("3) Greetings!");
      break;
    case (4):
      printf("4) Bonjour!");
      break;
    default:
      printf("Your selection is invalid.");
  };

  printf("Test123");
  return 0;
};