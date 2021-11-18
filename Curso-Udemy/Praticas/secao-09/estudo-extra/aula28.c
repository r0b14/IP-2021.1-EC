#include <stdio.h>

float area_Ret(float base, float altura) {
   float area = base * altura;
   return area;
}

int main() {
   
   float base, altura;

   printf("Digite a base= ");
   scanf("%f",&base);
   printf("Digite a altura= ");
   scanf("%f",&altura);

   printf("Area total = %.1f m2", area_Ret(base, altura));

   return 0;
}