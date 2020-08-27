#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int leValor();
bool ParOuNao(int valor);
void escreva(bool p);

int main()
{
    apresentacao();
    int valor = leValor();
    bool p = ParOuNao(valor);
    escreva(p);
}//fim main

void apresentacao()
{
    printf("\nBem-vindo,USUARIO!");
    printf("\nEsse programa identifica se um numero e par ou impar!\n");
}//fim apresentacao

int leValor()
{
    int x;
    printf("Entre com um numero: ");
    scanf("%d", &x);
    return x;
}//fim leValor

bool ParOuNao(int valor)
{
    bool ehpar;
    if (valor % 2 == 1){
        ehpar = false;
    }//fim if
    else if (valor % 2 == 0){
        ehpar = true;
    }//fim else if
    return ehpar;
}//fim ParOuNao

void escreva(bool p)
{
    if(p == true){
        printf("\nEsse numero e PAR!");
    }//fim if
    else if(p == false){
        printf("\nEsse numero e IMPAR!");
    }//fim else if
}//fim escreva
