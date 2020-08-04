#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio;
    double pi;
    double area;
    pi = 3.14;
    printf("\t \t \t Calculo da area de um circulo\n");
    printf("\t \t \t Obs: Foi considerado pi=3.14\n");
    printf("Insira o valor do raio do circulo\n");
    scanf("%lf", &raio);
    area = raio * raio * pi;
    printf("A area do circulo vale: %lf", area);



    return 0;
}
