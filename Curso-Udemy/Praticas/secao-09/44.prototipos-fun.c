#include <stdio.h>
#include <string.h>

int soma(int num1, int num2) {
   return num1 + num2;
}

int main() {

   int n1,n2,som;
   printf("1 num = ");
   scanf("%d", &n1);
   printf("2 num = ");
   scanf("%d", &n2);

   som = soma(n1,n2);
   printf("function soma = %d + %d = %d\n",n1,n2,som);


   return 0;
}