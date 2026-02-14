#include "Curso.h";

typedef struct aluno Aluno;

Aluno *criarAluno(char *p, char *n, Curso *c);
char *obterProntuario(Aluno *a);
char *obterNomeAluno(Aluno *a);
Curso *obterCurso(Aluno *a);
void liberarAluno(Aluno *a);