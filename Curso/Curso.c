#include <stdlib.h>
#include <stdio.h>
#include "Curso.h"

typedef struct curso{
    char *sigla;
    char *nome;

};

Curso *criarCurso(char *s, char *n){
    Curso *c = malloc(sizeof(Curso));
    if(c != NULL){
        c->sigla = s;
        c->nome = n;

    }
    return c;

};

char *obterSigla(Curso *c){
    if(c != NULL) return c->sigla;

};
char *obterNome(Curso *c){
    if(c != NULL) return c->nome;
    
};

void liberarCurso(Curso *c){
    free(c);

};