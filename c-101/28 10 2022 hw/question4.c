#include <stdio.h>

int main () {
  int val = 0;

  printf("Please enter an integer: ");
  scanf("%d", &val);

  if (val < 0) {
    val = -val;
  } else if (val >= 0 && val <= 100) {
    val = val * val;
  } else if (val > 100) {
    val = (val * val) - 50;
  };

  printf("f(x) = %d", val);
  return 0;
}

// 202228009