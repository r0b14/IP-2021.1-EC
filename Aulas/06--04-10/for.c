#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int i;
  // Incia | condição | Comando
  for (i = 0; i <= 10; i++) {
    if (i == 5)
      break;
    printf("%d\n", i);
  }
  return 0;
}