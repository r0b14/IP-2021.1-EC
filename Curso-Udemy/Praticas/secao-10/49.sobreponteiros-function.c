#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
   Criado um programa que faz a alteracao do valor solicitado pelo usuario,
   no caso soma +1 ao valor, só que baseado no adss da memoria da variavel.
      1 - criado uma funcao que recebe um valor int e cria um ponteiro para
      que aponte para variavel. baseado no adss do ponteiro é inserido +1 ao 
      valor inserido e retorna o valor da variavel atualizado.
*/
void somador(int* valorfunc) {
   //Antes de incrementar
   printf("--------------------\n");
   printf("valor = %d\n", *valorfunc);
   printf("adss valor = %d\n", valorfunc);

   //Depois de incrementar
   printf("********************\n");
   printf("valor = %d\n", (*valorfunc += 1));
   printf("adss valor = %d\n", valorfunc);
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
   printf("Adss Valor = %d\n", &valor);

   // o ponteiro esta recebendo o endereco da vari valor - Copia do valor
   somador(&valor);

   //Mostrando o valor pos alteracao
   printf("Valor = %d\n", valor);
   // mostrando o endereço de memoria do ponteiro
   printf("Adss valor = %d\n", &valor);

   return 0;
}