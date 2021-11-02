#include <stdio.h>

int main () {

  // While - Enquanto
  /*
      A estrutura de Repetição While ela verifica uma condição inicial e daí parte para o 
      escopo inserido dentro da estrutura. Vale lembrar que é preciso colocar o incremento ou
      decremento dentro do escopo, caso contrário, entrarar em um loop infinito.
        while (condição (tipo um if)) {
          escopo;
          incremento ou decremento;
        }
  */
  int contador=1;

  while(contador <= 5) {
    printf("O Contador %d.\n", contador);
    contador++; // Ou contador += 1...
  }

  return 0;
}