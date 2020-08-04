#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1;
    float total = 0;
    float n;
    float media;
    float idade;
    printf("Determine o numero de alunos\n");
    scanf("%f", &n);
    while(c <= n){
        printf("\nDigite a idade\n");
        scanf("%f", &idade);
        total = total + idade;
        c = c + 1;
    }
    media = total / n;
    printf("A media de idade dessa turma vale:%f", media);

    return 0;
}
