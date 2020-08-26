#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Pares ordenados dos pontos a serem utilizados no calculo da distancia
    float x1;
    float y1;
    float x2;
    float y2;
    //Variaveis auxiliares ao calculo
    float a;    
    float a1;
    float b;    
    float b1;
    float c;
    //Resultado do calculo da distancia
    float d;

    /**
    *   d = sqrt( (x2 - x1)^2 + (y2 - y1)^2 )
    */
    
    printf("Calculo da distancia entre dois pontos de uma reta\n");
    printf("Determine o valor de X2:\n");
    scanf("%f", &x2);
    printf("Determine o valor de X1:\n");
    scanf("%f", &x1);
    printf("Determine o valor de Y2:\n");
    scanf("%f", &y2);
    printf("Determine o valor de Y1:\n");
    scanf("%f", &y1);
    a = x2 - x1;
    a1 = pow(a, 2);
    b = y2 - y1;
    b1 = pow(b, 2);
    c = a1 + b1;
    d = sqrt(c);
    printf("A distancia entre esses dois pontos e:%f", d);

    return 0;
}
