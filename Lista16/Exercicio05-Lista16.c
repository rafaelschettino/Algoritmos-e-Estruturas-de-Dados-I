#include <stdio.h>
#include <stdlib.h>

int leIdade();
int leIdades(int idades[]);
float soma(int idades[], int qtd_idades);
int acimaMedia(float media, int idades[], int qtd_idades);
void escreveResultado(float media, int acimadamedia);

const int max = 100;

int main()
{
    int idades[max];
    int qtd_idades = leIdades(idades);
    float media = soma(idades, qtd_idades);
    int acimadamedia = acimaMedia(media, idades, qtd_idades);
    escreveResultado(media, acimadamedia);
}//fim main()

int leIdade()
{
    int idade;
    do{
        printf("\nEntre com uma idade: ");
        scanf("%d", &idade);
        if(idade > 150 || idade < 0) printf("\nValor fora do dominio!Tente novamente");
    }while(idade > 150 || idade < 0);
    return idade;
}//fim leIdade()

int leIdades(int idades[])
{
    int c = 0;
    idades[c] = leIdade();
    while(idades[c] != 0 && c < max){
        c++;
        idades[c] = leIdade();
    }//fim while
    return c;
}//fim leIdades()

float soma(int idades[], int qtd_idades)
{
    float soma = 0;
    for(int i = 0; i < qtd_idades; i++){
        soma = soma + idades[i];
    }//fim for
    float mediaidades;
    mediaidades = soma + (float)qtd_idades;
    return mediaidades;
}//fim soma()

int acimaMedia(float media, int idades[], int qtd_idades)
{
    int c = 0;
    int i;
    for(i = 0; i < qtd_idades; i++){
        if(idades[i] > media) c++;
    }//fim for
    return c;

}//fim acimaMedia

void escreveResultado(float media, int acimadamedia)
{
    printf("\nMedia de idade da turma = %.2f", media);
    printf("\nNumero de alunos com idade acima da media = %d", acimadamedia);
}//fim escreveResultado()
