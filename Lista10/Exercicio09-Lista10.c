#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int leValor();
int calculo(int valor);
void escreva(int resultado);

int main()
{
    apresentacao();
    int valor = leValor();
    int resultado = calculo(valor);
    escreva(resultado);
}//fim main

void apresentacao()
{
    printf("Bem-vindo, USUARIO!\n");
    printf("Esse programa calcula o fatorial de um numero natural lido!\n");
}//fim apresentacao

int leValor()
{
    int x;
    do{
        printf("\nEntre com um numero natural: ");
        scanf("%d", &x);
        if(x < 0){
            printf("\nValor invalido!Tente novamente\n");
        }//fim do if
    }while(x < 0);
    return x;
}//fim leValor

int calculo(int valor)
{
    int fatorial;
    if (valor == 0 || valor == 1){
        fatorial = 1;
    }//fim do if

    if(valor > 1){
        fatorial = 1;
        for( ; valor > 1; valor--){
            fatorial = fatorial * valor;
        }//fim do for
    }//fim do if

    return fatorial;
}//fim calculo

void escreva(int resultado)
{
    printf("\nFatorial = %d", resultado);
}//fim escreva
