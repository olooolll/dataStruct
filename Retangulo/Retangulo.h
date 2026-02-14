typedef struct retangulo Retangulo;

Retangulo *criarRetangulo(float a, float l);
float calcularArea(Retangulo *r);
float calcularPerimetro(Retangulo *r);
void liberarRetangulo(Retangulo *r);