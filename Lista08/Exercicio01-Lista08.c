#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    int expoente;
    float base;
    float base2;
    float potencia;

    printf("\n\tCalculo de potenciacao\n");
    do{
        printf("\nDetermine o seu expoente: ");
        scanf("%d", &expoente);
        if(expoente < 0)
            printf("\nValor invalido!Tente novamente\n");
    }while(expoente < 0);

    if(expoente == 0){
        printf("\nDetermine a base: ");
        scanf("%f", &base);
        potencia = 1;
        printf("\nResultado da potenciacao = %f", potencia);
    }//fim do if
    if(expoente == 1){
        printf("\nDetermine a base: ");
        scanf("%f", &base);
        potencia = base;
        printf("\nResultado da potenciacao = %f", potencia);
    }
    if(expoente != 1 && expoente != 0){
        printf("\nEscreva base:\n");
        scanf("%f", &base);
        base2 = base;
        for(i = 2; i <= expoente; i++){
            base = base2 * base;
        }//fim do for
        potencia = base;
        printf("\nResultado da potenciacao = %f", potencia);
    }//fim do if

}
