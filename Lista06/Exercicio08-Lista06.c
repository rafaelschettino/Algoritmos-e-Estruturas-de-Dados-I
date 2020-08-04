#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta;
    char operador;
    int op1;
    int op2;
    int resultado;
    do{
        printf("\nDigite S para usar a calculadora e N caso nao queira\n");
        scanf("%s", &resposta);

        if(resposta == 'N' || resposta == 'n'){
            printf("\nObrigado por usar este programa");
        }//fim if
        if(resposta == 'S' || resposta == 's'){
            printf("Entre com dois numeros\n");
            scanf("%i", &op1);
            scanf("%i", &op2);
            fflush(stdin);
            printf("Escreva a operacao +-*/\n");
            scanf("%c", &operador);
            switch(operador){
                case '+':
                    resultado = op1 + op2;
                    break;
                case '-':
                    resultado = op1 - op2;
                    break;
                case '*':
                    resultado = op1 * op2;
                    break;
                case '/':
                    resultado = op1 / op2;
                    break;
                default:
                    printf("Operacao invalida");
	    }//fim switch
            printf("O resultado e %d", resultado);
        }//fim if

    }while(resposta == 'S' || resposta == 's');
    return 0;
}
