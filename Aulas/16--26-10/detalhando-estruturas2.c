#include <stdio.h>
#include <string.h>

struct {
   char nome[50];
   float nota;
} aluno; // Aluno eh uma variavel

int main() {

   /*
   strcpy(aluno.nome, "Robson Thiago");
   aluno.nota=9;
   */
  
   printf("Nome: ");
   scanf(" %49[^\n]", aluno.nome);
   printf("Nota: ");
   scanf("%f", &aluno.nota);

   return 0;
}