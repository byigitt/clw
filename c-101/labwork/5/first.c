#include <stdio.h>

int main () {
  int n1 = 0, n2 = 0, squares = 0, squaresum = 0;

  do {
    printf("Enter an interval of integers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
      printf("Wrong interval, try again.\n");
  } while (n1 > n2);

  // For how many squares there are.
  for (int counter1 = 1; counter1 < n2; counter1++) {
    if (counter1 * counter1 > n1 && counter1 * counter1 < n2) {
      squares++;
    };
  };

  printf("There are %d square numbers between %d and %d: ", squares, n1, n2);

  // For showcasing the squares.
  for (int counter2 = 1; counter2 < n2; counter2++) {
    if (counter2 * counter2 > n1 && counter2 * counter2 < n2) {
      printf("%d ", counter2 * counter2);
      squaresum += counter2 * counter2;
    }; 
  };

  printf("\nTheir sum is %d", squaresum);
  printf("\nTheir average is %.1f", (float) squaresum / squares);
  
  return 0;
};