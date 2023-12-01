#include <stdio.h>

int main () {
  int w = 0, lw = 0, mw = 0, hw = 0, sw = 0;

  do {
    printf("Enter weight of the athlete: ");
    scanf("%d", &w);

    if (w < 0) {
      printf("Incorrect input, enter the weight again!\n");
    } else {
      if (w != 0) {
        if (w < 50)
          lw++;
        if (w >= 50 && w <= 70)
          mw++;
        if (w > 70)
          hw++;

        sw += w;
      };
    };
  } while (w != 0);

  printf("Number of athletes: %d\n", lw + mw + hw);
  printf("Average weight: %.2f\n", (float)(sw / (float)(lw + mw + hw)));
  printf("Number of Lightweight athletes: %d\n", lw);
  printf("Number of Middleweight athletes: %d\n", mw);
  printf("Number of Heavyweight athletes: %d\n", hw);

  return 0;
};