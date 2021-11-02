#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  int id1, id2, id3, id4, id5;
  int peso1, peso2, peso3, peso4, peso5, rGeral;
  int contador1,contador2,contador3,contador4,contador5;
  int somador;

  scanf("%d %d", &id1, &peso1);
  scanf("%d %d", &id2, &peso2);
  scanf("%d %d", &id3, &peso3);
  scanf("%d %d", &id4, &peso4);
  scanf("%d %d", &id5, &peso5);
  scanf("%d", &rGeral);

  contador1= id1 * peso1;
  contador2= id2 * peso2;
  contador4= id3 * peso3;
  contador4= id4 * peso4;
  contador5= id5 * peso5;

   if (id1 == id2 || id1 == id3 || id1 == id4 || id1 == id5 ||
      id2 == id3|| id2 == id4 || id2 == id5 || id3 == id4 ||
      id3 == id5 || id4 == id5) {
         printf("\nUEPAAA TEMOS UM RATINHO");
   }
   else {
      //TESTEANDO A COND 1 NO ID 1
      if ((id1%2 == 0) && ((id1%3 == 0) ||(id1%5 == 0) || (id1%7 == 0)))
      {
         contador1 = id1 * (peso1*2);
         printf("\n%d 1", contador1);
      }
      else if ((id1*peso1%2 != 0) && ((id1%11 == 0) || (id1%13 == 0) ||(id1%17 == 0) || (id1%19 == 0)))
      {
        contador1 = contador1/2;
         printf("\n%d 2", contador1);
      }
      else if ((id1%2 == 0) && (id1%17 == 0))
      {
         contador1 = 0;
         printf("\n%d 3", contador1);
      }
      //TESTEANDO A COND 2 NO ID 2
      if ((id2%2 == 0) && ((id2%3 == 0) ||(id2%5 == 0) || (id2%7 == 0)))
      {
         contador2 = id2 * (peso2*2);
         printf("\n%d 4", contador2);
      }
      else if ((id2*peso2%2 != 0) && ((id2%11 == 0) || (id2%13 == 0) ||(id2%17 == 0) || (id2%19 == 0)))
      {
         contador2 = contador2/2;
         printf("\n%d 5", contador2);
      }
      else if ((id2%2 == 0) && (id2%17 == 0))
      {
         contador2 = 0;
         printf("\n%d 6", contador2);
      }
         
      //TESTEANDO A COND 3 NO ID 3
      if ((id3%2 == 0) && ((id3%3 == 0) ||(id3%5 == 0) || (id3%7 == 0)))
      {
         contador3 = id3 * (peso3*2);
         printf("\n%d 7", contador3);
      }  
      else if ((id3*peso3%2 != 0) && ((id3%11 == 0) || (id3%13 == 0) ||(id3%17 == 0) || (id3%19 == 0)))
      {
         contador3 = contador3/2;
         printf("\n%d 8", contador3);
      }
      else if ((id3%2 == 0) && (id3%17 == 0))
      {
         contador3 = 0;
         printf("\n%d 9", contador3);
      }

      //TESTEANDO A COND 4 NO ID 4
      if ((id4%2 == 0) && ((id4%3 == 0) ||(id4%5 == 0) || (id4%7 == 0)))
      {
         contador4 = id4 * (peso4*2);
         printf("\n%d 10", contador4);
      }
      else if ((id4*peso4%2 != 0) && ((id4%11 == 0) || (id4%13 == 0) ||(id4%17 == 0) || (id4%19 == 0)))
      {
         contador4 = contador4/2;
         printf("\n%d 11", contador4);
      }
      else if ((id4%2 == 0) && (id4%17 == 0))
      {
         contador4 = 0;
         printf("\n%d 12", contador4);
      }
         
      //TESTEANDO A COND 5 NO ID 5
      if ((id5%2 == 0) && ((id5%3 == 0) ||(id5%5 == 0) || (id5%7 == 0)))
      {
         contador5 = id5 * (peso5*2);
         printf("\n%d 13", contador5);
      }
      else if ((id5*peso5%2 != 0) && ((id5%11 == 0) || (id5%13 == 0) ||(id5%17 == 0) || (id5%19 == 0)))
      {
         contador5 = contador5/2;
         printf("\n%d 14", contador5);
      }
      else if ((id5%2 == 0) && (id5%17 == 0))
      {
         contador5 = 0;
         printf("\n%d 15", contador5);
      }

   somador = contador1+contador2+contador3+contador4+contador5;
         printf("\n%d 16", contador5);

   if (somador == rGeral) {
         printf("\nbarra limpa, khan");
         printf("\n%d 17", contador5);
    } else {
         printf("\n%d 18", contador5);
         printf("\nUEPAAA TEMOS UM RATINHO");
    }
   }

  return 0;
}