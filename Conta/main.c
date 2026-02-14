#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Conta.h"

int main(){
    printf("----------- Conta -----------\n\n");

    Conta *c1 = criarConta(123, 100.00);
    Conta *c2 = criarConta(456, 10.00);
    printf("Criar conta C1\n");
    printf("Conta %d | Saldo %.2f\n\n", obterNum(c1), obterSaldo(c1));

    printf("Depositar 100 conta C1\n");
    depositar(100, c1);
    printf("Conta %d | Saldo %.2f\n\n", obterNum(c1), obterSaldo(c1));

    printf("Sacar 50 conta C1\n");
    sacar(50, c1);
    printf("Conta %d | Saldo %.2f\n\n", obterNum(c1), obterSaldo(c1));

    printf("Transferir 75 conta C1 para C2\n");
    transferi(75, c1,c2);
    printf("Conta %d | Saldo %.2f\n\n", obterNum(c2), obterSaldo(c2));

    liberarConta(c1);
    liberarConta(c2);
    

}