#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produzidas;
    int defeituosas;
    int i = 1;
    int maior;

    printf("\nMaquina numero %d", i);
    do{
        printf("\nDetermine o numero de pecas produzidas: ");
        scanf("%d", &produzidas);
        maior = produzidas;
        do{
            printf("\nDetermine a quantidade de pecas defeituosas que foram produzidas: ");
            scanf("%d", &defeituosas);
        }while(defeituosas < 0);
        if(produzidas < 1){
            printf("\nValor invalido!Tente novamente!");
        }//fim do if
    }while(produzidas < 1);

    for(i = 2; i <= 500; i++){
        do{
            printf("\nMaquina numero %d", i);
            printf("\nDetermine o numero de pecas produzidas: ");
            scanf("%d", &produzidas);
            if(produzidas > maior){
                maior = produzidas;
                do{
                    printf("\nDetermine a quantidade de pecas defeituosas que foram produzidas: ");
                    scanf("%d", &defeituosas);
                }while(defeituosas < 0);
            }//fim do if
        }while(produzidas < 1);
    }//fim do for
    printf("\nA maquina mais produtiva teve um total de %d pecas defeituosas", defeituosas);

    return 0;
}
