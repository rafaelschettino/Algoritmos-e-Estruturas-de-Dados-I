#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int a;
    printf("Calculo Ano Bissexto\n");
    printf("Informe o ano\n");
    scanf("%d", &a);
     
    if (a % 4 != 0) {
        printf("Ano nao bissexto\n");
    }else if (a % 4 == 0 && a % 100 != 0){
        printf("Ano bissexto\n");
    }else if (a % 4 == 0 && a % 100 == 0 && a % 400 != 0) {
            printf("Ano nao bissexto\n");
    }else if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
            printf("Ano bissexto\n");
    }

    return 0;
}
