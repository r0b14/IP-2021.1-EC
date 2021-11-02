#include <stdio.h>
#include <string.h>

int main() {

   char name[50];
   //O Scanf com %s vai só até o espaço[32][SPACE]
   //Antes do %s é preciso usar o SPACE e não precisa usar o [&] pois há outros conceitos.
   printf("1 - What is your name: ");
   scanf(" %s", name);

   printf("Your name is = %s\n", name);

   /*
   CONTORNANDO O PROBLEMA RELACIONADO AS STRINGS
   */
   
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