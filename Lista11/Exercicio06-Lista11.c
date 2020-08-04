#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int b, int n);
void escreva(int resultado);

int main()
{
    int b = 1; //base
    int n;
    printf("Determine seu ultimo valor: ");
    scanf("%d", &n);
    int resultado = soma(b, n);
    escreva(resultado);
}//fim main()

int soma(int b, int n)
{
    int somatorio;
    if(b > n) somatorio = 0;
    else somatorio = pow(b, 3) + soma(b + 1, n);
    return somatorio;
}//fim soma()

void escreva(int resultado)
{
    printf("\nSoma dos primeiros N cubos = %d", resultado);
}//fim escreva()
