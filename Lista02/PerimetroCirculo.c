#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float p;
    float a;
    p = 3.14;
    printf("\t \t \t Calcular o perimetro de um circulo\n");
    printf("\t \t \t Obs:Foi considerado pi igual a 3.14\n");
    printf("Insira o valor do raio do circulo\n");
    scanf("%f", &r);

    float perimetro = 2 * r * p;
    printf("O perimetro desse circulo vale:%f", perimetro);

    scanf("%f", &a);

    return 0;
}
