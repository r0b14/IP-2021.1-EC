#include <stdio.h>

int main () 
{
  int a,b,c,d,e,f,g,h;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&f);
  scanf("%d",&g);
  scanf("%d",&h);

  if((a==c)||(a==e)||(a==g)) {
    printf("Alguem nao esta satisfeito...");
  }
  else if((b==a)||(b==d)) {
    printf("Alguem nao esta satisfeito...");
  }
  else if((g==h)&&(g!=c)) {
    printf("Alguem nao esta satisfeito...");
  }
  else if((h!=g)&&(h!=f)) {
    printf("Alguem nao esta satisfeito...");
  }
  else if((c==e)&&(f!=a)) {
    printf("Alguem nao esta satisfeito...");
  }
  else if((c!=e)&&(f==a)) {
    printf("Alguem nao esta satisfeito...");
  } else {
    printf("Conseguimos times suficientes!");
  }
  return 0;
  
}