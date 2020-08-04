#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float x;

    printf("Resolucao de uma equacao de primeiro grau\n");
    printf("Determine o valor de a:\n");
    scanf("%f", &a);
    printf("Determine o valor de b:\n");
    scanf("%f", &b);
    x = -b / a;
    printf("O valor de X=%f", x);

    return 0;
}
