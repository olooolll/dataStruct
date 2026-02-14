#include <stdlib.h>
#include <stdio.h>
#include "Curso.h"
#include "Aluno.h"


int main(){
    Curso *c1 = criarCurso("ESDD", "ESTRUTURA DE DADOS");
    Curso *c2 = criarCurso("ESDD", "ESTRUTURA DE DADOS");

    printf("------------- Curso -------------\n\n");

    printf("%s\n", obterSigla(c1));
    printf("%s\n", obterNome(c1));
    liberarCurso(c1);

    printf("\n\n------------- Aluno -------------\n\n");

    Aluno *a1 = criarAluno("sc012345", "Guilherme", c2);

    printf("%s\n", obterNomeAluno(a1));
    printf("%s\n", obterProntuario(a1));
    Curso *c3 = obterCurso(a1);

    printf("%s\n", obterSigla(c3));
    printf("%s\n", obterNome(c3));
    
    liberarCurso(c3);
    liberarAluno(a1);
    

    printf("\n\n\n\n\n\n");
    return 0;
}