#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;//numero de termos da PA
    int termo1;
    int razao;
    int x;
    int divisel;//numero de termos diviseis por X
    int continua;

    do{
        do{
            printf("Determine o numero de termos da PA: ");
            scanf("%d", &n);
            if(n <= 0)
                printf("\nValor invalido!Tente novamente\n");
        }while(n <= 0);

        printf("\nDetermine o primeiro termo dessa PA: ");
        scanf("%d", &termo1);
        printf("\nDetermine a razao dessa PA: ");
        scanf("%d", &razao);
        divisel = 0;
        do{
            printf("\nDetermine o valor de X: ");
            scanf("%d", &x);
            if(x == 0)
                printf("\nValor invalido para X!Tente um valor diferente de 0!\n");
        }while(x == 0);

        for(i = 1; i <= n; i++){
            printf("\n%d", termo1);
            if(termo1 % x == 0){
                divisel++;
            }
            termo1 = termo1 + razao;
        }
        printf("\n\nO numero de termos dessa PA que sao diviseis por X = %d\n", divisel);
        do{
            printf("\nDeseja continuar usando o programa? Digite [1] para SIM ou [2] para NAO: ");
            scanf("%d", &continua);
            if(continua != 1 && continua != 2)
                printf("\nResposta invalida!Tente novamente\n");
        }while(continua != 1 && continua != 2);
        if(continua == 2)
            printf("\nObrigado por utilizar o programa!");
    }while(continua == 1);
    return 0;
}
