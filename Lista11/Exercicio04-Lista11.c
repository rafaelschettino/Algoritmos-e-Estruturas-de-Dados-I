#include <stdio.h>
#include <stdlib.h>

int leitura(int n);
void funcao(int n);

int main()
{
    int n = leitura(n);
    funcao(n);
}//fim main

int leitura(int n)
{
    int x;
    printf("\nEntre com um valor: ");
    scanf("%d", &x);

    return x;
}//fim leitura

void funcao(int n)
{
    if(n < 0) return;
    printf("%d ", n);
    funcao(n - 1);
}//fim funcao
