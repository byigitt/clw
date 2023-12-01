#include <stdio.h>
 
int main () {
  float mt = 0, fin = 0;

  printf("Please enter a midterm: ");
  scanf("%f", &mt);
  
  printf("Please enter a final: ");
  scanf("%f", &fin);

  mt = mt * 0.4;
  fin = fin * 0.6;

  if (mt + fin <= 60)
    printf("Student fails.");
  else
    printf("Student passes.");
  
  return 0;
}