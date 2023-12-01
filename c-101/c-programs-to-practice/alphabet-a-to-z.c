#include <stdio.h>

int main () {
  char first = 'a';

  while (first <= 'z') {
    printf("%c", first);
    first++;
  };

  return 0;
};