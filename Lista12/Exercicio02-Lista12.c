#include <stdio.h>
#include <stdlib.h>

void leValor(float *x);
void Maior(float *a, float *b, float *m);
void escreva(float *m);

int main()
{
    float a;
    float b;
    float m;
    leValor(&a);
    leValor(&b);
    Maior(&a, &b, &m);
    escreva(&m);
}//fim main()

void leValor(float *x)
{
    printf("Entre com valor:\n");
    scanf("%f", x);
}//fim leValores()

void Maior(float *a, float *b, float *m)
{
    *m = *a;
    if(*b > *m) *m = *b;
}//fim Maior()

void escreva(float *m)
{
    printf("\nMaior valor = %f", *m);
}//fim escreva()
