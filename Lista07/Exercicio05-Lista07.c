#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int c;
    int valor;
    float media;
    float soma = 0;
    float maior;
    int flag = 0;

    printf("Determine a quantidade de valores que deseja utilizar:\n");
    scanf("%d", &n);

    printf("\nDetermine os valores:\n");
    printf("\nDigite [0], caso queira encerrar a leitura\n");
    scanf("%d", &valor);
    maior = valor;
    soma = soma + valor;
    if(valor == flag)
        printf("\nPrograma encerrado!\n");

    while(valor != flag){
        for(c = 2; c <= n; c++){
            scanf("%d", &valor);
            if(valor > maior){
                maior = valor;
            }//fim if
            if(valor == flag){
                printf("\nPrograma encerrado!\n");
                break;
            }//fim if
            soma = soma + valor;
        }//fim for c
        if(valor != flag){
            media = soma / n;
            printf("\nA media desses valores vale: %f", media);
            printf("\nO maior entre esses valores e: %f", maior);
        }//fim if
    }//fim while

    return 0;
}
