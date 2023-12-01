#include <stdio.h>

int main () {
  float t;

  printf("Please enter a temperature value: ");
  scanf("%f", &t);

  if (t < 5) {
    printf("The weather is cold.");
  } else if (t > 5 && t < 20) {
    // merhabalar hocam, pdf üzerinden bu kısım için 5 < t < 20 demişsiniz
    // eğer bu değerleri yazarsak 5 ve 20 valuelerini atlamış oluyoruz
    // normalde t >= 5 && t <= 20 yapardım, yapmadığımdan dolayı belirtmek istedim
    printf("The weather is warm.");
  } else if (t > 20) {
    printf("The weather is hot.");
  };

  return 0;
}

// 202228009