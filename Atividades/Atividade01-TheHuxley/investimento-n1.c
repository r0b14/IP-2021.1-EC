#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
  int rPf, lk;
  scanf ("%d %d", &rPf, &lk);

  if ((rPf < lk) || (rPf%100) > (rPf-lk) || (rPf < 100 && lk > 0))
    printf ("Pedro vai ter que fugir\n");
  else if (rPf >= lk) {
    if ((rPf%100) == 0) {
      if ((lk%100) == 0) {
    printf ("Esta pago\n");
    printf ("Sobrou %d\n", (rPf - lk));
    }
    else if ((lk%100)!=0) {
    printf ("Pegou mais\n");
    printf ("Esta pago\n");
    printf ("Sobrou %d\n", rPf-(lk+(100-lk%100)));
    }
  }
    else if ((rPf > 100) && ((rPf%100)!=0)) {
      if((rPf - lk) > 100) {
        if (lk%100 != 0) {
          printf ("Pegou mais\n");
          printf ("Esta pago\n");
          printf ("Sobrou %d\n", rPf-lk-(100-lk%100));
        }
        else if (lk%100 == 0) {
          printf("Esta pago\n");
          printf("Sobrou %d\n", rPf - lk);
        }
      }
      else if ((rPf - lk) <= 100) {
        printf ("Pegou mais\n");
        printf ("Esta pago\n");
        printf ("Sobrou %d\n", rPf%100);
      }
    }
  }
  return 0;
} 