#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE_MAT 301

int main() {

   int index = 0, i;
   char text[SIZE_MAT];
   fgets(text,(SIZE_MAT-1), stdin);
   int str_size = strlen(text);
   char textAux[str_size];

   //Robson  th  .
   while(text[index] != '\0') {
      if(text[index] != ' ') {
         textAux[index] = text[index];
         printf("%d -> %s\n",index,text[index]);
         printf("%d -> %s\n",index, textAux[index]);
      }
      else if(text[index] == ' ') {
         printf("else 1 - %d -> %s\n",index, text[index]);
         if(text[index] == text[index-1]) {
            textAux[index] = ' ';
         printf("else if 2 - %d -> %s\n",index, textAux[index]);
         }
      }
      ++index;
   }

   printf("%s", textAux);

   return 0;
}