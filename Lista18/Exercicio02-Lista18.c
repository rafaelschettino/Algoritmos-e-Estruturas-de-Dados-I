#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int num_lin = 3;
const int num_col = 3;

void leMatriz(float matriz[][num_col]);
bool PrimeiraIgualUltima(float matriz[][num_col]);
void escreveResultado(bool iguais);

int main()
{
    float matriz[num_lin][num_col];
    leMatriz(matriz);
    bool iguais = PrimeiraIgualUltima(matriz);
    escreveResultado(iguais);
}//fim main()

void leMatriz(float matriz[][num_col])
{
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            printf("\nM[%d][%d]: ",i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }//fim for j
    }//fim for i
}//fim leMatriz()

bool PrimeiraIgualUltima(float matriz[][num_col])
{
    bool igualdade = true;
    int i = 0;
    int j;
    int igualdades = 0;
    for(j = 0; j < num_col; j++){
            if(matriz[i][j] == matriz[num_lin - 1][j]) igualdades++;
    }//fim for j
    if(igualdades != num_lin) igualdade = false;
    return igualdade;
}//fim PrimeiraIgualUltima()

void escreveResultado(bool iguais)
{
    if(iguais) printf("\nA ultima linha e igual a primeira!");
    else printf("\nA ultima linha nao e igual a primeira");
}//fim escreveResultado()
