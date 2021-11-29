#include <stdio.h>
#include <stdlib.h>

int main() {

   int valores[3], i;

   //Coletando os valores do usuario
   for(i = 0; i < 3; i++) {
      printf("Digite o %d valor= ", i+1);
      scanf("%d", &valores[i]);
   }

   printf("Mostrando os valores coletador \n");

   for(i = 0; i < 3; i++) {
      printf("%d\n", valores[i]);
   }

   //Mostrando os enderecos de memoria baseado nas posicoes dentro do vetor.
   for(i = 0; i < 3; i++) {
      printf("Adss vetor= %p\n Valor vetor= %d\n", &valores[i], valores[i]);
   }
   //Mostrando o endereco de memoria do vetor.
   printf("Adss vetor= %p\n", valores);
   return 0;
}