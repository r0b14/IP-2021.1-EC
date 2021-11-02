#include <stdio.h>

int main () {

  int num,i,fator=1;
  printf("Digite o numero que vc quer o fatorial= ");
  scanf("%d",&num);

  for(i=1; i <= num; i++) {
     fator = fator*i;
  }
  printf("O fatorial de %d = %d\n",num, fator);

 
  return 0;
}