#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  int a,n,t;
  scanf ("%d %d",&a, &n); // Recebndo valores
  n*=60;
    if (n==0) {
      t>n;
    }
    else {
      t = 0;
    }

    while(a!=0 && n!=0 && t<=n) {
      if(a%13==0) {
        a -= 60;
        if(a%60==0) {
          a += 90;
          a++;
          t++;
        }
        else {
          a++;
          t++;
        }
      }
      else {
        a++;
        t++;
      }
    }
    if (t>n) {
      printf("fui pedir comida mesmo\n");
    } else {
      printf("%d", t);
    }

  return 0;
}