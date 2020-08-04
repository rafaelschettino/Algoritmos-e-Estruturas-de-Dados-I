#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int flag = -1;
    float nota;
    float media_reprovados;
    float media_aprovados;
    float soma_reprovados = 0;//soma das notas dos reprovados
    float soma_aprovados = 0;//soma das notas dos aprovados
    int n_reprovados = 0;//numero de alunos reprovados
    int n_aprovados = 0;//numero de alunos aprovados

    printf("\n\t\t\tNota média de alunos aprovados e reprovados\n");
    do{
        printf("\nObs: Digite [-1] para encerrar a leitura das notas!\n");
        printf("\nDetermine a nota final de um aluno: ");
        scanf("%f", &nota);
        if(nota < -1 || nota > 100){
            printf("\nValor invalido!Tente novamente\n");
        }//fim do if
    }while(nota < -1 || nota > 100);

    while(nota != flag){
        if(nota >= 60){
            n_aprovados++;
            soma_aprovados = soma_aprovados + nota;
        }//fim do if
        if(nota < 60){
            n_reprovados++;
            soma_reprovados = soma_reprovados + nota;
        }//fim do if
        do{
            printf("Determine a nota final de um aluno: ");
            scanf("%f", &nota);
            if(nota < -1  || nota > 100){
                printf("\nValor invalido!Tente novamente\n");
            }//fim do if
        }while(nota <-1 || nota > 100);
    }//fim da flag

    if(n_aprovados > 0){
        media_aprovados = (float)soma_aprovados / n_aprovados;
    }//fim do if
    if(n_reprovados > 0){
        media_reprovados = (float)soma_reprovados / n_reprovados;
    }//fim do if

    printf("\nNota media de alunos aprovados = %f", media_aprovados);
    printf("\nNota media de alunos reprovados = %f", media_reprovados);
    return 0;
}
