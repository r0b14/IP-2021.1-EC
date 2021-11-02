#include <string.h>
#include <stdio.h>

int main() {

   //Caracter -> Um única letra.
   char letra = 'A';
   printf("Letra = %c\n", letra); //Mostrando a letra
   printf("Letra = %d\n", letra); //Mostrando o valor da letra em ASCII
   printf("--------------------\n");
   //String = Sequencia de caracteres.
   char nome[50] = "Robson Thiago"; //Nome é uma string -> um vetor de 50 caracteres 
   printf("Nome = %s\n", nome); //Mostrando a String
   printf("Nome = %d\n", nome); //Mostrando o valor da Strinhg em ASCII
   printf("--------------------\n");

   // Vamos montar a string da mesma forma que um vetor
   char nome1[50]={'R','o','b','s','o','n','\0'}; //"Robson" -> \0 final da String [fica implicito]

   //Estamos representando de que forma funciona o %s por trás dos panos
   printf("Nome1 = ");
   for(int i=0 ; nome1[i]!='\0' ; i++){
      printf("%c", nome1[i]);
   }
   printf("\n");

   // Gerando o Vetor de Caracter em tabela ASCII
   printf("Nome1 ASCII = ");
   for(int i=0 ; nome1[i]!='\0' ; i++){
      printf("%d-", nome1[i]);
   }
   printf("\n");

   printf("--------------------\n");
   return 0;
}
