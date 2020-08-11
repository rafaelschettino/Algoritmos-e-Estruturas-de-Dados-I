#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int num_lin = 3;
const int num_col = 2;

void leMatriz(float x[][num_col]);
bool matrizesIguais(float m[][num_col], float m2[][num_col]);
void escreveResultado(bool iguais);

int main()
{
    float m[num_lin][num_col];
    leMatriz(m);
    float m2[num_lin][num_col];
    leMatriz(m2);
    bool iguais = matrizesIguais(m, m2);
    escreveResultado(iguais);
}//fim main()

void leMatriz(float x[][num_col])
{
    printf("\nPreencha a matriz!\n");
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            printf("\nM[%d][%d]: ",i + 1, j + 1);
            scanf("%f", &x[i][j]);
        }//fim for j
    }//fim for i
}//fim leMatriz()

bool matrizesIguais(float m[][num_col], float m2[][num_col])
{
    bool igualdade = false;
    int c = 0;
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m[i][j] == m2[i][j]) c++;
        }//fim for j
    }//fim for i
    if(c == (num_lin * num_col)) igualdade = true;
    return igualdade;
}//fim matrizesIguais()

void escreveResultado(bool iguais)
{
    if(iguais == false) printf("\nAs matrizes nao sao exatamente iguais!");
    if(iguais == true) printf("\nAs matrizes sao exatamente iguais!");
}//fim escreveResultado()
