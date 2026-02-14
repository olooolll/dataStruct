typedef struct curso Curso;

Curso *criarCurso(char *s, char *n);
char *obterSigla(Curso *c);
char *obterNome(Curso *c);
void liberarCurso(Curso *c);