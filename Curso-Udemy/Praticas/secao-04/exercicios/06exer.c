#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int x,y;
  printf("Digite dois numero = ");
  scanf("%d %d",&x,&y);

  if( x > y)
  {
    printf("%d > %d\n", x, y);
    printf("%d - %d = %d", x, y, (x-y));
  }
  else if ( x < y)
  { 
    printf("%d < %d\n", x, y);
    printf("%d - %d = %d", y, x, (y-x));
  }
  else {
    printf("%d = %d\n");
    printf("%d", (x-y));
    }

    return 0;
}