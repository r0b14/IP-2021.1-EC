#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()

{

    /* Criando vari�veis que ir�o armazenar hor�rios.
     declarei 0 pois o dia come�a em 0 min.  */
    int horas = 0, minutos = 0;
    int conversor, nova_hora;

    //Apresentando ao usu�rios para coletar dados.
    printf("Que horas sao: ");
    scanf("%d", &horas);
    printf("\nQuais sao os minutos: ");
    scanf("%d", &minutos);

    // Convertendo e manuseando os dados recebidos.
    conversor = horas * 60;
    nova_hora = conversor + minutos;

    // Apresentando resultado ao usu�rio junto a uma notifica��o de �udio.
    printf("\nSe passaram %d minutos desde o inicio do dia.\a\n", nova_hora);


    return 0;

}
