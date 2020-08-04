#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double b;
    double e;
    double p;

    printf("\t \t \t Calculo de potenciacao\n");
    printf("Informe o valor da base\n");
    scanf("%lf", &b);
    printf("Informe o expoente\n");
    scanf("%lf", &e);
    p = pow(b, e);
    printf("Essa potenciacao vale: %lf", p);

    return 0;
}
