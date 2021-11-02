#include <stdio.h>

int main() {

   int multi, base, aculm;

   for(base = 1; base <= 10; base++) { //Processamento da base
      printf("TABUADA %d\n\n", base);

      for(multi = 1; multi <= 10; multi++) { //Processamento do externo
         aculm = base * multi;
         printf("%d X %d = %d\n", base, multi, aculm);
      }
      
      printf("-------------------\n");
   }


   return 0;
}