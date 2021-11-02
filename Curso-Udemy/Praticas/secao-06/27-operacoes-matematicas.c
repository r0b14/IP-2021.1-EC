#include <stdio.h>
#include <string.h>

int main() {

   int x,y;
   int soma, sub, div, mod, quadr, multi;

   printf("Digite o valor de x= ");
   scanf("%d", &x);
   printf("Digite o valor de y= ");
   scanf("%d", &y);

   //Processamento
   soma = x + y;
   printf("%d + %d = %d\n", x,y,soma);

   sub = x - y;
   printf("%d - %d = %d\n", x,y,sub);

   multi = x * y;
   printf("%d X %d = %d\n", x,y,multi);

   div = x / y;
   printf("%d / %d = %d\n", x,y,div);

   mod = x % y;
   printf("%d %/ %d = %d\n", x,y,mod);

   quadr = x*x;
   printf("%d X %d = %d\n", x,x, quadr);

   return 0;
}