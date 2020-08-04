#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data;
    printf("Determine um valor inteiro entre 1 e 7\n");
    scanf("%d", &data);
    if(data == 1){
        printf("O dia e domingo");
    }else if(data == 2){
        printf("O dia e segunda-feira");
    }else if(data == 3){
        printf("O dia e terca-feira");
    }else if(data == 4){
        printf("O dia e quarta-feira");
    }else if(data == 5){
        printf("O dia e quinta-feira");
    }else if(data == 6){
        printf("O dia e sexta-feira");
    }else if(data == 7){
        printf("O dia e sabado");
    }else{
        printf("Dia invalido");
    }

    return 0;
}
