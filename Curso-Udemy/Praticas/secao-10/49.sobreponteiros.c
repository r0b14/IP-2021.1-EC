#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

   //Declarado a variavel ponteiro que aponta para int 
   int *ponteiro;
   int valor;

   //Recebendo o valor da variavel pelo usuario
   printf("O valor digite um valor = ");
   scanf("%d", &valor);

   //Mostrando o valor da variavel
   printf("Valor = %d\n", valor);
   //Mostrando o valor do endereço da variavel (&variavel)
   printf("End Valor = %p\n", &valor);

   ponteiro = &valor; // o ponteiro esta recebendo o endereco de valor
   //Mostrando o valor do ponteiro
   printf("Ponteiro = %d\n", (*ponteiro));
   // mostrando o endereço de memoria do ponteiro
   printf("End Ponteiro = %p\n", ponteiro);

   return 0;
}