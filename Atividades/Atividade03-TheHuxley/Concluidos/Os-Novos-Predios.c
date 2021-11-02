#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  int num, i, j, pAlto=0, pMedio=0, pBaixo=0, dif, cont=0, agrupador=0, sub=0, distin=0;
  //Recebendo quantidade de predios
  printf("Digite a quantidade de predios= ");
  scanf("%d", &num);
  dif = num;
  int q_Predios[num];
  if(num >= 1 && num <= 100) {
    //Escaniando os valores baseados na solicitacao do cliente
    for(i=0; i < num; i++) {
      scanf("%d", &q_Predios[i]);
    }
    //Verificando o tamanho dos predios
    for(i=0; i < num; i++) {
      if(q_Predios[i] >= 100) {
        pAlto++;
      } else if(q_Predios[i] >= 50 && q_Predios[i] < 100) {
        pMedio++;
      } else if(q_Predios[i] > 0 && q_Predios[i] < 50) {
        pBaixo++;
      }
    }

    //Verificando a quantidade de predios que repetem
    for(i=0; i < num; i++) {
      if(q_Predios[i] != q_Predios[i+1]) {
        distin++;
      }
    }

    //Verifiquando a igualdade de elementos e pondo o vetor em ordem crescente.
    for(i=0; i < num; i++) {
      for(j=i; j < num; j++) {
        if(q_Predios[i] > q_Predios[j]) {
          cont = q_Predios[i];
          q_Predios[i] = q_Predios[j];
          q_Predios[j] = cont;
        } 
      }
    }
    /* VERIFICANDO DE O VETOR FICOU EM ORDEM CRESCENTE
    for(i=0; i < num; i++) {
      printf("VETOR I [%d] = %d  ", i ,q_Predios[i]);
    }
    */


    //Subtração entre o  primeiro e ultimo, já que o meu vetor está em ordem crescente
    /*printf("**************\n");
    printf("%d\n", q_Predios[0]);
    printf("%d\n", q_Predios[dif]);
    printf("%d\n", dif);*/
    dif -= 1;
    //printf("%d\n", dif);
    dif = q_Predios[dif] - q_Predios[0];
    //printf("**************\n");
    
  } else {
    printf("Entrada nao aceita\n");
  }


  printf("%d\n", distin);
  printf("%d\n", pAlto);
  printf("%d\n", pMedio);
  printf("%d\n", pBaixo);
  printf("%d\n", dif);
  

  return 0;
}