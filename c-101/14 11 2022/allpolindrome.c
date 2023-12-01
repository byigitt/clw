#include <stdio.h>

int main () {
  int hour, minute, h1, h2, m1, m2;

  for (hour = 0; hour < 24; hour++) {
    h1 = hour / 10;
    h2 = hour % 10;

    for (minute = 0; minute < 60; minute++) {
      m1 = minute / 10;
      m2 = minute % 10;

      if (h1 == m2 && h2 == m1)
        printf("%d%d:%d%d\n", h1, h2, m1, m2);
    };
  };

  return 0;
};