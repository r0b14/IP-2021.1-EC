#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int valor;
  int x,y,z, x0, x1, y0, y1, z0, z1;
  scanf("%d", &valor);
  scanf("%d %d %d %d %d %d", &x0, &x1, &y0, &y1, &z0, &z1); //Recebendo os Valores
    x>=x0, x<=x1, y>=y0, y<=y1, z>=z0, z<=z1;
  if(x0 > x1 || y0 > y1 || z0 > z1 || valor < x0+y0+z0) {
    printf("N");
  }
  else {
    x=x0, y=y0, z=z0;
    while(x+y+z != valor && x != x1) {
        if (y == y1) {
          if(z == z1) {
            x++;
          }
          else {
            z++;
          }
        }
        else {
          y++;
        }
      }
      if (x+y+z != valor) {
        printf("N");
      }
      else {
        printf("S\n%d %d %d",x,y,z);
      }
  }
  return 0;
}