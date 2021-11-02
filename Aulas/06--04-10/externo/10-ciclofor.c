#include <stdio.h>

int main () {

  // Estudando laços de repetição 
/* 
  Quando usamos o FOR precisamos decidir um valor inicial, uma condição e o que fazer quando
  essa condição for satisfeita(incrementar ou decrementar).
    -- for(valor inicial ; condição ; incremento ou decremento) {
           o que se fazer dentro do laço;
        }
*/

  int contador;
  int num = 1;

  for (contador=1; contador <= 10 ; contador++) {
    printf("O %d teste\n", contador);
  }

  return 0;
}