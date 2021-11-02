#include <stdio.h>
#include <stdlib.h>

int main() {
  int x,y;
  printf("Digite dois numero = ");
  scanf("%d %d",&x,&y);

  if (x > y)
    printf("%d > %d",x,y);
  else if (x < y)
    printf("%d < %d",x,y);
  else
    printf("%d = %d",x,y);

  return 0;
}