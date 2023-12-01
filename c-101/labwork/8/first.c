#include <stdio.h>

int main () {
  int grades[4][3] = {0};
  
  for (int i = 0; i < 4; i++) {
    printf("Enter the exam grades of Student %d: ", i + 1);
    scanf("%d %d %d", &grades[i][0], &grades[i][1], &grades[i][2]);
  };

  printf("\n");
  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int k = 0; k < 4; k++) {
      // printf("\n%d %d %d\n", i, k, grades[i][k]);
      sum += grades[k][i];
    };

    printf("The average of the %d. exam is: %.1f\n", i + 1, (float) sum / 4);
  };

  printf("\n");
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int k = 0; k < 3; k++) {
      // printf("\n%d %d %d\n", i, k, grades[i][k]);
      sum += grades[i][k];
    };

    printf("The average of the %d. student is: %.1f\n", i + 1, (float) sum / 3);
  };
  
  return 0;
};