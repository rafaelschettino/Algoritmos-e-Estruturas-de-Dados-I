#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int leValor();
bool PrimoOuNao(int valor);
void escreva(bool primo);

int main()
{
    apresentacao();
    int valor = leValor();
    bool primo = PrimoOuNao(valor);
    escreva(primo);
}//fim main

void apresentacao()
{
    printf("Bem-vindo, USUARIO!");
    printf("\nEsse programa identifica se um numero natural e primo ou nao!\n");
}//fim apresentacao

int leValor()
{
    int x;
    do{
        printf("\nEntre com um numero natural: ");
        scanf("%d", &x);
        if(x < 0) printf("\nValor invalido!Tente novamente\n");
    }while(x < 0);
    return x;
}//fim leValor

bool PrimoOuNao(int valor)
{
    int contador = 0;
    bool ehprimo;
    for(int i = 2; i <= (valor/2); i++){
        if(valor % i == 0) contador++;
    }//fim for
    if(contador > 0){
        ehprimo = false;
    }//fim if
    else if(contador == 0){
        ehprimo = true;
    }//fim else if
    return ehprimo;
}//fim PrimoOuNao

void escreva(bool primo)
{
    if(primo == 0){
        printf("\nNumero NAO PRIMO!");
    }//fim if
    else if(primo == 1){
        printf("\nNumero PRIMO!");
    }//fim else if
}//fim escreva


