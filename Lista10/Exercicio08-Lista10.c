#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void apresentacao();
char leGenero();
float leAltura();
float calculo(char genero, float altura);
void escreva(float resultado);

int main()
{
    apresentacao();
    char genero = leGenero();
    float altura = leAltura();
    float resultado = calculo(genero, altura);
    escreva(resultado);
}//fim apresentacao

void apresentacao()
{
    printf("Bem-vindo, USUARIO!");
    printf("\nEsse programa calcula o peso ideal de uma pessoa!\n");
}//fim apresentacao

char leGenero()
{
    char g;
    printf("\nDetermine o genero\n");
    printf("\nEscreva [M]/[F]");
    fflush(stdin);
    scanf("\n%c", &g);
    g = toupper(g);
    return g;
}//fim leGenero

float leAltura()
{
    float h;
    printf("\nDetermine a altura: ");
    scanf("%f", &h);
    return h;
}//fim lePeso

float calculo(char genero, float altura)
{
    float pesoideal;
    if(genero == 'F'){
        pesoideal = (62.1 * altura) - 44.7;
    }//fim if
    else if(genero == 'M'){
        pesoideal = (72.7 * altura) - 58.0;
    }//fim do else if
    return pesoideal;
}//fim calculo

void escreva(float resultado)
{
    printf("\nPeso ideal = %.2f", resultado);
}//fim escreva
