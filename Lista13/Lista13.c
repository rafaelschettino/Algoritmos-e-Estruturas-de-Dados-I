#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    arq = fopen("exemplo.dat", "w");
    fclose(arq);

    //Questao 2

    int idade = 18;
    arq = fopen("exemplo.dat", "a");
    fprintf(arq, "%d", idade);
    fclose(arq);

    //Questao 3

    int idade_pai = 48;
    int idade_mae = 46;
    arq = fopen("exemplo.dat", "a");
    fprintf(arq, "\n%d", idade_pai);
    fprintf(arq, "\n%d", idade_mae);
    fclose(arq);

    //Questao 4

    arq = fopen("exemplo.dat", "r");
    fscanf(arq, "%d", &idade);
    fscanf(arq, "%d", &idade_pai);
    fscanf(arq, "%d", &idade_mae);
    printf("\nValores gravados no arquivo: %d, %d, %d", idade, idade_pai, idade_mae);
    fclose(arq);
}//fim main()
