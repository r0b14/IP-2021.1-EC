#include <stdio.h>
#include <string.h>

int main() {

   //A funcao strcat é concatena strings [soma strings]
   /*
      strcat(quem vai receber a concatena, o que vai concatenar[variavel ou string])
   firstname[20]=Robson Thiago
   lastname[20]=Duarte Silva
   fullname[50];
   strcat(fullname, firstname, " ", lastname); -> este tipo de argumento não funciona
   */

   char firstname[50]= "Robson Thiago";
   char lastname[50]= "Duarte Silva";
   char fullname[50];

   strcat(fullname, firstname);
   printf("1- %s\n", fullname);
   // Inserindo o Space
   strcat(fullname," ");
   printf("2- %s\n", fullname);
   // Inserindo o sobrenome na variavel fullname
   strcat(fullname, lastname);
   printf("3- %s\n", fullname);


   return 0;
}