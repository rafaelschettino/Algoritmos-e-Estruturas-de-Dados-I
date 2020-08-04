#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float leituraValores();
void escreva(float m);

int main()
{
    apresentacao();
    float m = leituraValores();
    escreva(m);
}//fim main

void apresentacao()
{
    printf("Bem-vindo, USUARIO!\n");
    printf("Esse programa apresenta o maior valor dentre um conjunto de reais lidos!\n");
    printf("Obs: Digite [0] para encerrar a leitura.\n");
}//fim apresentacao

float leituraValores()
{
    const int flag = 0;
    float valor;
    float maior;
    printf("\nInsira os valores\n");
    scanf("%f", &valor);
    maior = 1;
    while(valor != flag){
        if(valor > maior){
            maior = valor;
        }//fim if
        scanf("\n%f", &valor);
    }//fim flag
    return maior;
}//fim leituraValores

void escreva(float m)
{
    printf("\nMaior valor lido = %.2f", m);
}//fim escreva
