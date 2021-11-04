#include <stdio.h>
#include <string.h>

#define T_Turma 3
#define L_Nome 50

//Entidade unica chamada aluno, tipo -> aluno
//o tipo aluno eh a juncao -> nome + nota [tipo de dado heterogeneo];
typedef struct { 
   char nomes[T_Turma];
   float notas;
} Aluno;
// Foi criado um tipo chamado ALUNO;

int main() {
   
   char nomes[T_Turma][L_Nome]; // 70 nomes de 50 caracteres
   float notas[T_Turma]; //70 notas individuais
   float soma=0, media;
   int i;

   for(i=0; i<T_Turma ;i++) {
      printf("Digite o nome do %d aluno: ",i+1);
      scanf(" %49[^\n]", nomes[i]);
      printf("Digite a nota do %d aluno: ", i+1);
      scanf("%f", &notas[i]);
      soma += notas[i];
   }

   media = soma / T_Turma;

   //Selecionando o aluno na ou acima da média
   for(i=0; i < T_Turma; i++) {
      if (notas[i] >= media) {
         printf("O aluno: %s \n", nomes[i]);
      }
   }

   return 0;
}