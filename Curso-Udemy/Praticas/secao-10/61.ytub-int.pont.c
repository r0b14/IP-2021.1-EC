#include <stdio.h>
#include <stdlib.h>

int main() {

   int x = 10;
   printf("\n%d\n", x); //mostrando o valor da variavel
   printf("%d\n", &x); //mostrando o endereço da memoria que a variavel está

   /*
   Vamos criar um ponteiro para que aponte para x
    -> *name_ponteiro
   */

   int *ponteiroX; //criado ponteiro do tipo inteiro
   ponteiroX = &x; //ponteiroX recebe o endereço da variavel X
   printf("--------------------------------\n");
   printf("%d\n", *ponteiroX); //Demonstrando o valor literal da "variavel"
   printf("%d\n", ponteiroX); //Demosntrando o endereco de memoria que a variavel esta apontando



   return 0;
}