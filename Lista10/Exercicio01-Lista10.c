#include <stdio.h>
#include <stdlib.h>

void apresentacao();
float levalor();
float maior(float a, float b);

void main()
{
    apresentacao();
    float x = levalor();
    float y = levalor();
    printf("\nMaior = %f", maior(x, y));

}//fim main

void apresentacao()
{
    printf("\nOla, USUARIO!");
    printf("\nEsse programa te mostrara o maior entre dois valores lidos!");
}//fim apresentacao

float levalor()
{
    float valor;
    printf("\nEntre com um valor\n");
    scanf("%f", &valor);

    return valor;
}//fim levalor

float maior(float a, float b)
{
    float m;
    if(a > b)
        m = a;
    else
        m = b;
    return m;
}
