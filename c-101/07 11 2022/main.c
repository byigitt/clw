#include <stdio.h>

int main () {
  char type;
  int months = 0, annual = 0;

  printf("Enter employee type (p,P,o,O): ");
  scanf("%s", &type);

  printf("Enter working months: ");
  scanf("%d", &months);

  if (months >= 0) {
    switch (type) {
      case 'p':
      case 'P':
        if (months < 12)
          annual = 0;
        if (months >= 12 && months < 120)
          annual = 20;
        if (months >= 120)
          annual = 30;

        printf("----\n");
        printf("Annual Leave Right = %d days for %.2f years.", annual, (float) months / 12);
        break;
      case 'o':
      case 'O':
        if (months < 12)
          annual = 0;
        if (months >= 12 && months < 72)
          annual = 14;
        if (months >= 72 && months <= 168)
          annual = 20;
        if (months > 168)
          annual = 26;

        printf("----\n");
        printf("Annual Leave Right = %d days for %.1f years.", annual, (float) months / 12);
        break;
      default:
        printf("Please enter a valid employee type!");
    };
  } else {
    printf("You entered a negative value for months. Please re-enter again.");
  };

  return 0;
};