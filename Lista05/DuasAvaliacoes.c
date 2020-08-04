#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float soma;
    printf("Determine a nota da primeira prova\n");
    scanf("%f", &nota1);
    printf("Determine a nota da segunda prova\n");
    scanf("%f", &nota2);
    soma = nota1 + nota2;
    printf("A nota total desse aluno foi:%f", soma);
    if(soma >= 60){
        printf("\nAluno aprovado");
    }
    else if(soma < 40){
        printf("\nAluno reprovado");
    }
    else if(soma >= 40 && soma < 60){
        printf("\nAluno em reavaliacao");
    }
    return 0;
}
