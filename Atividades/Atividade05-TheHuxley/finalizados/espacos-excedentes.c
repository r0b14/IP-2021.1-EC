#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE_MAT 301

int main() {

   int index = 0;
   char text[SIZE_MAT] = {NULL};
   scanf("%[^\n]", text);
   
   for(index = 0; index < SIZE_MAT; index++){
      if(text[index]== ' ' && text[index-1]== ' ') {
         index = index;
      }
      else {
         printf("%c", text[index]);
      }
   }   
   return 0;
}