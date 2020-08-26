#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;    //Altura do retangulo
    float base;
    float area;
    printf("\t \t \t Calcular a area de um retangulo\n");
    printf("Informe o valor da altura do retangulo\n");
    scanf("%f", &h);
    printf("Informe o valor da base do retangulo\n");
    scanf("%f", &base);
    area = h * base;
    printf("A area do retangulo vale: %f", area);

    return 0;
}
