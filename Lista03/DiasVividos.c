#include <stdio.h>
#include <stdlib.h>

int main()
{
    float idade;
    float dias;
    printf("Calculo de dias vividos por uma pessoa ate seu ultimo aniversario\n");
    printf("Considerando que cada ano tem 365 dias\n");
    printf("Determine a idade em anos\n");
    scanf("%f", &idade);
    dias = idade * 365;
    printf("Ate seu ultimo aniversario, essa pessoa viveu um total de dias igual a: %f", dias);

    return 0;
}
