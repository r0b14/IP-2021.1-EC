#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  int x;
  printf("digite o numero = ");
  scanf("%d", &x);
  
  if (x%2 == 0)
  {
    printf("%d eh par", x);
  } else
  {
    printf("Este numero eh impar");
  }

  return 0;
}