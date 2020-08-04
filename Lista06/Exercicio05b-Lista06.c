#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resp;
    int  a;
    do{
        printf("Calculo de um ano bissesto\n");
        printf("Digite S para comecar ou N para sair\n");
        scanf("\n%c", &resp);
        if(resp == 'N' || resp == 'n'){
            printf("\nPrograma encerrado");
            break;
        }
        if(resp == 'S' || resp == 's'){
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
    	    }//fim if
	}//fim if
    }while(resp == 'S' || resp == 's' || resp == 'N' || resp == 'n');
   
    return 0;
}
