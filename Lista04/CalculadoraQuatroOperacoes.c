#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float resultado;
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
        resultado = num1 + num2;
        printf("O resultado = %f", resultado);
    }else if(op[0] == 'S' || op[0] == 's'){
        resultado = num1 - num2;
        printf("O resultado = %f", resultado);
    }else if(op[0] == 'M' || op[0] == 'm'){
        resultado = num1 * num2;
        printf("O resultado = %f", resultado);
    }else if(op[0] == 'D' || op[0] == 'd'){
        resultado = num1 / num2;
        printf("O resultado = %f", resultado);
    }

    return 0;
}
