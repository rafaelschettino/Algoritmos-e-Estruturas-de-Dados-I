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
        }//fim if
    }while(idade < 1 || idade > 100);

    mvelho = idade;
    mnovo = idade;
    c = 1;
    if(idade >= 18){
        maior = 1;
    }//fim if

    do{
        scanf("%d", &idade);
        if(idade > mvelho){
            mvelho = idade;
        }//fim if
        if(idade < mnovo && idade != 0){
            mnovo = idade;
        }//fim if
        if(idade >= 18){
            maior++;
        }//fim if
        if(idade == 0){
            printf("\nFinal da leitura!\n");
        }//fim if
        c++;
    }while(idade != flag);

    percentual = (float)maior / (float)c;
    printf("\nO percentual de alunos maiores de idade e:%f", percentual);
    printf("\nA maior idade dessa turma e:%d", mvelho);
    printf("\nA menor idade dessa turma e:%d", mnovo);
    return 0;
}
