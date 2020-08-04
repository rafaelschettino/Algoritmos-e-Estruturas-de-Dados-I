#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//valor qualquer inserdo pelo usuario
    int maior;
    int menor;
    int amplitude;
    int contador;
    int continua;

    do{
        do{
            printf("\nEntre com valor:\n");
            printf("Digite [0] para encerrar a leitura\n");
            scanf("%d", &n);
            if(n < 0)
                printf("\nValores negativos invalidos!Tente novamente\n");
        }while(n < 0);
        maior = n;
        menor = n;
        contador = 0;
        while(n != 0){
            contador++;
            if(n > maior){
                maior = n;
            }//fim do if
            if(n < menor){
                menor = n;
            }//fim do if
            do{
                printf("Entre com valor\n");
                printf("Digite [0] para encerrar a leitura\n");
                scanf("%d", &n);
                if(n < 0)
                    printf("\nValores negativos invalidos!Tente novamente\n");
            }while(n < 0);
        }//fim while
        amplitude = maior - menor;

        if(contador > 0){
            printf("\nMaior valor: %d", maior);
            printf("\nMenor valor: %d", menor);
            printf("\nAmplitude = %d\n", amplitude);
        }//fim do if

        if(contador == 0){
            printf("\nNenhum valor informado\n");
        }//fim do if
        do{
            printf("\nDeseja continuar utilizando o programa?\n");
            printf("Digite [1] para SIM ou [2] para NAO: ");
            scanf("\n%d", &continua);
            if(continua != 1 && continua != 2)
                printf("\nResposta invalida!\n");
        }while(continua != 1 && continua != 2);
        if(continua == 2)
            printf("\nObrigado por utilizar o programa!");
    }while(continua == 1);
    return 0;
}
