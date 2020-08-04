#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    printf("Valores em ordem crescente\n");
    printf("Declare 3 valores inteiros\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1 < num2 && num2 < num3){
        printf("O primeiro numero e:%d", num1);
        printf("\nO segundo numero e:%d", num2);
        printf("\nO terceiro numero e:%d", num3);
    }
    else if (num1 < num3 && num3 < num2){
        printf("O primeiro numero e:%d", num1);
        printf("\nO segundo numero e:%d", num3);
        printf("\nO terceiro numero e:%d", num2);
    }
    else if (num2 < num1 && num1 < num3){
        printf("O primeiro numero e:%d", num2);
        printf("\nO segundo numero e:%d", num1);
        printf("\nO terceiro numero e:%d", num3);
    }
    else if(num2 < num3 && num3 < num1){
        printf("O primeiro numero e:%d", num2);
        printf("\nO segundo numero e:%d", num3);
        printf("\nO terceiro numero e:%d", num2);
    }
    else if(num3 < num2 && num2 < num1){
        printf("O primeiro numero e:%d", num3);
        printf("\nO segundo numero e:%d", num2);
        printf("\n O terceiro numero e:%d", num1);
    }
    else if(num3 < num1 && num1 < num2){
        printf("O primeiro numero e:%d", num3);
        printf("\nO segundo numero e:%d", num1);
        printf("\nO terceiro numero e:%d", num2);
    }
}
