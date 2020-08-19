#include <stdio.h>
#include <stdlib.h>

void trocaPrimUlti(float arranjo[]);

const int max = 5;

int main()
{
    float arranjo[] = {3, 5, 7, 9, 11};
    trocaPrimUlti(arranjo);
    printf("\nApos a troca...");
    printf("\nPrimeiro valor = %f", arranjo[0]);
    printf("\nUltimo valor = %f", arranjo[max - 1]);
}//fim main()

void trocaPrimUlti(float arranjo[])
{
    float aux;
    aux = arranjo[0];
    arranjo[0] = arranjo[max - 1];
    arranjo[max - 1] = aux;
}//fim trocaPrimUlti()

