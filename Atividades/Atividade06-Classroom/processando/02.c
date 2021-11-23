#include <stdio.h>
#include <stdlib.h>

int main() {
   int vet[5] = {1,2,3,4,5};
   int *p = &vet;

   printf("Endereco vet - %p\n", &vet);
   printf("Endereco vet - %p\n", p);
   return 0;
}