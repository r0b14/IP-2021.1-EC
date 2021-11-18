#include <stdio.h>

#define tam 3
// Void -> Demosntra que a function n retorna nenhum valor
//         Parametro Formal -> Declaracao
void preencheVet(float vetor[tam]) {
   int i;
   for(i=0; i<tam; i++) {
      printf("Digite o Elemento vet[%d] ", (i+1));
      scanf("%f", &vetor[i]);
   }
}
// Funcoes que n sao void precisam de um return
float somaVet(float vetor[tam]) {
   int i;
   float sum = 0;
   for(i=0; i<tam; i++) {
      sum += vetor[i];
   }
   return sum;
}

void printMedia(float sum) {
   printf("Media = %.1f\n", (sum / tam));
}

int main() {

   float vet[tam];
   //     Parametro Real -> uso
   preencheVet(vet); // Preenche vetor com dados do usuario
   printMedia(somaVet(vet)); // Somar elementor do vetor
   
   return 0;
}