#include <stdio.h>
#include <stdlib.h>
/*
  Programa que muda os valores das variaveis baseados no seu endereço de memoria
*/

int main() {

  int x=10;
  int *ponteiro;
  ponteiro = &x; //Ponteiro está apontando para o endereço de memoria de x

  int y = 20;
  *ponteiro = y; //O valor do meu ponteiro == y
  // Alteramos o valor de x dentro da fonte, pois alteramos dentro do ponteiro

  printf("x = %d\ny = %d\n", x, y);

  return 0;
}