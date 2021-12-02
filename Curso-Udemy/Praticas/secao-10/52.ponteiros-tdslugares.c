#include <stdio.h>
#include <stdlib.h>

int main() {

   int valores[5] = {0, 3, 2, 9, 4};

   for(int i = 0; i < 5; i++) {
      printf("o valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
   }
   // O sizeof -> Mostra o tramanho em bytes que a variavel esta ocupando.
   printf("o array valores possui %ld bytes\n", sizeof(valores));

   // Aplicando a ponteiros
   
   for (int i = 0; i < 5; i++) {
      printf("1- valores[%d] vale %d e o endereco de memoria eh %p\n", i,valores[i], valores[i]);
      printf("2- *(valores) vale %d e o endereco de memoria eh %p\n", *(valores), *(valores));
      printf("3- *(valores+1) vale %d e o endereco de memoria eh %p\n\n", *(valores+1), *(valores+1));
   }
   return 0;
}