#include <stdio.h>
#include <stdlib.h>

int main() {
   int n;
   int *p;

   printf("Informe um numero= ");
   scanf("%d", &n);

   p = &n;

   printf("O numero informado= %d\n", n);
   printf("Adss de Memoria de n= %p\n", &n);
   printf("Adss de Memoria numerico de n= %d\n", &n);
   printf("Adss de Memoria de p= %p\n", p);
   printf("Adss de Memoria numerico de p= %d\n", p);

   return 0;
}