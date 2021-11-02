Enunciado:
Escreva um programa que peça ao usuário que digite três números inteiros,
correspondentes a dia , mês e ano. Teste os números recebidos, e em caso de
haver algum inválido, repita a leitura até conseguir valores que estejam na
faixa correta (dias entre 1 e 31, mês entre 1 e 12 e ano entre 1900 e 2100).
Verifique se o mês e o número de dias batem (incluindo verificação de anos
bissextos). Se estiver tudo certo imprima o número que aquele dia corresponde no
ano. Comente seu programa.
Obs: Um ano é bissexto se for divisível por 4 e não for divisível por 100,
exceto para os anos divisíveis por 400, que também são bissextos.


Solução:
Este já é um programa mais trabalhoso e exige um pouco mais de paciência e
atenção. Apresentam-se algumas possíveis soluções para o problema. A primeira
versão foi apresentada pelo Henrique Vianna na lista do curso do segundo
semestre de 1998. Como ela está muito bem feita, entrou no nosso gabarito. A
segunda versão e uma versão básica e não se garante a consistência completa da
data (entre , por exemplo, com o dia 30 de fevereiro de 1999 e o programa vai
aceitar!!). Além disto, ela faz uso de vetores, que é o assunto da próxima aula.
Assim, você so deve estudá-la se quiser adiantar o assunto. A terceira versão já
e mais avançada, realiza a leitura e testa a consistência da data em um mesmo
loop. Mas a filosofia das duas versões é a mesma: O programa testa a validade
dos dados assim que os lê, para só entao processar. A terceira versão também faz
o uso do comando goto, o que pode ser evitado, pois o mesmo efeito teria sido
alcançado usando-se uma estrutura de controle de fluxo qualquer.

Versão 1:
Esta versão foi apresentada na lista do segundo semestre de 1998 pelo Henrique
Avila Viana, da Universidade Federal de Pelotas
#include <stdio.h>
int dia_do_ano (int dia, int mes, int ano) {
int ano_bissexto, data_valida = 0; // Usadas como variaveis booleanas
int total_dias = 0;
/* Na atribuicao abaixo, se as condicoes forem satisfeitas, a variavel
recebera' um valor maior do que 0. Esta variavel sera' usada para
testes booleanos, mais abaixo... */

ano_bissexto = ( ((ano % 4 == 0) && (ano % 100 > 0)) || (ano % 400 == 0) );
  if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) // Todos os dados nas faixas validas?
if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
mes == 8 || mes == 10 || mes == 12)
data_valida = (dia <= 31); // Estes meses tem 31 dias
else
if (mes == 2) // Fevereiro e' um caso a parte...
if (ano_bissexto) // Se o ano for bissexto
data_valida = (dia <= 29); // o dia pode ir ate' 29
else
data_valida = (dia <= 28); // Senao, so' ate' 28
else
data_valida = (dia <= 30); // Se chegou aqui, e' um mes de 30 dias

if (data_valida) {

/* O switch abaixo totaliza os dias decorridos dos meses anteriores
ao digitado. Notem a ordem decrescente dos meses e a falta do
comando "break" nos cases, fazendo com que todos os meses anteriores
sejam somados... */

switch (mes) {
case 12: total_dias += 30; // do mes de novembro
case 11: total_dias += 31; // do mes de outubro
case 10: total_dias += 30; // do mes de setembro
case 9: total_dias += 31; // do mes de agosto
case 8: total_dias += 31; // do mes de julho
case 7: total_dias += 30; // do mes de junho
case 6: total_dias += 31; // do mes de maio
case 5: total_dias += 30; // do mes de abril
case 4: total_dias += 31; // do mes de marco
case 3: total_dias += ano_bissexto?29:28; // do mes de fevereiro
case 2: total_dias += 31; // do mes de janeiro
}

total_dias += dia; // Agora adicionamos os dias decorridos no mes atual
}

return (total_dias); // E retornamos o valor; retorna 0 se data invalida
}

/* ***********************************************************************
Funcao principal - faz a leitura da data a partir do teclado, chama a
nossa funcao dia_do_ano e mostra o resultado.
***********************************************************************
*/
int main() {
int d, m, a, dias = 0;

while (!dias) {
printf("Entre com dia, mes e ano no formato dd/mm/aaaa: ");
fflush (NULL);
scanf("%d/%d/%d", &d, &m, &a);

dias = dia_do_ano(d,m,a);

if (!dias)
printf ("Data invalida! Tente novamente..\n\n");
}

printf ("\n\nEsta data representa o %do. dia de %d.\n", dias, a);
return 0;
}

Versão 2: consistência da data não está boa (aceita datas erradas, como o dia 30
de fevereiro ...). Além disto, faz uso de vetores ...:
/* -------------------------------------------------------- */
/* CONTADOR DE DIAS: Versão 2 ---------------------------- */
#include <stdio.h>
int main()
{
int dia, mes, ano, i; /* Variaveis.. */
int ndias;
int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
printf("\n\n ----Contador de dias----- \n");
/* Leitura da data */
do
{
printf("\nDia: ");
scanf("%d", &dia);
} while ((dia > 31) || (dia < 1));
do
{
printf("\nMes: ");
scanf("%d", &mes);
} while ((mes > 12) || (mes < 1));
do
{
printf("\nAno: ");
scanf("%d", &ano);
} while ((ano < 1900) || (ano > 2100));
/* E isto garante que a data seja valida */
/* Agora, ao processamento ------------------------------------ */
/* Primeiro inicializamos ndias. Em seguida, somamos os dias */
/* do mes corrente e por fim somamos os dias dos meses passados */
ndias = 0;
/* Descobrindo se o ano e bissexto */
/* Caso seja, iremos somar um dia na soma final, mas somente se */
/* o mes corrente for posterior ao mes de fevereiro.. */
if ( ((ano%4) == 0) && ((ano%100) != 0) || (ano%400 == 0)) /* Se e bissexto */
if (mes > 2) ndias += 1; /* Se já passou o mes de fevereiro */
/* Computa os dias do mes corrente */
ndias += dia;
/* O mes corrente já foi contado. Portanto o contador vai ate mes-1 */
for (i=0; i< (mes-1); i++)
ndias += meses[i];
printf("\nDia Numero: %ld", ndias);
}

Versão 3: Melhora a consistência da data, mas inda faz uso de vetores:
/* -------------------------------------------------------- */
/* CONTADOR DE DIAS: Versão 3 ---------------------------- */
#include <stdio.h>
int main()
{
int dia, mes, ano, i;
long int ndias;
int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
printf("\n\n ----Contador de dias----- \n");
/* Leitura da data
Lê ate que a data seja valida */
le_data: /* Rotulo usado para o comando goto */
do
{
printf("\nEntre com a data no formato DD/MM/AA: ");
scanf("%d/%d/%d", &dia, &mes, &ano);
} while (((dia > 31) || (dia < 1)) ||
((mes > 12) || (mes < 1)) ||
((ano < 1900) || (ano > 2100)) );
/* Verificando se o ano e bissexto */
/* Caso seja, o mes de fevereiro ganha mais um dia.. */
if ( ((ano%4) == 0) && ((ano%100) != 0) || (ano%400 == 0))
meses[1] += 1;
/* Verifica a consistencia da data. Caso inconsistente volta a le_data */
if (dia > meses[mes-1]) /* DATA INCONSISTENTE!! */
{
printf("\n DATA INCONSISTENTE! \n ");
meses[1] = 28; /* Desfaz a soma de um dia no mes de fevereiro */
goto le_data;
}
/* E isto garante que a data seja valida */
/* Agora, ao processamento -----------------------*/
ndias = 0;
/* Computa os dias do mes corrente */
ndias += dia;
for (i=0; i< (mes-1); i++) /* O mes corrente já foi contado (mes-1)*/
ndias += meses[i];
printf("\nDia Numero: %ld", ndias);
}