#include <stdio.h>
#include <string.h>

int main() {

  int tamMatriz, tLinha,tColun,i,j;
  printf("Qual a dimensao da matriz= ");
  scanf("%d", &tamMatriz);
  // Trocando os valores recebido pelo usuário p/ variável linha e coluna
  tLinha = tamMatriz;
  tColun = tamMatriz;
  char caract[tLinha][tColun];

  for(i=0; i < tLinha; i++) {
    for(j=0; j < tamMatriz; j++) {
      printf("Elemento [%d][%d]= ",i, j);
      scanf(" %30[^\n]s", caract[i][j]);
    }
    printf("\n");
  }


  return 0;
}