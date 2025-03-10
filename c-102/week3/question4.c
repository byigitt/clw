#include <stdio.h>

void flight(int total_seconds, int *hours, int *minutes, int *seconds)
{
  *hours = total_seconds / 3600;
  *minutes = (total_seconds % 3600) / 60;
  *seconds = total_seconds % 60;
}

int main()
{
  int duration;
  int h, m, s; // variables for hours, minutes, and seconds

  printf("Enter the flight duration in seconds: ");
  scanf("%d", &duration);

  // Check if the duration is positive
  if (duration < 0)
  {
    printf("Error: Duration cannot be negative.\n");
    return 1;
  }

  // Call the flight function with references
  flight(duration, &h, &m, &s);

  // Print the results
  printf("The flight is %d hours %d minutes and %d seconds long.\n", h, m, s);

  return 0;
}