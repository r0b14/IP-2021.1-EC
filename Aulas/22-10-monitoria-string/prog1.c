#include <stdio.h>
#include <string.h>
#include <math.h>

#define tam_vet 10;

int main() {

   // STOI - String to Int [transformando uma string de numero em int]
   char numeroS[] = "1412560";
   int numeroInt = 0, str_size = strlen(numeroS) - 1, index = 0;
   int charNumerico = 0; // Variavel que vai armazenar a mudanca de string p/ int.

   while(numeroS[index] != '\0') {
      charNumerico = ((int)numeroS[index]) - 48; //'1' = 49 - 48 = 1 -> ASCII
      printf("Char convertido %d\n", charNumerico);

      charNumerico *= pow(10, str_size - index); // 1 * 10^(8-1) - 1(index) -> 1 * 10^6 = 1000000

      numeroInt += charNumerico;
      ++index;
   }

   printf("%d\n", numeroInt);

   return 0;

}