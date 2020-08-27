#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1;  //Contador
    int soma = 0;    //Soma para calculo da media
    int n;  //Quantidade de alunos
    float media;
    int idade;
    printf("Determine o numero de alunos\n");
    scanf("%d", &n);
    while(c <= n){
        printf("\nDigite a idade\n");
        scanf("%d", &idade);
        soma = soma + idade;
        c = c + 1;
    }
    media = soma / n;
    printf("A media de idade dessa turma vale:%f", media);

    return 0;
}
