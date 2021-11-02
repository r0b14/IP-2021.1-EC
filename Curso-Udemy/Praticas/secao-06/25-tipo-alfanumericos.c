#include <string.h>
#include <stdio.h>
   /*
   Tipos Alfanuméricos:
      - Caracteres;
      -Strings;
   
  // Na linguagem C não existe o tipo de dados string.

   -- String:
   "aoisoajdsa asdjapsdj asdsd"

   -- Caractere [char, %c]:
   's' 'A' 'u' 'd' 'E'

   Caracter [''] != String [""]
   */

int main () {
   // VAMOS GERAR UM ALFABETO COMPLETO PARTINDO DA TABELA ASCII
   int a,z=122; //Contadores
   for(a=97; a<=z ; a++) {
      printf("o Numero %d = %c \n", a, a);
   }


   return 0;
}