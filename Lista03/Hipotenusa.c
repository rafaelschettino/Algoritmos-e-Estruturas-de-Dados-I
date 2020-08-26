#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\t \t \t Descobrir o valor da hipotenusa\n");
    double a;   //Primeiro cateto
    double b;   //Segundo cateto
    double c;   //Hipotenusa
    double a1;  //a^2
    double b1;  //b^2
    double c1;  //a^2 + b^2
    
    printf("Digite o valor do primeiro cateto:\n");
    scanf("%lf",&a);
    printf("Digite o valor do segundo cateto:\n");
    scanf("%lf",&b);
    a1 = pow(a,2);
    b1 = pow(b,2);
    c1 = a1 + b1;
    c= sqrt(c1);
    printf("O valor da hipotenusa e:%lf\n", c);

    return 0;
}
