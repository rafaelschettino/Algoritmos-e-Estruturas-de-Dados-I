#include <stdio.h>
#include <stdlib.h>

void funcao(int inferior, int superior);

int main()
{
    int inferior;
    int superior;
    printf("Limite inferior: ");
    scanf("%d", &inferior);
    printf("\nLimite superior: ");
    scanf("%d", &superior);

    funcao(inferior, superior);
}//fim main

void funcao(int inferior, int superior)
{
    if(inferior > superior) return;
    printf("%d ", inferior);
    funcao(inferior + 1, superior);
    printf("%d ", inferior);
}//fim funcao
