#include <stdio.h>
#include <string.h>
   //Escrevendo e usando funcoes

void mensagem() {
   printf("Ola Seja bem vindo!\n");
}

int soma(int num1, int num2) {
   int res = num1 + num2;
   return res;
}

void proximo_char(char caractere) {
   printf("%c", caractere+1);
}

// Principal function

int main() {

   mensagem();
   //int retorno = soma(5,5);
   printf("function soma = %d\n",soma(5,5));
   char cara = 'r';
   printf("function prox char = ");
   proximo_char(cara);

   return 0;
}