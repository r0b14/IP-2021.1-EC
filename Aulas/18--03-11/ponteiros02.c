#include <stdio.h>
#include <string.h>

int main() {

   int num1 = 151584;
   int *ponteiro= &num1;

   (*ponteiro)++; //*ponteiro = *ponteiro + 1; // num +=1 ou num = num +1;
   printf("num = %d\n", num1);
   

   return 0;
}