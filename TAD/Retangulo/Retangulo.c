#include <stdlib.h>
#include <stdio.h>
#include "Retangulo.h"


typedef struct retangulo{
    float altura, largura;
};

Retangulo *criarRetangulo(float a, float l){
    Retangulo *r = malloc(sizeof(Retangulo));
    
    if(a == l) return r;
    if(r != NULL){
        r->altura = a;
        r->largura = l;

    }
    return r;

};

float calcularArea(Retangulo *r){
    if(r != NULL) return r->altura * r->largura;

};

float calcularPerimetro(Retangulo *r){
    if(r != NULL) return 2 * (r->altura + r->largura);

};

void liberarRetangulo(Retangulo *r){
    free(r);

};