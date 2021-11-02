#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ATIVIDADE 06
/*
int main()
{
    float temperature, converted;
    printf("Digite a temperatura em Celsius = ");
    scanf("%f", &temperature);
    converted = (temperature*9/5)+32;
    printf("\nA temperatura em Fahrenheit = %.1f\n", converted);

    return 0;
}
*/
// ATIVIDADE 07

/*
int main()
{
    float temperature, converted;
    printf("Digite a temperatura em Fahrenheit = ");
    scanf("%f", &temperature);
    converted = 5*((temperature-32)/9);
    printf("\nA temperatura em Celsius = %.2f\n\a", converted);

    return 0;
}
*/

// ATIVIDADE 08
int main() 
{
    float temperature, converted;
    printf("\nDigite a temperatura em Kelvin = ");
    scanf("%f", &temperature);
    converted = temperature - 273.15;
    printf("\nA temperatura em Celsius = %.2f", converted); 

    return 0;
}