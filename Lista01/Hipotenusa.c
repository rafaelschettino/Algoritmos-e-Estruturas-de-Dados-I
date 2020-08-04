#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Descobrir o valor da hipotenuza\n");
    double a;
    double b;
    double c;
    double a1;
    double b1;
    double c1;
    printf("Digite o valor do primeiro cateto:\n");
    scanf("%lf",&a);
    printf("Digite o valor do segundo cateto:\n");
    scanf("%lf",&b);
    a1 = pow(a,2);
    b1 = pow(b,2);
    c1 = a1 + b1;
    c= sqrt(c1);
    printf("O valor da hipotenusa é:%lf\n",c);

    return 0;
}
