#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int num,i,d,n = 0;
  scanf("%d", &num);

  if (num >= 2 && num <= 1000000) {
    for(i = 2; i <= num; i++) {
      if (num % i == 0) {
        n++;
      }
    }
    
  }

  printf("\n%d, %d, %d, %d", num,i,d,n);

  return 0;
}