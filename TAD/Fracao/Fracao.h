typedef struct fracao Fracao;

Fracao *criarFracao(int n, int d);
Fracao *somarFracao(Fracao *f1, Fracao *f2);
int obterNumerador(Fracao *f);
int obterDenominador(Fracao *f);