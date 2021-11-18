#include <stdio.h>
/*
Vamos fazer um programa que calcula a media dos alunos
so que usando os conceitos de function
*/
//tamanho da matriz
#define mat_size 4

//Funcao que recebe os valor e preenche o Vetor
void notasAlunos(float notas[mat_size]) {
   int i;
   for(i = 0; i < mat_size; i++) {
      printf("Digite a [%d] nota = ", i+1);
      scanf("%f", &notas[i]);
   }
}

// Funcao que manipula os valores
float sum_Notas(float notas[mat_size]) {
   float sum = 0;
   for (int i = 0; i < mat_size; i++) {
      sum += notas[i];
   }
   return sum;
}

// Mostra na tela o resultado
void mostraMedia(float sum) {
   printf("Media do aluno = %.1f", (sum/mat_size));
}

int main() {

   float vet[mat_size], soma = 0;
   printf("---------------------------------\n");
   printf("---- Organizando as Notas ----\n");
   // Estou preenchendo o vetor
   notasAlunos(vet);
   //sum_Notas(vet);
   //soma += sum_Notas(vet);
   mostraMedia(sum_Notas(vet));

   return 0;
}