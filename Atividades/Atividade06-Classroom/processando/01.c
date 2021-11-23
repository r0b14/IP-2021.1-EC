#include <stdio.h>
#include <stdlib.h>

int main() {
   char c='a';
   char *pc;
   pc = &c;

   // A) Endereço em que C esta localizado e o Valor de C
   printf("Endereco c - %p\n", &c);
   printf("Valor c - %d\n", c);

   // B e C) Valor de PC, endereço de pc e o valor guardado.
   printf("Valor de pc - %d\n", *pc);
   printf("%d\n", pc);
   printf("Endereco pc - %p\n", pc);

   //

   return 0;
}