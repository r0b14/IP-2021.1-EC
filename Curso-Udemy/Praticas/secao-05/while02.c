#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int inici = 1, tab, acumulador;
  // contador da base 1 X R = 1R
  while(inici <= 10) {
    printf("\nTABUADA %d\n\n", inici);
    tab = 1;
    // contador da variavel R
    while (tab <= 10) {
      acumulador = inici * tab;
      printf("%d X %d = %d\n",inici,tab,acumulador);
      tab++;
    }
    inici++;
  }

  return 0;
}