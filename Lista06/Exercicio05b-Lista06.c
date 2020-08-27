#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    int  ano;
    do{
        printf("Calculo de um ano bissexto\n");
        printf("Digite S para comecar ou N para sair\n");
        scanf("\n%c", &resp);
        if(resp == 'N' || resp == 'n'){
            printf("\nPrograma encerrado");
        }//fim if
        if(resp == 'S' || resp == 's'){
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
    	    }//fim if
	    }//fim if
    }while(resp == 'S' || resp == 's');
   
    return 0;
}
