#include <stdio.h>

float calculateScore (float m, float f) {
  return (m * 0.4) + (f * 0.6);
};

int main () {
  int midterm = 0, final = 0;

  printf("Please enter your midterm (70): ");
  scanf("%d", &midterm);

  printf("Please enter your final (50): ");
  scanf("%d", &final);

  printf("Your score: %.0f", calculateScore(midterm, final));

  return 0;
};