#include <stdio.h>
#include <string.h>


#define T_Turma 3
#define L_Nome 50

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

   /*
   A forma como relacionamos as notas com os nomes do alunos está atrelado ao indice da matriz[i]
   Entretanto essa forma de associcao eh muito subjetiva e falha.
   O conceito que esta de forma abstrata eh o de estruturas
   */
   return 0;
}