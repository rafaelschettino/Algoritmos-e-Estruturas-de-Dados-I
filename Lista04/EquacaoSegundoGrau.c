#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;    //Coeficiente de x^2
    float b;    //Coeficiente de x
    float c;    //Termo independente
    float delta;
    //Raizes da equacao
    float x1;
    float x2;
    
    /**
    *   y = ax^2 + bx + c
    */
    printf("Resolucao de uma equacao de segundo grau\n");
    printf("Determine o valor de a:\n");
    scanf("%f", &a);
    printf("Determine o valor de b:\n");
    scanf("%f", &b);
    printf("Determine o valor de c:\n");
    scanf("%f", &c);
    delta = pow(b,2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0) {
        printf("Nao existe raiz\n");
    }else if (delta >= 0) {
        printf("O X1 vale:%f", x1);
        printf("O X2 vale:%f", x2);
    }

    return 0;
}
