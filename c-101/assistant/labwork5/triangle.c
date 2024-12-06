#include <stdio.h>

int main()
{
  int side1, side2, side3;
  int type;

  printf("Enter the lengths of three sides of the triangle:\n");
  printf("Side 1: ");
  scanf("%d", &side1);
  printf("Side 2: ");
  scanf("%d", &side2);
  printf("Side 3: ");
  scanf("%d", &side3);

  // Check if triangle is valid
  if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2)
  {
    printf("These sides cannot form a triangle!\n");
    return 1;
  }

  // Determine triangle type
  if (side1 == side2 && side2 == side3)
    type = 1; // Equilateral
  else if (side1 == side2 || side2 == side3 || side1 == side3)
    type = 2; // Isosceles
  else
    type = 3; // Scalene

  switch (type)
  {
  case 1:
    printf("This is an Equilateral triangle.\n");
    break;
  case 2:
    printf("This is an Isosceles triangle.\n");
    break;
  case 3:
    printf("This is a Scalene triangle.\n");
    break;
  }

  return 0;
}