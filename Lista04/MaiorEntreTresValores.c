#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float num3;

    printf("Calculo do maior valor lido\n");
    printf("Determine o valor do primeiro numero\n");
    scanf("%f", &num1);
    printf("Determine o valor do segundo numero\n");
    scanf("%f", &num2);
    printf("Determine o valor do terceiro numero\n");
    scanf("%f", &num3);

    if(num1 > num2 && num2 > num3){
        printf("O maior numero e:%f", num1);
    }else if(num1 > num3 && num3 > num2){
        printf("O maior numero e:%f", num1);
    }else if(num2 > num1 && num1 > num3){
        printf("O maior numero e:%f", num2);
    }else if(num2 > num3 && num3 > num1){
        printf("O maior numero e:%f", num2);
    }else if(num3 > num2 && num2 > num1){
        printf("O maior numero e:%f", num3);
    }else if(num3 > num1 && num1 > num2){
        printf("O maior numero e:%f", num3);
    }

    return 0;
}
