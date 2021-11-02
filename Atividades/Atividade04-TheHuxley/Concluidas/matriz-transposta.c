#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  int linha, coluna, i, j;
  scanf("%d %d", &linha, &coluna);
  int mat[linha][coluna];
  int maTrans[coluna][linha];

  //Escanenando os Valores da Linhas[i] e Colunas [j]
  for(i=0; i < linha; i++) {
    for(j=0; j < coluna; j++) {
      scanf("%d",&mat[i][j]);
    }
  }


  for(i=0; i < coluna; i++) {
    for(j=0; j < linha; j++) { 
      printf("%d ", mat[j][i]);
    }
    printf("\n");
  }

  return 0;
}