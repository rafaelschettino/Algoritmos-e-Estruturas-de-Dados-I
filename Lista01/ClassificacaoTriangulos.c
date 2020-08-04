//Lista 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Classificao de triangulos\n");
    float a;
    float b;
    float c;
    printf("Tamanho do primeiro lado \n");
    scanf("%f", &a);
    printf("Tamanho do seguundo lado \n");
    scanf("%f", &b);
    printf("Tamanho do terceiro lado \n");
    scanf("%f", &c);
    if (a == b && b == c) {
        printf("Triangulo equilatero");
    }
    else if (a == b && b != c) {
        printf("Triangulo isosceles");
    }
    else if (a == c && c != b) {
        printf("Triangulo isosceles");
    }
    else if (b == c && c != a) {
        printf("Triangulo isosceles");
    }
    else if (a != b && b != c && a != c) {
            printf("Triangulo escaleno");
    }

    return 0;
}
