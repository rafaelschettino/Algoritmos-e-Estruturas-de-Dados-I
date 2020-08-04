5#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    printf("Determine um valor inteiro entre 1 e 12\n");
    scanf("%d", &mes);
    if(mes == 1){
        printf("Esse mes e janeiro\n");
        printf("Janeiro tem 31 dias");
    }
    else if(mes == 2){
        printf("Esse mes e fevereiro\n");
        printf("Fevereiro tem 28 dias");
    }
    else if(mes == 3){
        printf("Esse mes e marco\n");
        printf("Marco tem 31 dias");
    }
    else if (mes == 4){
        printf("Esse mes e abril\n");
        printf("Abril tem 30 dias");
    }
    else if(mes == 5){
        printf("Esse mes e maio\n");
        printf("Maio tem 31 dias");
    }
    else if(mes == 6){
        printf("Esse mes e junho\n");
        printf("Junho tem 30 dias");
    }
    else if(mes == 7){
        printf("Esse mes e julho\n");
        printf("Julho tem 31 dias");
    }
    else if(mes == 8){
        printf("Esse mes e agosto");
        printf("Agosto tem 31 dias");
    }
    else if(mes == 9){
        printf("Esse mes e setembro\n");
        printf("Setembro tem 30 dias");
    }
    else if(mes == 10){
        printf("Esse mes e outubro\n");
        printf("Outubro tem 31 dias");
    }
    else if(mes == 11){
        printf("Esse mes e novembro\n");
        printf("Novembro tem 30 dias");
    }
    else if(mes == 12){
        printf("Esse mes e dezembro\n");
        printf("Dezembro tem 31 dias");
    }
    else {
        printf("Valor invalido");
    }

    return 0;
}
