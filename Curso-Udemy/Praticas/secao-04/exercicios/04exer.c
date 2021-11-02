#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  int x;
  printf("digite o numero = ");
  scanf("%d", &x);
  int raiz = sqrt(x);

  if (x > 0)
  {
    printf("O quadrado %d = %d\n", x,(x*x));
    printf("raiz de %d = %d", x,raiz);
  } else
  {
    printf("Numero invalido :(");
  }

  return 0;
}