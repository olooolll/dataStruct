typedef struct conta Conta;

Conta *criarConta(int n, float s);
float depositar(float s, Conta *c);
float sacar(float s, Conta *c);
bool transferi(float s, Conta *remetente, Conta *destinatario);
int obterNum(Conta *c);
float obterSaldo(Conta *c);
void liberarConta(Conta *c);