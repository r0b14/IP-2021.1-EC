#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  int x;
  printf("digite o numero = ");
  scanf("%d", &x);
  int raiz = sqrt(x);

  if (x >= 0)
  {
    printf("raiz de %d = %.2d", x,raiz);
  } else
  {
    printf("Numero invalido :(");
  }

  return 0;
}