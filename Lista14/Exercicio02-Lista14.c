#include <stdio.h>
#include <stdlib.h>

void LeNotas(float *nota, int *qtd_notas);
float CalculaMedia(float *nota, float *soma, int qtd_notas);
int MaiorQueMedia(float *nota, int qtd_notas, float media);
void EscreveMedia(float media);
void EscreveResultado(int reusltado);

const int max = 100;

int main()
{
    int qtd_notas;
    float nota[max];
    LeNotas(&nota, &qtd_notas);
    float soma;
    float media = CalculaMedia(&nota, &soma, qtd_notas);
    int resultado = MaiorQueMedia(&nota, qtd_notas, media);
    EscreveMedia(media);
    EscreveResultado(resultado);
}//fim main()

void LeNotas(float *nota, int *qtd_notas)
{
    int i = 0;
    do{
        printf("\nEntre com uma nota: ");
        scanf("%f", &nota[i]);
        if(nota[i] > 100) printf("\nValor fora do dominio!Tente novamente");
    }while(nota[i] > 100);
    while(nota[i] >= 0 && i < max){
        i++;
        do{
            printf("\nEntre com uma nota: ");
            scanf("%f", &nota[i]);
            if(nota[i] > 100) printf("\nValor fora do dominio!Tente novamente");
        }while(nota[i] > 100);
    }//fim while
    if(i >= max) printf("\nVoce atingiu o numero limite de notas!\n");
    *qtd_notas = i;
}//fim LeNotas()

float CalculaMedia(float *nota, float *soma, int qtd_notas)
{
    *soma = 0;
    for(int i = 0; i < qtd_notas; i++){
        *soma = *soma + nota[i];
    }//fim for
    float m = *soma / (float)qtd_notas;
    return m;
}//fim CalculaMedia()

int MaiorQueMedia(float *nota, int qtd_notas, float media)
{
    int r = 0;
    for(int i = 0; i < qtd_notas; i++){
        if(nota[i] > media) r++;
    }//fim for
    return r;
}//fim MaiorQueMedia

void EscreveMedia(float media)
{
    printf("\nA media da turma = %f", media);
}//fim EscrevaMedia()

void EscreveResultado(int resultado)
{
    printf("\nO numero de alunos com nota acima da media da turma = %d", resultado);
}//fim EscrevaResultado()

