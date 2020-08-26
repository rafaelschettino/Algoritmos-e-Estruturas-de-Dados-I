#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;    //Altura
    float aux;  //Variavel auxiliar
    float peso;
    float z;
    printf("\t \t \t Calculo de de peso ideal masculino\n");
    printf("Digite a altura\n");
    scanf("%f", &h);
    aux = 72.7 * h;
    peso = aux - 58.0;
    printf("O peso ideal para essa pessoa e: %f", peso);

    return 0;
}
