#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float h;    //Altura do retangulo
    
    printf("\t \t \t Calculo do perimetro de um retangulo\n");
    printf("Insira a altura do retangulo\n");
    scanf("%f", &h);
    printf("Insira a base do retangulo\n");
    scanf("%f", &base);

    float perimetro = 2 * base + 2 * h;
    printf("O perimetro do retangulo vale: %f", perimetro);

    return 0;
}
