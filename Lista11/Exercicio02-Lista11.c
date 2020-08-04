#include <stdio.h>
#include <stdlib.h>

void funcao(int x);

int main()
{
    int x = 1;
    funcao(x);
}//fim main

void funcao(int x)
{
    if (x > 5) return;
    printf("%d, ", x);
    funcao(x + 1);
    printf("%d, ", x);
}//fim funcao
