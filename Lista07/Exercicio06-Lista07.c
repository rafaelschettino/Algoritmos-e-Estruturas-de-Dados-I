#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int mvelho;
    int mnovo;
    int idade;
    int c;
    int maior = 0;
    float percentual;

    printf("Determine o numero de alunos da turma:\n");
    scanf("%d", &n);

    do{
        printf("Determine as idades [1 a 100]\n");
        scanf("\n%d", &idade);
        if(idade < 1 || idade > 100){
            printf("\nIdade invalida!Tente novamente\n");
        }
    }while(idade < 1 || idade > 100);

    mvelho = idade;
    mnovo = idade;
    if(idade >= 18){
        maior = 1;
    }

    for(c = 2; c <= n; c++){
        scanf("%d", &idade);
        if(idade > mvelho){
            mvelho = idade;
        }
        if(idade < mnovo){
            mnovo = idade;
        }
        if(idade >= 18){
            maior++;
        }
    }

    percentual = (float)maior / (float)n;
    printf("\nO percentual de alunos maiores de idade e:%f", percentual);
    printf("\nA maior idade dessa turma e:%d", mvelho);
    printf("\nA menor idade dessa turma e:%d", mnovo);
    return 0;
}
