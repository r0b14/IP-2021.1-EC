#include <stdio.h>
#include <stdlib.h>

int main() {

  int num,dia,mes,ano;
  printf("Digite um numero de 1 a 7\n");
  scanf("%d", &num);
  
  if (num >= 1 && num <= 7)
  { 
    switch(num)
    {
      case 1:
        printf("Domingo\n");
        printf("Digite a data= ");
        scanf("%d/%d/%d",&dia,&mes,&ano);
          if (mes == 1 || mes == 01) {
            printf("Dia %d de Janeiro de %d\n", dia, ano);
          } else if (mes == 2 || mes == 02) {
            printf("Dia %d de Fevereiro de %d\n", dia, ano);
          } else {
            printf("Dia %d de qualquer outro mes de %d\n", dia, ano);
          }
           break;
      case 2:
        printf("Segunda\n");
          break;
      case 3:
        printf("Terca\n");
          break;
      case 4:
        printf("Quarta\n");
          break;
      case 5:
        printf("Quinta\n");
          break;
      case 6:
        printf("Sabado\n");
          break;
    }
  }
  else 
  {
    printf("valor invalido");
  }

  return 0;
}