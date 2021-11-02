#include <stdio.h>
#include <math.h>
 
int main() {

  int num, i, resultado = 0;
  
  printf("Digite um numero: ");
  scanf("%d", &num);
  
  for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        resultado++;
      }
  }
  
  if (resultado == 0)
      printf("%d eh um numero primo\n", num);
  else
      printf("%d nao eh um numero primo\n", num);
  
  return 0;
}