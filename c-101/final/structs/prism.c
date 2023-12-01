#include <stdio.h>

struct Prism {
  int length;
  int height;
  int width;
};

float calcVolume (struct Prism x) {
  return x.length * x.height * x.width;
};

float calcArea (struct Prism x) {
  return (2*x.length*x.width) + (2*x.length*x.height) + (2*x.width*x.height);
};

int main () {
  struct Prism prisma;
  printf("Enter your prism length, height and width: ");
  scanf("%d %d %d", &prisma.height, &prisma.length, &prisma.width);
  
  printf("Prism volume is %.0f, area is %.0f", calcVolume(prisma), calcArea(prisma));
  return 0;
};