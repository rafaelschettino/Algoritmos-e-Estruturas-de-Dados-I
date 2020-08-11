#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 3;

void leMatriz(float matriz[][num_col]);
float maiorAcimaDiagonal(float matriz[][num_col]);
void escreveResultado(float maior_valor);

int main()
{
    float matriz[num_lin][num_col];
    leMatriz(matriz);
    float maior_valor = maiorAcimaDiagonal(matriz);
    escreveResultado(maior_valor);
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

float maiorAcimaDiagonal(float matriz[][num_col])
{
    int i = 0;
    int j = 0;
    float maior = matriz[i][j];
    while(j < num_col){
        i++;
        if(i == j){
            i = 0;
            j++;
        }//fim if
        if(i < j){
            if(matriz[i][j] > maior) maior = matriz[i][j];
        }//fim if
    }//fim while
    return maior;
}//fim maiorAcimaDiagonal()

void escreveResultado(float maior_valor)
{
    printf("\nO maior valor acima da diagonal principal = %f", maior_valor);
}//fim escreveResultado()
