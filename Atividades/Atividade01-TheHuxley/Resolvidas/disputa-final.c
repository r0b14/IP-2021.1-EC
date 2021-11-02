#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int id;
  printf("qual o id do robo: ");
  scanf("%d", &id);

  if (id == 0 )
  {
    printf("\nrosa rosa verde rosa");
  } else if (id == 1) {
    printf("\nverde rosa verde rosa");
  } else if (id == 2) {
    printf("\nverde verde verde rosa");
  } else if (id == 3) {
    printf("\nrosa verde verde rosa");
  } else if (id == 4) {
    printf("\nrosa rosa rosa verde");
  } else if (id == 5) {
    printf("\nverde rosa rosa verde");
  } else if (id == 6) {
    printf("\nverde verde rosa verde ");
  } else if (id == 7) {
    printf("\nrosa verde rosa verde");
  } else if (id == 8) {
    printf("\nverde verde verde verde");
  } else if (id == 9) {
    printf("\nrosa rosa rosa rosa");
  } else if (id == 10) {
    printf("\nrosa rosa verde verde");
  }  else if (id == 11) {
    printf("\nverde verde rosa rosa ");
  } else {
    printf("\nNao ha nada");
  }

  return 0;
}