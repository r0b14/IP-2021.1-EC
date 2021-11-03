#include <stdio.h>
#include <string.h>

int main() {
   // É Bastante usasdo para poder ordenar as strings
   // A funcao strcmp((string1, string2) == 0) -> Vai comprar as strings e retornar os valor boolean
   
   char name1[50], name2[50];
   printf("1 name1= ");
   fgets(name1, 49, stdin);
   printf("2 name1= ");
   fgets(name2, 49, stdin);

   printf("1 - %s \n2 - %s", name1, name2);

   //A comparação que é feita name1 - name2 [string1 - string2]
   //A comparação leva em consideracao a diferenca entre Maiusculo e minusculo
   if(strcmp(name1, name2)==0) { // 0(Iguais), >0(maior que outra) e <0(menor que outra)
      printf("%s = %s\n", name1, name2);
   } else {
      printf("%s != %s\n", name1, name2);
   }

   return 0;
}