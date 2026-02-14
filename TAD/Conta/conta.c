#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Conta.h"

typedef struct conta{
    int num;
    float saldo;

};

Conta *criarConta(int n, float s){
    Conta *c = malloc(sizeof(Conta));
    if(c != NULL){
        c->num = n;
        c->saldo = s;

    }
    return c;

};

float depositar(float s, Conta *c){
    if(c != NULL){
        c->saldo += s;
    }
    return obterSaldo(c);

};

float sacar(float s, Conta *c){
    if(c != NULL){
        if(obterSaldo(c) > s){
            c->saldo = obterSaldo(c) - s;
            return s;
        }

    }

    return 0;
};

bool transferi(float s, Conta *remetente, Conta *destinatario){
    if(remetente != NULL && destinatario != NULL){
        float dinheiro = sacar(s, remetente);
        
        if(dinheiro){
            depositar(dinheiro,destinatario);
            return true;
        
        }
        
    }
    return false;

};

int obterNum(Conta *c){
    if(c != NULL) return c->num;

};

float obterSaldo(Conta *c){
    if(c != NULL) return c->saldo;
};

void liberarConta(Conta *c){
    free(c);
};