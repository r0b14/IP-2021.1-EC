#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  int temp;
  scanf("%d", &temp);

  if (temp < 0) {
    printf("Meme man quebrou o tempo! De volta ao transito :(");
  } else if (temp >= 0) {
        if( temp < 62) {
        printf("...Ainda no transito...\n");
      } else if (temp >= 3720 && temp < 3744) {
        printf("Stonks has been born!\n");  
      } else {
        printf("Lar doce lar\n");
      }
    }
  return 0;
}