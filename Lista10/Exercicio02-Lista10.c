#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float leReal();
float soma(float a, float b);
void resultado(float s);

int main()
{
    apresentacao();
    float a = leReal();
    float b = leReal();
    float s = soma(a, b);
    resultado(s);
}

void apresentacao()
{
    printf("\nBem-Vindo, USUARIO!\n");
    printf("Esse programa realizara a soma de dois numeros a sua escolha!\n");
}//fim apresentacao

float leReal()
{
    float valor;
    printf("\nDigite um valor: ");
    scanf("%f", &valor);
    return valor;
}//fim leReal

float soma(float a, float b)
{
    return a + b;
}

void resultado(float s)
{
    printf("\nSoma = %.2f", s);
}//fim resultado
