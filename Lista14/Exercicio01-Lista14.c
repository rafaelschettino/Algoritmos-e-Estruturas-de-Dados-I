#include <stdio.h>
#include <stdlib.h>

void LeNotas(float nota, FILE *arq);
float CalculoMedia(float nota, float *soma, int *contador, FILE *arq);
int MaiorQueMedia(float nota, float media, FILE *arq);
void EscreveMedia(float media);
void EscreveResultado(int resultado);

int main()
{
    FILE *arq;
    arq = fopen("notas.txt", "w");
    fclose(arq);
    float nota;
    float soma;
    int contador;
    LeNotas(nota, &arq);
    float media = CalculoMedia(nota, &soma, &contador, &arq);
    int resultado = MaiorQueMedia(nota, media, &arq);
    EscreveMedia(media);
    EscreveResultado(resultado);
}//fim main()

void LeNotas(float nota, FILE *arq)
{
    do{
        printf("\nEntre com uma nota: ");
        scanf("%f", &nota);
        if(nota > 100) printf("\nValor fora do dominio!Tente novamente");
    }while(nota > 100);
    while(nota >= 0){
        arq = fopen("notas.txt", "a");
        fprintf(arq, "%f\n", nota);
        fclose(arq);
        do{
            printf("\nEntre com uma nota: ");
            scanf("%f", &nota);
            if(nota > 100) printf("\nValor fora do dominio!Tente novamente");
        }while(nota > 100);
    }//fim while
}//fim LeNotas()

float CalculoMedia(float nota, float *soma, int *contador, FILE *arq)
{
    *contador = 0;
    *soma = 0;
    arq = fopen("notas.txt", "r");
    fscanf(arq, "%f", &nota);
    while(!feof(arq)){
        *contador = *contador + 1;
        *soma = *soma + nota;
        fscanf(arq, "%f", &nota);
    }//fim while

    float m = *soma / *contador;
    return m;
}//fim CalculoMedia()

int MaiorQueMedia(float nota, float media, FILE *arq)
{
    int r = 0;
    arq = fopen("notas.txt", "r");
    fscanf(arq, "%f", &nota);
    while(!feof(arq)){
        if(nota > media) r++;
        fscanf(arq, "%f", &nota);
    }//fim while
    fclose(arq);
    return r;
}//fim MaiorQueMedia()

void EscreveMedia(float media)
{
    printf("\nMedia da turma = %f", media);
}//fim EscrevaMedia()

void EscreveResultado(int resultado)
{
    printf("\nNumero de alunos com nota superior a media = %d", resultado);
}//fim EscreveResultado()
