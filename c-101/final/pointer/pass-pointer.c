#include <stdio.h>

int main () {
  FILE *numbers_file = fopen("numbers.dat", "r");
  if (numbers_file == NULL) {
    printf("Numbers file not found.");
    return 1;
  };

  FILE *writing_file = fopen("writing.dat", "w");
  if (writing_file == NULL) {
    printf("Access violation.");
    return 1;
  };

  int number;
  while (fscanf(numbers_file, "%d", &number) == 1) {
    fprintf(writing_file, "%d", number + 1);
  };

  fclose(numbers_file);
  fclose(writing_file);
  return 0;
};