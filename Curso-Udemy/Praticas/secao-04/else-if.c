#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() 
{
  int idade;
  printf("\nQual eh a sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 18)
    printf("\nVoce eh de menor.\n");
      else 
        printf("\nVoce eh grandinho demais.\n");

  return 0;
}