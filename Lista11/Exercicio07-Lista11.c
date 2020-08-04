#include <stdio.h>
#include <stdlib.h>

int leitura(int n);
int fatorial(int n);
void escreva(int resultado);

int main()
{
    int n = leitura(n);
    int resultado = fatorial(n);
    escreva(resultado);
}//fim main

int leitura(int n)
{
    int x;
    do{
        printf("De qual numero voce deseja calcular o fatorial?\n");
        scanf("\n%d", &x);
        if(x < 0) printf("\nTente novamente!Voce deve escolher um valor natural!");
    }while(x < 0);
    return x;
}//fim leitura

int fatorial(int n)
{
    int fat;
    if(n == 0) fat = 1;
    else fat = n * fatorial(n - 1);
    return fat;
}//fim fatorial

void escreva(int resultado)
{
    printf("\nFatorial = %d", resultado);
}//fim escreva
