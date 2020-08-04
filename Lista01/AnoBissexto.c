#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int ano;
    printf("Calculo Ano Bissexto\n");
    printf("Informe o ano\n");
    scanf("%d", &ano);
     
    if (ano % 4 != 0) {
        printf("Ano nao bissexto\n");
    }else if (ano % 4 == 0 && ano % 100 != 0){
        printf("Ano bissexto\n");
    }else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 != 0) {
        printf("Ano nao bissexto\n");
    }else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
        printf("Ano bissexto\n");
    }

    return 0;
}
