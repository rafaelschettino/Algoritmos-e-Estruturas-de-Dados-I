#include <stdio.h>
#include <stdlib.h>

void trocaElementos(float arranjo[], int i, int f);

int main()
{
    float arranjo[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int i = 1;
    int f = 3;
    printf("Antes da troca: [ ");
    for(int j = 0; j < 5; j++){
	printf(" %.2f", arranjo[j]);
    }//fim for j
    printf(" ]");
    trocaElementos(arranjo, i, f);
    printf("Depois da troca: [ ");
    for(int j = 0; j < 5; j++){
	printf(" %.2f", arranjo[j]);
    }//fim for j
    printf(" ]");
}//fim main()

void trocaElementos(float arranjo[], int i, int f)
{
    float aux;
    aux = arranjo[i];
    arranjo[i] = arranjo[f];
    arranjo[f] = aux;
}//fim trocaElementos()
