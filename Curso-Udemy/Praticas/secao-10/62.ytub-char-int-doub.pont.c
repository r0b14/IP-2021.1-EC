#include <stdio.h>
#include <stdlib.h>

int main() {

   int x = 20;
   double y= 20.50;
   char z = 'a';

   int *pontX; // ou int *pontX = &x;
   pontX = &x; //o endereço desse ponteiro está apontando para o endereço de X
/* 
   *pontX = &x; 
   o valor que o ponteiro está apontando (o valor do ponteiro é o endenreço de memoria)
   ex -> se o valor da memoria de X é 20000 o valor de pontX vai ser 20000 e não o seu 
   endereço.
*/
   double *pontY= &y;
   char *pontZ= &z;

   printf("Ende x = %i - valor de x = %i\n", pontX, *pontX);
   printf("Ende y = %i - valor de y = %.2f\n", pontY, *pontY);
   printf("Ende z = %i - valor de z = %c\n", pontZ, *pontZ);

   // Somando os valores para os quais os ponteiros apontam

   double soma = *pontX + *pontY;
   printf("Soma = %.2f",soma);

   
   return 0;
}