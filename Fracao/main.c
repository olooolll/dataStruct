#include <stdlib.h>
#include <stdio.h>
#include "Fracao.h"

int main(){
    Fracao *f1 = criarFracao(1,2);
    printf("%d/%d\n\n", obterNumerador(f1), obterDenominador(f1));

    return 0;
}