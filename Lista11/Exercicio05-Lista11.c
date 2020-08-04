#include <stdio.h>
#include <stdlib.h>

int soma(int n, int m);
void escreva(int resultado);

int main()
{
    int n;//limite inferior
    int m;//limite superior
    printf("Determine o seu limite inferior: ");
    scanf("%d", &n);
    printf("\nDetermine o seu limite superior: ");
    scanf("%d", &m);
    int resultado = soma(n, m);
    escreva(resultado);
}//fim main

int soma(int n, int m)
{
    int somatorio;
    if(n > m) somatorio = 0;
    else somatorio = n + soma(n + 1, m);
    return somatorio;
}//fim soma

void escreva(int resultado)
{
    printf("\nSoma = %d", resultado);
}//fim escreva
