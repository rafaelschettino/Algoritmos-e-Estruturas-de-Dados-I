#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h;    //Altura
    float aux;    //Variavel auxiliar
    float peso;
    
    printf("\t \t \t Calculo peso ideal feminino\n");
    printf("Digite a altura\n");
    scanf("%f", &h);
    aux = 62.1 * h;
    peso = aux - 44.7;
    printf("O peso ideal para essa pessoa e:%f", peso);

    return 0;
}
