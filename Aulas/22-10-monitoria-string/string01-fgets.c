#include <stdio.h>
#include <string.h>

int main() {

   /*
   CONTORNANDO O PROBLEMA RELACIONADO AS STRINGS
   */

   //Vamos usar a função Fgets
   char name[50];
   printf("1 - What is your name: ");
   fgets(name,49,stdin);

   printf("Your name is = %s\n", name);
   
   //ESTAMOS TENDO PROBLEMA COM ESSES SCANF
   
   char name2[50];
   printf("2 - What is your name: ");
   scanf(" %49[^\n]", name2); //Colete os dados até aperta o ENTER -> "%[^\n]"
   // é preciso colocar um caracter a menos por causa do \0
   printf("Your name is = %s\n", name2);
   
   
   char name3[50];
   printf("3 - What is your name: ");
   gets(name3); // ou fgets(name3, 49, stdin) -> stdin = teclado
   // é preciso colocar um caracter a menos por causa do \0
   printf("Your name is = %s\n", name3);

   return 0;
}