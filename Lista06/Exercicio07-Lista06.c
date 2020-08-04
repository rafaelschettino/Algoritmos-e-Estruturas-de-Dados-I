#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float maior;
    float menor;
    int i;
    printf("O programa identificara o maior e o menor numero, dentre os dez selecionados\n");
    printf("Digite dez valores\n");
    scanf("%f", &num);
    maior = num;
    menor = num;

    for(i = 0;i < 9; i += 1){
        scanf("%f", &num);
        if(maior < num){
            maior = num;
        }
        if(menor > num){
            menor = num;
        }
    }
    printf("O maior numero e:%f", maior);
    printf("\nO menor numero e:%f", menor);
    return 0;
}
