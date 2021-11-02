#include <stdio.h>
#include <string.h>

int main() {

   //Declaração de uma string;
   /*
      A linguagem C adiciona ao final da String um /0
      e podemos usar ele como verificador ou requisito p/ o termino
      da String. Ex:
      "Robson Thiago/0"
   */
   char name[50]; // 49 Caracteres + /0 = 50.

   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n");
   printf("What is your name: ");
   gets(name); //Esta função não é muito indicada p/ usar

   printf("your name is: %s\n", name);

   return 0;
}