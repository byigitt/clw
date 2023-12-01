#include <stdio.h>

int main () {
  int sec;

  printf("Please give time as seconds: ");
  scanf("%d", &sec);

  int h, m, s;
  h = sec / 3600;
  m = (sec % 3600) / 60;
  s = sec % 60;

  printf("%d:%d:%d", h, m, s);
  return 0;
}