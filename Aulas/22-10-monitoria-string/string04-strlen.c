#include <stdio.h>
#include <string.h>

int main() {

   //Função strlen -> Retorna a quantia de caracteres da string, sem contar o caracter nulo[\0]
   char name1[50];
   int i = 0, contador = 0;
   fgets(name1,49,stdin);
   printf("1 - name = %s\n",name1);
   printf("2 - size name = %ld\n", strlen(name1));

   //Vamos fazer a contagem sem a função

   while(name1[i] != '\0') {
      ++i;
   }
   printf("3 - size name not funcion = %d\n", i);

   return 0;
}