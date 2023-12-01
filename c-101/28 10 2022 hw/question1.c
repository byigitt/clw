#include <stdio.h>

int main () {
  int frw = 0, frl = 0, srw = 0, srl = 0;

  printf("Enter the side lenghts of the 1. rectangle: ");
  scanf("%d %d", &frw, &frl);

  printf("Enter the side lenghts of the 2. rectangle: ");
  scanf("%d %d", &srw, &srl);

  if (frw < 0 || frl < 0 || srw < 0 || srl < 0) {
    printf("Negative value entered");
  } else {
    if (frw * frl > srw * srl) {
      printf("The 1. rectangle is bigger.");
    } else {
      printf("The 2. rectangle is bigger.");
    };
  };
  
  return 0;
}

// 202228009