#include <stdio.h>
#include <stdlib.h>

const int num_lin = 3;
const int num_col = 2;

void leMatriz(float m[][num_col]);
float mediaMatriz(float m[][num_col]);
int maiorQueMedia(float m[][num_col], float media);
void escreveResultado(int acima_media);

int main()
{
    float m[num_lin][num_col];
    leMatriz(m);
    float media =  mediaMatriz(m);
    int acima_media = maiorQueMedia(m, media);
    escreveResultado(acima_media);
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

float mediaMatriz(float m[][num_col])
{
    float soma = 0;
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            soma += m[i][j];
        }//fim for j
    }//fim for i
    float mediareais = soma / (num_lin * num_col);
    return mediareais;
}//fim mediaMatriz()

int maiorQueMedia(float m[][num_col], float media)
{
    int c = 0;
    for(int i = 0; i < num_lin; i++){
        for(int j = 0; j < num_col; j++){
            if(m[i][j] > media) c++;
        }//fim for j
    }//fim for i
    return c;
}//fim maiorQueMedia()

void escreveResultado(int acima_media)
{
    printf("\nA quantidade de valores maiores que a media da matriz = %d", acima_media);
}//fim escreveResultado()
