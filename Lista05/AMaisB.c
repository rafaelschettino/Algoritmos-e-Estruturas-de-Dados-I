#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    printf("Leitura de tres valores\n");
    printf("Determine o valor de A\n");
    scanf("%f", &a);
    printf("Determine o valor de B\n");
    scanf("%f", &b);
    printf("Determine o valor de C\n");
    scanf("%f", &c);

    if (a + b < c){
        printf("A soma de A + B e menor que C");
    }else if (a + b > c){
        printf("A soma de A + B e maior que C");
    }

    return 0;
}
