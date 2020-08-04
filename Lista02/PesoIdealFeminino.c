#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;
    float a;
    float peso;
    float z;
    printf("\t \t \t Calculo peso ideal feminino\n");
    printf("Digite a altura\n");
    scanf("%f", &h);
    a = 62.1 * h;
    peso = a - 44.7;
    printf("O peso ideal para essa pessoa e:%f", peso);

    scanf("%f", &z);
    return 0;
}
