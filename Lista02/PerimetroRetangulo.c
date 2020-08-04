#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b;
    float h;
    float c;
    printf("\t \t \t Calculo do perimetro de um retangulo\n");
    printf("Insira a altura do retangulo\n");
    scanf("%f", &h);
    printf("Insira a base do retangulo\n");
    scanf("%f", &b);

    float p = 2 * b + 2 * h;
    printf("O perimetro do retangulo vale: %f", p);

    scanf("%f", &c);

    return 0;
}
