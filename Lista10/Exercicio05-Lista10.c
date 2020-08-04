#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao();
int leAno();
bool BissextoOuNao(int a);
void escreva(bool b);

int main()
{
    apresentacao();
    int a = leAno();
    bool b = BissextoOuNao(a);
    escreva(b);
}//fim main

void  apresentacao()
{
    printf("\nBem-vindo, USUARIO!");
    printf("\nEsse programa identifica se um ano lido e bissexto ou nao!\n");
}//fim apresentacao

int leAno()
{
    int ano;
    printf("\nInforme o ano: ");
    scanf("%d", &ano);
    return ano;
}//fim leAno

bool BissextoOuNao(int a)
{
    bool bissexto;
    if (a % 4 != 0) {
        bissexto = false;
    }//fim if
    else if (a % 4 == 0 && a % 100 != 0){
        bissexto = true;
    }//fim else if
    else if (a % 4 == 0 && a % 100 == 0 && a % 400 != 0) {
            bissexto = false;
    }//fim else if
    else if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
            bissexto = true;
    }//fim else if

    return bissexto;
}//fim BissextoOuNao

void escreva(bool b)
{
    bool anobissexto;
    if (anobissexto == 1){
            printf("\nAno Bissexto!\n");
    }//fim if
    else if (anobissexto == 0){
            printf("\nAno nao Bissexto!\n");
    }//fim else if
}//fim escreva
