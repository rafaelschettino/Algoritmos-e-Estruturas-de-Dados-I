#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    float b;
    float a;
    printf("\t \t \t Calcular a area de um retangulo\n");
    printf("Informe o valor da altura do retangulo\n");
    scanf("%f", &h);
    printf("Informe o valor da base do retangulo\n");
    scanf("%f", &b);
    a = h * b;
    printf("A area do retangulo vale: %f", a);

    return 0;
}
