#include <stdlib.h>
#include <stdio.h>
#include "Fracao.h"

struct fracao {
    int numerador, denominador;
};

Fracao *criarFracao(int n, int d){
    Fracao *f = malloc(sizeof(Fracao));
    if(f != NULL){
        f->numerador = n;
        f->denominador = d;

    }
    return f;

}

Fracao *somarFracao(Fracao *f1, Fracao *f2){
    int n = (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador);
    int d = f1->denominador * f2->denominador;

    return criarFracao(n,d);

}

int obterNumerador(Fracao *f){
    if(f != NULL) {
        return f->numerador;
    }
    return 1;

}

int obterDenominador(Fracao *f){
    if(f != NULL) {
        return f->denominador;
    }
    return 1; 
}