//Criando um programa que solicita a idade do usuário.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variável que guardará a idade do usuário.
    int idade;

    //função que exibirar a mensagem solicitando.
    printf("Qual a sua idade = ");
    // função que receberá o dado do tipo int.
    scanf("%d", &idade);
    // Saída do resultado final, mais um sinal sonoro \a
    printf("Sua idade e = %d\n\a", idade);
    return 0;
}
