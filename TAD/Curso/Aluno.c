#include <stdlib.h>
#include <stdio.h>
#include "Curso.h"
#include "Aluno.h"


typedef struct aluno {
    char *prontuario;
    char *nome;
    Curso *curso;

};

Aluno *criarAluno(char *p, char *n, Curso *c){
    Aluno *a= malloc(sizeof(Aluno));
    if(a != NULL){
        a->prontuario = p;
        a->nome = n;
        a->curso = c;

    }
    return a;

};

char *obterProntuario(Aluno *a){
    if(a != NULL) return a->prontuario;

};

char *obterNomeAluno(Aluno *a){
    if(a != NULL) return a->nome;

};

Curso *obterCurso(Aluno *a){
    if(a != NULL) return a->curso;

};

void liberarAluno(Aluno *a){
    free(a);

};