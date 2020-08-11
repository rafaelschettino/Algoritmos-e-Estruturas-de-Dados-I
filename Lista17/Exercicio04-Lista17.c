#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 2;

void leMatriz(float m[][num_col]);
float calculaMaiorValor(float m[][num_col]);
void localizaoMaiorValor(float m[][num_col], float maior);

int main()
{
    float m[num_lin][num_col];
    leMatriz(m);
    float maior = calculaMaiorValor(m);
    localizaoMaiorValor(m, maior);
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

float calculaMaiorValor(float m[][num_col])
{
    int i;
    float maior = m[0][0];
    for(i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m[i][j] > maior) maior = m[i][j];
        }//fim for j
    }//fim for i
    return maior;
}//fim calculaMaiorValor()

void localizaoMaiorValor(float m[][num_col], float maior)
{
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m[i][j] == maior && i == 0) printf("\nMaior valor localizado na primeira linha!");
            else if(m[i][j] == maior && i == 1) printf("\nMaior valor localizado na segunda linha!");
            else if(m[i][j] == maior && i == 2) printf("\nMaior valor localizado na terceira linha!");
        }//fim for j
    }//fim for i
}//fim localizacaoMaiorValor()
