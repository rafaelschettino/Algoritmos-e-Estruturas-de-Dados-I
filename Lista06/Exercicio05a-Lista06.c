#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char resp;
    do{
        printf("\nCalculo Ano Bissexto\n");
        printf("Informe o ano\n");
        scanf("%d", &a);
        if (a % 4 != 0) {
            printf("Ano nao bissexto\n");
    	}
        else if (a % 4 == 0 && a % 100 != 0){
            printf("Ano bissexto\n");
        }else if (a % 4 == 0 && a % 100 == 0 && a % 400 != 0) {
            printf("Ano nao bissexto\n");
	}else if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
            printf("Ano bissexto\n");
    	}
        printf("\nVoce deseja testar um novo ano?\n");
        printf("Se SIM clique S");
        printf("\nSe NAO clique N\n");
        fflush(stdin);
        scanf("%c", &resp);
        if(resp == 'n' || resp == 'N'){
            printf("\nFim do programa!");
            break;
	}//fim if
    }while(resp != 'N' || resp != 'n');

    return 0;
}
