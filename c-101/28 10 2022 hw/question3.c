#include <stdio.h>

int main () {
  float price = 0, discount = 0;

  printf("Enter the amount of money spent: ");
  scanf("%f", &price);

  if (price <= 100 && price > 0) 
    discount = 2;  
  else if (price <= 300 && price >= 101)
    discount = 4;
  else if (price > 300)
    discount = 10;
    
  price = price * (1 - (discount / 100));
  printf("Discount is %.0f%%, the amount you must pay is %.0f.", discount, price);
  return 0;
}

// 202228009