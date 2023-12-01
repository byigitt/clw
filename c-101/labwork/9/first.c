#include <stdio.h>

void columnSwap(int size, int arr[size][size]) {
  int temp = 0;

  for (int k = 0; k < size; k++) {
    temp = arr[k][0];
    arr[k][0] = arr[k][size-1];
    arr[k][size-1] = temp;
  };

  printf("The column-exchanged matrix is: \n");
  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      printf("%d ", arr[i][k]);
    };
    printf("\n");
  };
};

void rowSwap(int size, int arr[size][size]) {
  int temp = 0;

  for (int i = 0; i < size; i++) {
    temp = arr[0][i];
    arr[0][i] = arr[size-1][i];
    arr[size-1][i] = temp;
  };

  printf("The row-exchanged matrix is: \n");
  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      printf("%d ", arr[i][k]);
    };
    printf("\n");
  };

  columnSwap(size, arr);
};

int main () {
  int size = 0;
  printf("Enter an integer less than 10: ");
  scanf("%d", &size);

  int array[size][size];
  printf("Enter the elements of %dx%d matrix: ", size, size);

  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      scanf("%d", &array[i][k]);
    };
  };

  printf("Your matrix is: \n");
  for (int i = 0; i < size; i++) {
    for (int k = 0; k < size; k++) {
      printf("%d ", array[i][k]);
    };
    printf("\n");
  };

  rowSwap(size, array);
  return 0;
};