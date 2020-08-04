#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    float a;
    float peso;
    float z;
    printf("\t \t \t Calculo de de peso ideal masculino\n");
    printf("Digite a altura\n");
    scanf("%f", &h);
    a = 72.7 * h;
    peso = a - 58.0;
    printf("O peso ideal para essa pessoa e: %f", peso);

    scanf("%f", &z);

    return 0;
}
