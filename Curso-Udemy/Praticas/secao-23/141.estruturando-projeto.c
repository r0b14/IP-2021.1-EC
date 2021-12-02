#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h> //Sleep(segundos)
#include <time.h>

// Cliente do Banco
typedef struct {
   int codigo;
   char nome[50];
   char email[50];
   char cpf[20];
   char dataNasciento[20];
   char dataCadastro[20];
} Cliente;

// Conta bancaria
typedef struct {
   int numero;
   Cliente cliente;
   float saldo;
   float limite;
   float saldototal; //Saldo + limite
} Conta;

void menu();
void criarConta();
void infoConta(Conta conta);
void infoCliente(Cliente cliente);
void efetuarSaque();
void efetuarDeposito();
void efetuarTransferencia();
void sacar(Conta conta, float valor);
void depositar(Conta conta, float valor);
void transferir(Conta conta_origem, Conta conta_destino, float valor);
void listarContatos();
Conta buscarContaPorNumero(int numero);
float atualizarSaldoTotal(Conta conta);

static Conta contas[50];
static int contador_contas= 0;
static int contador_cleintes= 0;

int main() {

   menu();

   return 0;
}