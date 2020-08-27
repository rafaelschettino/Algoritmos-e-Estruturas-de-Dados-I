#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    char resp[10];
    do{
        printf("\nCalculo Ano Bissexto\n");
        printf("Informe o ano\n");
        scanf("%d", &ano);
        if (ano % 4 != 0) {
            printf("Ano nao bissexto\n");
    	}
        else if (ano % 4 == 0 && ano % 100 != 0){
            printf("Ano bissexto\n");
        }else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 != 0) {
            printf("Ano nao bissexto\n");
	    }else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
            printf("Ano bissexto\n");
    	}
        printf("\nVoce deseja testar um novo ano?\n");
        printf("Se SIM clique S");
        printf("\nSe NAO clique N\n");
        fflush(stdin);
        scanf("%s", resp);
        if(resp[0] == 'n' || resp[0] == 'N'){
            printf("\nFim do programa!");
	    }//fim if
    }while(resp[0] == 'S' || resp[0] == 's');

    return 0;
}
