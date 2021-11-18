#include <stdio.h>
#include <string.h>
#include <math.h>

#define SIZE_MAT 1000

int main() {

   int index=0, i=0, j=0, cont=0, cont1=0, aux=0;
   char text[SIZE_MAT]={NULL}, text1[SIZE_MAT]={NULL};

   scanf(" %[^\n]\n",text);
   scanf(" %[^\n]",text1);

   while(text1[index] != NULL) {
      index++;
      cont++;
   }
   index = 0;
   while(text[index+cont-1] != NULL) {
      i=index;
      for(j=0; j<cont ;j++) {
         if(text1[j] == text[i]) {
            i++;
            aux = 0;
         }
         else {
            j=cont;
            aux = 1;
         }
      }
      if(aux==0) {
         cont1++;
      }
      index++;
   }
   printf("%d", cont1);
   return 0;
}