#include <stdio.h>
#include <stdlib.h>

int leExpoente(int expoente);
float leBase(float base);
float potencia(int expoente, float base);
void escreva(float resultado);

int main()
{
    int expoente = leExpoente(expoente);
    float base = leBase(base);
    float resultado = potencia(expoente, base);
    escreva(resultado);
}//fim main

int leExpoente(int expoente)
{
    int e;
    do{
        printf("\nInsira seu expoente: ");
        scanf("%d", &e);
        if(e < 0) printf("\nValor invalido!O expoente deve ser um numero natural!");
    }while(e < 0);
    return e;
}//fim leExpoente

float leBase(float base)
{
    float b;
    printf("\nInsira sua base: ");
    scanf("%f", &b);

    return b;
}//fim leBase

float potencia(int expoente, float base)
{
    float pot;
    if(expoente == 0) pot = 1;
    else pot = base * potencia(expoente - 1, base);
    return pot;

}//fim potencia

void escreva(float resultado)
{
    printf("\nResultado da potenciacao = %f", resultado);
}//fim escreva
