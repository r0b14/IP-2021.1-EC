#include <stdio.h>
#include <string.h>

int main() {

   char name[50];
   //O Scanf com %s vai só até o espaço[32][SPACE]
   //Antes do %s é preciso usar o SPACE e não precisa usar o [&] pois há outros conceitos.
   printf("What is your name: ");
   scanf(" %s", name);

   printf("Your name is = %s\n", name);
   printf("------------------------\n");

   char nomeUser[7]= "Robson"; //Boa Pratica -> inserir o valor do vetor a mais do que a string
   printf("Your name is = %s\n", nomeUser);

   return 0;
}