//Criando um programa que solicita a idade do usu�rio.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vari�vel que guardar� a idade do usu�rio.
    int idade;

    //fun��o que exibirar a mensagem solicitando.
    printf("Qual a sua idade = ");
    // fun��o que receber� o dado do tipo int.
    scanf("%d", &idade);
    // Sa�da do resultado final, mais um sinal sonoro \a
    printf("Sua idade e = %d\n\a", idade);
    return 0;
}
