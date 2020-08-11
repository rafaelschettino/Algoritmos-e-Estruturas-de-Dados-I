#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 2;

void leMatriz(float m[][num_col]);
void copiaPrimeira(float m[][num_col], float m2[][num_col]);
void escreveMatriz(float m2[][num_col]);

int main()
{
    float m[num_lin][num_col];
    leMatriz(m);
    float m2[num_lin][num_col];
    copiaPrimeira(m, m2);
    escreveMatriz(m2);
}//fim main()

void leMatriz(float m[][num_col])
{
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            printf("\nM[%d][%d]: ",i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }//fim for j
    }//fim for i
}//fim leMatriz()

void copiaPrimeira(float m[][num_col], float m2[][num_col])
{
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            m2[i][j] = m[i][j];
        }//fim for j
    }//fim for i
}//fim copiaPrimeira()

void escreveMatriz(float m2[][num_col])
{
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            printf("\nM2[%d][%d] = %f", i+1, j+1, m2[i][j]);
        }//fim for j
    }//fim for i
}//fim escreveMatriz()
