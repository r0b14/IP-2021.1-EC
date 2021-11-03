#include <stdio.h>
#include <string.h>

int main() {

   // A função sprintf forma strings de maneira dinamica, semelhante ao printf
   // Cria a string e armazena em uma variavel, nesse caso, frase[55]
   int idade_r0b=25;
   char namer0b[20]="Robson Thiago";
   char frase[55];

   sprintf(frase, "%s tem %d e eh isso.", namer0b, idade_r0b);
   printf("%s\n", frase);

   // Elaborando um programa melhor que colete informacoes do usuario

   printf("\n-------------------------\n");
   printf("Digite o seu nome\n");
   fgets(namer0b, 19, stdin);
   printf("Digite a sua idade\n");
   scanf("%d", &idade_r0b);

   //sprintf(string destino, "simulando o printf", paramentros)
   sprintf(frase, "ola %s, td bem? sua idade eh %d", namer0b, idade_r0b);
   printf("%s", frase);

   return 0;
}