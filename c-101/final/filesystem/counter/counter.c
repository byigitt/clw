#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *counter_file = fopen("counter.dat", "r");
  if (counter_file == NULL) {
    printf("File is not found");
    return 1;
  };

  FILE *payment_file = fopen("payment.dat", "w");
  if (payment_file == NULL) {
    printf("Access violation problem");
    return 1;
  };

  int id, current_reading, previous_reading;
  char name[256];

  while (fscanf(counter_file, "%d %s %d %d", &id, name, &current_reading, &previous_reading) == 4) {
    int unit = current_reading - previous_reading;
    float rate;

    if (unit <= 50) {
      rate = 1.00;
    } else if (unit <= 100) {
      rate = 1.50;
    } else {
      rate = 2.00;
    };

    float amount = unit * rate;
    fprintf(payment_file, "%d %s %d %.2f\n", id, name, unit, amount);
  };

  fclose(counter_file);
  fclose(payment_file);
  return 0;
};