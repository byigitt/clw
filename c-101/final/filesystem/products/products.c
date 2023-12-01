#include <stdio.h>
#include <stdlib.h>
#define NUM_PRODUCTS 10

typedef struct {
  int id;
  int stock;
  float price;
  char name[256];
} Product;

int main () {
  FILE *products_file = fopen("products.txt", "r");
  if (products_file == NULL) {
    printf("There is no file named products.txt!");
    return 1;
  };

  Product products[NUM_PRODUCTS];
  for (int i = 0; i < NUM_PRODUCTS; i++) {
    fscanf(products_file, "%d,%d,%f,%s", &products[i].id, &products[i].stock, &products[i].price, products[i].name);
  };

  fclose(products_file);

  int id;
  printf("Enter a product ID: ");
  scanf("%d", &id);

  for (int i = 0; i < NUM_PRODUCTS; i++) {
    if (products[i].id == id) {
      printf("\nProduct Information\n");
      printf("Product name: %s\n", products[i].name);
      printf("Product stock: %d\n", products[i].stock);
      printf("Product price: %.3f\n", products[i].price);
      return 0;
    };
  };

  printf("Product is not found!");
  return 0;
};