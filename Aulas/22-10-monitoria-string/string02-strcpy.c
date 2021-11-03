#include <stdio.h>
#include <string.h>

int main() {

   // A funcao strlen(string) vai dizer o tamanho da string junto ao SPACE.
   char name[50];
   printf("1 - What is your name: ");
   fgets(name, 49, stdin);
   printf("Your name is = %s\n", name);
   printf("Size of your name = %ld\n", strlen(name));

   printf("------------------------------\n");

   // A funcao strcpy(variavel q recebe, string q vai repassar) vai atribuir strings
   // A funcao strcpy(String destino, string Origem) vai atribuir strings
   char name1[50];
   strcpy(name1, name); // ou strcpy(name1, "Robson Thiago")
   printf("Uso da funcao strcpy = %s\n", name1);
   printf("------------------------------\n");

   // A funcao strcat(variavel q recebe, o que acrescentar) vai acumular strings
   strcat(name1, " Duarte");
   printf("Uso da funcao strcat = %s\n", name1);
   printf("------------------------------\n");

   // A funcao strcmp((string1, string2) == 0) -> Vai comprar as strings e retornar os valor boolean
   if(strcmp(name, name1)==0) { // 0(Iguais), >0(maior que outra) e <0(menor que outra)
      printf("%s = %s\n", name, name1);
   } else {
      printf("%s != %s\n", name, name1);
   }
   return 0;
}