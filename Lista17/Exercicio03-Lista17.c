#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 2;

void leMatriz(float m[][num_col]);
float leChave();
int ocorrenciasChave(float m[][num_col], float chave_de_pesquisa);
void escreveResultado(int qtd_chave);

int main()
{
    float m[num_lin][num_col];
    leMatriz(m);
    float chave_de_pesquisa = leChave();
    int qtd_chave = ocorrenciasChave(m, chave_de_pesquisa);
    escreveResultado(qtd_chave);
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

float leChave()
{
    float x;
    printf("\nEntre com um valor para a chave de pesquisa: ");
    scanf("%f", &x);
    return x;
}//fim leChave()

int ocorrenciasChave(float m[][num_col], float chave_de_pesquisa)
{
    int c = 0;
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m[i][j] == chave_de_pesquisa) c++;
        }//fim for j
    }//fim for i
    return c;
}//fim ocorrenciasChave()

void escreveResultado(int qtd_chave)
{
    printf("\nNumero de ocorrencias da chave na matriz = %d", qtd_chave);
}//fim escreveResultado()
