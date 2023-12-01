#include <stdio.h>

int main () {
  int days = 0, price = 0;
  char type;

  printf("Enter car type\n a = 50 dollars per day\n b = 100 dollars per day\n c = 150 dollars per day \n");
  scanf("%c", &type);

  printf("Enter number of days \n");
  scanf("%d", &days);

  switch (type) {
    case 'a':
      price = 50 * days;
      printf("BMW: %d", price);
      break;
    case 'b':
      price = 100 * days;
      printf("Volvo: %d", price);
      break;
    case 'c':
      price = 150 * days;
      printf("Mercedes: %d", price);
      break;
    default:
      price = 0;
      printf("wrong type");
  }

  return 0;
};