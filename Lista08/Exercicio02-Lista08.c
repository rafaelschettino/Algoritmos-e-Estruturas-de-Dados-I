#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;//numero lido
    int num_aux;
    int fatorial;
    do{
        printf("\nDetermine um numero para se calcular o fatorial\n");
        printf("Obs: caso seja inserido um numero negativo, o programa sera encerrado!\n");
        scanf("%d", &num);
        num_aux = num;

        if(num == 0 || num ==1){
            fatorial = 1;
            printf("\nFatorial de %d = %d\n", num, fatorial);
        }//fim do if

        if(num > 1){
            fatorial = 1;
            for( ; num > 1; num--){
                fatorial = fatorial * num;
            }//fim do for
            printf("\nFatorial de %d = %d\n", num_aux, fatorial);
        }//fim do if

        if(num < 0)
            printf("\nObrigado por utilizar esse programa!");
    }while(num >= 0);

    return 0;
}
