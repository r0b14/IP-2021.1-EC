#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  // Matriz 3x3
  int num[3][3],i,j;
  
  //Colentando dados do usuario
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      printf("[%d%d]=",i,j);
      scanf("%d",&num[i][j]);
    }
      printf("\n");
  }
  
  for(i=0;i<3;i++) {
    printf("|");
    for(j=0;j<3;j++) {
    printf(" %d ", num[i][j]);
    }
    printf("|");
    printf("\n");
  }

  return 0;
}