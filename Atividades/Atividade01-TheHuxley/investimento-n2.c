#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
  int rPf, lk;
  scanf ("%d %d", &rPf, &lk);

  //SE RPF FOR MENOS QUE LK 
  if (rPf < lk)
  {
    printf ("Pedro vai ter que fugir\n");
  }
  // 
  else if ((rPf > lk || rPf == lk) && (rPf - lk >= 0))
  {
    printf ("Pedro vai ter que fugir\n");
  }
  // SE RPF >= LK E O RESTO DE RPF == 0 E LK == 0
  else if (rPf >= lk && ((rPf%100 == 0) && (lk%100 == 0)))
  {
    printf ("Esta pago\n");
    printf ("Sobrou %d\n", (lk%100));
  }

  return 0;
} 

/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, M, s;
    scanf("%d %d", &N, &M);
    if (M % 100 !=0 )
    {
        s = ((M/100)+1)*100;
    }else
    {
        s = M;
    }

    if (N == s)
    {
        printf("Esta pago\n");
        printf("Sobrou %d\n", N-s);
    }
    if (N > s)
    {
        printf("Pegou mais\n");
        printf("Esta pago\n");
        printf("Sobrou %d\n", N-s);
    }
    if (N < s)
    {
        printf("Pedro vai ter que fugir\n");
    }
}

*/