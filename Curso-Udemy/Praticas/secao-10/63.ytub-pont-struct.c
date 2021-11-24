#include <stdio.h>
#include <stdlib.h>

struct horario {
   int hora;
   int minuto;
   int segundo;
};

int main() {

   struct horario agora, *depois;
   depois = &agora;

   depois->hora = 20; //(*depois).hora = 20;
   depois->minuto = 20; //(*depois).minuto = 20;
   depois->segundo = 20; //(*depois).segundo = 20;
   
   printf("%d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);
   
   return 0;
}