#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    int codigo;
    float pesom;
    float pesov;
    float pesoma;
    float pesoj;
    float pesos;
    float pesou;
    printf("Determine o peso na Terra\n");
    scanf("%f", &peso);
    printf("Determine um numero de 1 a 6 para a escolha de um planeta\n");
    scanf("%d", &codigo);
    if(codigo == 1){
        printf("O planeta escolhido foi Mercurio");
        pesom = peso * 0.37;
        printf("\nSeu peso em Mercurio vale:%f", pesom);
    }
    else if(codigo == 2){
        printf("O planeta escolhido foi Venus");
        pesov = peso * 0.88;
        printf("\nSeu peso em Venus vale:%f", pesov);
    }
    else if(codigo == 3){
        printf("O planeta escolhido foi Marte");
        pesoma = peso * 0.38;
        printf("\nSeu peso em Marte vale:%f", pesoma);
    }
    else if(codigo == 4){
        printf("O planeta escolhido foi Jupiter");
        pesoj = peso * 2.64;
        printf("\nSeu peso em Jupiter vale:%f", pesoj);
    }
    else if(codigo == 5){
        printf("O planeta escolhido foi Saturno");
        pesos = peso * 1.15;
        printf("\nSeu peso em Saturno vale:%f", pesos);
    }
    else if(codigo == 6){
        printf("O planeta escolhido foi Urano");
        pesou = peso * 1.17;
        printf("\nSeu peso em Urano vale:%f", pesou);
    }
    else{
        printf("Codigo de planeta invalido");
    }


    return 0;
}
