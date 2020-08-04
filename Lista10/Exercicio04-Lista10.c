#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float leRaio();
float Area(float r);
void resultado(float a);

int main()
{
    apresentacao();
    float r = leRaio();
    float a = Area(r);
    resultado(a);
}

void apresentacao()
{
    printf("\nBem-vindo, USUARIO!");
    printf("\nEsse programa calcula a area de um circulo!");
    printf("\nObs: Foi considerado PI = 3.14\n");
}//fim apresentacao

float leRaio()
{
    float raio;
    printf("\nDetermine o raio do circulo: ");
    scanf("%f", &raio);
    return raio;
}//fim leRaio

float Area(float r)
{
    return r * r * 3.14;
}//fim Area

void resultado(float a)
{
    printf("\nArea do circulo = %.2f", a);
}

