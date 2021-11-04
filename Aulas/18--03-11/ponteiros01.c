#include <stdio.h>
#include <string.h>

int main() {

   int num1 = 151584;
   int num2 = 1515822;
   printf("Endereco de num= %p\n", &num2);
   int *ponteiro= &num1;
   int *ponteiro2= &num2;
   // %ld , (long) ponteiro 
   printf("1 - Endereco de num= %p\n", &num1);
   printf("1 - Endereco de num em dec= %ld\n", &num1);
   printf("2 - Endereco de num= %p\n", &num2);
   printf("3 - Endereco de num= %p\n", ponteiro);
   printf("4 - Endereco de num= %p\n", ponteiro2);
   printf("5 - tamanho em byte de num= %d\n", sizeof(ponteiro2));

   return 0;
}