#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n,x,y,z;
  scanf("%d",&n);
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  if ((x+y+z) <= n) {
    printf("3");
  } else if (((x+y)<=n) || ((x+z)<=n) || ((y+z)<=n)) {
    printf("2");
  } else if ((x<=n) || (y<=n) || (z<=n)) {
    printf("1");
  } else {
    printf("0");
  }
  return 0;
}




























  /*
  if ((n >=0 && n <=1000) && (x >=0 && x <=1000) && (y >=0 && y <=1000) && (z >=0 && z <=1000))
  {
    if ((x >=1 && x <=1000) && (y >=1 && y <=1000) && (z >=1 && z <=1000)) {
      if ((x+y+z) <= n) {
        //printf("%d", (x+y+z));
        printf("3");
      } 
    } else if (((x+y)<=n) || ((x+z)<=n) || ((y+z)<=n) ) {
      printf("2");
    } else if ((x<=n) || (y<=n) || (z<=n)) {
      printf("1");
    }
  }
  */