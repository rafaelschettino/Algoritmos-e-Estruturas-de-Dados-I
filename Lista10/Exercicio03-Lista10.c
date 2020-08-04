#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float leLado();
float perimetro(float x);
void escreva(float perim);

int main()
{
    apresentacao();
    float x = leLado();
    float perim = perimetro(x);
    escreva(perim);
}

void apresentacao()
{
    printf("\nBem-Vindo, USUARIO!");
    printf("\nEsse programa calcula o perimetro de um quadrado!\n");
}//fim apresentacao

float leLado()
{
    float lado;
    printf("\nDetermine o lado do quadrado: ");
    scanf("%f", &lado);
    return lado;
}

float perimetro(float x)
{
    return x * 4;
}

void escreva(float perim)
{
    printf("\nPerimetro = %.2f", perim);
}
