#include <stdio.h>
// Vamos criar um programa usando o #Define que calcule o ICMS
// Define tem muito haver com a questão das constantes.

#define ICMS 0.18;
// O valor da variável ICMS não pode ser alterado durante a execução do programa.

int main() {

   float preco_produto, valor_icms;

   //recebendo os dados do usuário
   printf("Informe o valor do produto: ");
   scanf("%f", &preco_produto);

   //Processando os dados recebidos
   valor_icms = preco_produto * ICMS;

   //Mostrando o resultado obtido
   printf("Valor de imposto a ser pago: %2.f", valor_icms);

   return 0;
}