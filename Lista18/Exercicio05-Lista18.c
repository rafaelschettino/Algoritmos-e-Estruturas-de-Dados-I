#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 3;

void leMatriz(float matruz[][num_col]);
float maiorAcimaDiagonal(float matriz[][num_col]);
float maiorAbaixoDiagonal(float matriz[][num_col]);
float calculoDiferenca(float maior_acima, float maior_abaixo);
void escreveResultado(float diferenca_valores);

int main()
{
    float matriz[num_lin][num_col];
    leMatriz(matriz);
    float maior_acima = maiorAcimaDiagonal(matriz);
    float maior_abaixo = maiorAbaixoDiagonal(matriz);
    float diferenca_valores = calculoDiferenca(maior_acima, maior_abaixo);
    escreveResultado(diferenca_valores);
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
    float maior;

    return maior;
}//fim maiorAcimaDiagonal()

float maiorAbaixoDiagonal(float matriz[][num_col])
{
    float maior;

    return maior;
}//fim maiorAbaixoDiagonal()

float calculoDiferenca(float maior_acima, float maior_abaixo)
{

}//fim calculoDiferenca()

void escreveResultado(float diferenca_valores)
{
    printf("\nA diferença entre esses valores = %f", diferenca_valores);
}//fim escreveResultado()
