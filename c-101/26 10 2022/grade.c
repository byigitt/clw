#include <stdio.h>

int main () {
  int g = 0;

  printf("Please enter a grade: ");
  scanf("%d", &g);

  // Using 1 because of if we give char value to an integer, it would be 0
  // So if we get anything but integer, value will be equals to zero
  // Which will be automaticly goes to 'else' statement.

  if (g >= 1 && g < 40) 
    printf("Your grade is: F", g);
  else if (g < 60 && g >= 40)
    printf("Your grade is: C");
  else if (g >= 60 && g < 70)
    printf("Your grade is: B");
  else if (g >= 70 && g <= 100)
    printf("Your grade is: A");
  else
    printf("Make sure that your grade is between 0 and 100!");
  
  return 0;
}