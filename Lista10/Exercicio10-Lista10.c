#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int leExpoente();
float leBase();
float calculo(int expoente, float base);
void escreva(float resultado);

int main()
{
    apresentacao();
    int expoente = leExpoente();
    float base = leBase();
    float resultado = calculo(expoente, base);
    escreva(resultado);
}//fim main

void apresentacao()
{
    printf("Bem-vindo, USUARIO!\n");
    printf("Esse programa calcula a potenciacao!\n");
}//fim apresentacao

int leExpoente()
{
    int e;
    do{
        printf("\nDetermine o seu expoente: ");
        scanf("%d", &e);
        if(e < 0)
            printf("\nValor invalido!Tente novamente\n");
    }while(e < 0);
    return e;
}//fim leExpoente

float leBase()
{
    float b;
    printf("\nEscreva base: ");
    scanf("%f", &b);
    return b;
}//fim leBase

float calculo(int expoente, float base)
{
    float potencia;
    float base_aux;
    if(expoente == 0){
        potencia = 1;
    }//fim if
    if(expoente == 1){
        potencia = base;
    }//fim if
    if(expoente != 1 && expoente != 0){
        base_aux = base;
        for(int i = 2; i <= expoente; i++){
            base = base_aux * base;
        }//fim do for
        potencia = base;
    }//fim if
    return potencia;
}//fim calculo

void escreva(float resultado)
{
    printf("Resultado = %.2f", resultado);
}//fim escreva
