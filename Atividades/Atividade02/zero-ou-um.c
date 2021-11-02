#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Digite 0 ou 1: ");
    scanf("%d",&a);
    printf("\nDigite 0 ou 1: ");
    scanf("%d",&b);
    printf("\nDigite 0 ou 1: ");
    scanf("%d",&c);

    if (a == b && a == c && b == c)
    {   
        printf("\nNinguem ganhou");
    } else if (a != b && a != c && b == c)
    {
        printf("\nAlice ganhou");
    } else if (a != b && a == c && b != c)
    {
         printf("\nBeto ganhou");
    } else {
         printf("\nClara ganhou");
    }
     
    return 0;
}