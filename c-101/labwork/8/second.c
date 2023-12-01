#include <stdio.h>
void sum (int array[], int x) {
  int diagonal_sum = 0;
  for (int i = 0; i < x; i++) {
    diagonal_sum += array[i];
  };

  printf("\nTheir sum: %d", diagonal_sum);
};

int main () {
  int x = 0, y = 0;
  do {
    printf("Enter number of rows: ");
    scanf("%d", &x);

    printf("Enter number of columns: ");
    scanf("%d", &y);

    if (x != y) 
      printf("Error. The input must be a square matrix. \n\n");
  } while (x != y);

  int array[x][y];
  printf("Fill the array: \n");

  for (int i = 0; i < x; i++) {
    for (int k = 0; k < y; k++) {
      scanf("%d", &array[i][k]);
    };
  };

  printf("\nThe elements of the main diagonal are: ");
  int diagonal_elements[x];

  for (int i = 0; i < x; i++) {
    printf("%d ", array[i][i]);
    diagonal_elements[i] = array[i][i];
  };

  sum(diagonal_elements, x);
  return 0;
};