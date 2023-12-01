#include <stdio.h>

int main () {
  int rate = 0, days = 0;

  printf("Enter daily rate of a worker: \n");
  scanf("%d", &rate);

  printf("\nEnter how many days worker works for: \n");
  scanf("%d", &days);

  printf("\nThere is a total payment of '%d'", rate * days);
  return 0;
};
