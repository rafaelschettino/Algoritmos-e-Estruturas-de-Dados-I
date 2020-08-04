#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
   
    printf("Descobrir o maior entre dois numeros\n");
    printf("Determine o valor do primeiro numero\n");
    scanf("%f", &num1);
    printf("Determine o valor do segundo numero\n");
    scanf("%f", &num2);
    if(num1 > num2){
        printf("O maior numero e:%f", num1);
    }else if(num2 > num1){
        printf("O maior numero e:%f", num2);
    }else if(num2 == num1){
        printf("Os dois numeros sao iguais");
    }

    return 0;
}
