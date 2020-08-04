#include <stdio.h>
#include <stdlib.h>

int fibonacci(int k);
void escreva(int k, int termo);

int main()
{
    int k;
    printf("Calculo do k-esimo termo de Fibonacci!");
    printf("\nDetermine o valor de k: ");
    scanf("%d", &k);
    int termo = fibonacci(k);
    escreva(k, termo);
}//fim main()

int fibonacci(int k)
{
    int fib;
    if(k == 0) fib = 0;
    else if(k == 1) fib = 1;
    else fib = fibonacci(k - 1) + fibonacci(k - 2);

    return fib;
}//fim fibonacci()

void escreva(int k, int termo)
{
    printf("\nO termo de numero %d na sequencia de Fibonacci = %d", k, termo);
}//fim escreva()
