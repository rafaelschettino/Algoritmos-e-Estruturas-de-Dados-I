#include <stdio.h>
#include <stdlib.h>

void escreva10(int n);

int main()
{
   int n = 1;
   escreva10(n);
}//fim main

void escreva10(int n)
{
    if(n > 10) return;
    printf("%d ", n);
    escreva10(n + 1);
}//fim funcao
