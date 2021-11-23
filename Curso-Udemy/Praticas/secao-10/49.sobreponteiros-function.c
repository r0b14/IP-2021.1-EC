#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void somador(int* valor) {
   //Antes de incrementar
   printf("--------------------\n");
   printf("valor = %d\n", (*valor));
   printf("adss valor = %d\n", valor);

   //Depois de incrementar
   printf("********************\n");
   printf("valor = %d\n", ++valor);
   printf("adss valor = %d\n", &valor);
   printf("---------------------\n");
}


int main() {

   //Declarado a variavel ponteiro que aponta para int
   int valor;

   //Recebendo o valor da variavel pelo usuario
   printf("O valor digite um valor = ");
   scanf("%d", &valor); 

   //Mostrando o valor da variavel
   printf("Valor = %d\n", valor);
   //Mostrando o valor do endereço da variavel (&variavel)
   printf("End Valor = %d\n", &valor);

   somador(&valor); // o ponteiro esta recebendo o endereco da vari valor - Copia do valor
   //Mostrando o valor do ponteiro
   printf("Valor = %d\n", (*ponteiro));
   // mostrando o endereço de memoria do ponteiro
   printf("End Ponteiro = %p\n", ponteiro);

   return 0;
}