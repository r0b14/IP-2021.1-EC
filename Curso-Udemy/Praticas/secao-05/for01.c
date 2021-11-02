#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* --------------------------------
  ESTRUTURAS DE REPETICAO
  for -> para.
  while -> enquanto.
  do...while -> faça...enquanto. 
   --------------------------------  */

int main () {

  int num, tabuada, multiplicador;
  
  for (num = 1; num <= 10; num++) {
  printf("\nTABUADA %d\n", num);
    for (tabuada = 1; tabuada <= 10; tabuada++) {
      multiplicador = num * tabuada;
      printf("\n%d X %d = %d",num,tabuada,multiplicador);
    }
    printf("\nTABUADA %d\n", num);
  }

  return 0;

}