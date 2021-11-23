#include <stdio.h>
#include <stdlib.h>
/*
  Programa que muda os valores das variaveis baseados no seu endereço de memoria
*/

int main() {

   int x=10, y=20;
   int *changeX, *changeY;
   printf("\n Mostrando os valores antes \n");
   printf("x = %d\n",x);
   printf("y = %d\n",y);
   printf("---------------------------------");
   printf("\n Mostrando os adss antes \n");
   printf("x = %d\n", &x);
   printf("y = %d\n", &y);

   /*
   Aplicando as mudancas, so que baseado no adss de memoria
   */
   changeX = &x; //Meu ponteiro vai apontar para o adss da variavel x
   *changeX += 1;
   changeY = &y; //Meu ponteiro vai apontar para o adss da variavel x
   *changeY += 1; //O valor do meu ponteiro esta recendo +1;
   printf("\n---------------------------------\n");
   printf("Adss chargeX = %d\n", changeX);//Mostrando endereço
   printf("Adss chargeY = %d\n", changeY);//Mostrando endereço

   printf("\n---------------------------------");
   printf("\nMostrando os valores depois \n");
   printf("x = %d\n",x);
   printf("y = %d\n",y);

   return 0;
}