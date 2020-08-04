#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Conversao de Farenheit em Celsius\n");
    double f;
    double a;
    double n;
    double b;
    double c;
    printf("Digite a temperatura em Farenheit\n");
    scanf("%lf", &f);
    a = 5;
    n = 9;
    b = 32;
    c = a / n * (f - b);
    printf("A temperatura em Celsius é:%lf\n", c);

    return 0;
}
