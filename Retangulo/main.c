#include <stdlib.h>
#include <stdio.h>
#include "Retangulo.h"


int main(){
    Retangulo *r = criarRetangulo(2,3);

    printf("Area = %.2f\n", calcularArea(r));
    printf("Perimetro = %.2f\n", calcularPerimetro(r));
    liberarRetangulo(r);
    printf("Liberando espasso na memória: %.2f\n", calcularPerimetro(r));


    printf("\n\n\n\n\n");
    return 0;
}