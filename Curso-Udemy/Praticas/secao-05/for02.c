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

  int num, soma = 0;
  for(int i = 1; i <= 5; i++) {
    printf("Digite o %d numero = ", i);
    scanf("%d", &num);
    soma += num;
    //printf("\n %d \n", soma);
  }
    printf("\n Resultado final = %d\n", soma);

  return 0;

}