#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float r;
    char op[15];

    printf("Calculadora\n");
    printf("Quatro operacoes aritmeticas basicas\n");
    printf("Determine o primeiro numero\n");
    scanf("%f", &num1);
    printf("Determine o segundo numero\n");
    scanf("%f", &num2);
    printf("Escolha uma das quatro operacoes\n");
    scanf("%s", op);

    if(op[0] == 'A' || op[0] == 'a'){
        r = num1 + num2;
        printf("O resultado = %f", r);
    }else if(op[0] == 'S' || op[0] == 's'){
        r = num1 - num2;
        printf("O resultado = %f", r);
    }else if(op[0] == 'M' || op[0] == 'm'){
        r = num1 * num2;
        printf("O resultado = %f", r);
    }else if(op[0] == 'D' || op[0] == 'd'){
        r = num1 / num2;
        printf("O resultado = %f", r);
    }

    return 0;
}
