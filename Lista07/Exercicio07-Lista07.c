#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag = 0;
    int mvelho;
    int mnovo;
    int idade;
    int c;
    int maior = 0;
    float percentual;

    do{
        printf("Determine as idades [1 a 100]\n");
        scanf("\n%d", &idade);
        if(idade < 1 || idade > 100){
            printf("\nIdade invalida!Tente novamente\n");
        }
    }while(idade < 1 || idade > 100);

    mvelho = idade;
    mnovo = idade;
    c = 1;
    if(idade >= 18){
        maior = 1;
    }

    do{
        scanf("%d", &idade);
        if(idade > mvelho){
            mvelho = idade;
        }
        if(idade < mnovo && idade != 0){
            mnovo = idade;
        }
        if(idade >= 18){
            maior++;
        }
        if(idade == 0){
            printf("\nFinal da leitura!\n");
            break;
        }
        c++;
    }while(idade != flag);

    percentual = (float)maior / (float)c;
    printf("\nO percentual de alunos maiores de idade e:%f", percentual);
    printf("\nA maior idade dessa turma e:%d", mvelho);
    printf("\nA menor idade dessa turma e:%d", mnovo);
    return 0;
}
