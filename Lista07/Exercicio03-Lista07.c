#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto;
    int chapa1 = 0;
    int chapa2 = 0;
    int total = 0;
    int branco = 0;
    int nulo = 0;
    float percentual1;
    float percentual2;
    do{
        do{
            printf("Votacao diretor do Diretorio Academico\n");
            printf("Escolha um dos numeros dependendo do seu interesse\n");
            printf("\t0 - Sair do programa\n\t1 - Chapa1\n\t2 - Chapa2\n\t3 - Branco\n\t4 - Nulo\n");
            scanf("%i", &voto);
            if(voto < 0 || voto > 4){
                printf("\nValor invalido!Tente novamente\n");
            }
        }while(voto < 0 || voto > 4);
            switch(voto){
            case 0:
                break;
            case 1:
                ++chapa1;
                ++total;
                break;
            case 2:
                ++chapa2;
                ++total;
                break;
            case 3:
                ++branco;
                ++total;
                break;
            case 4:
                ++nulo;
                ++total;
                break;
            }
    }while(voto > 0 && voto <= 4);

    printf("\nChapa 1 = %d\n", chapa1);
    printf("Chapa 2 = %d\n", chapa2);
    printf("Voto em branco = %d\n", branco);
    printf("Votos nulos = %d\n", nulo);

    percentual1 = ((float)chapa1 / total) * (100);
    percentual2 = ((float)chapa2 / total) * (100);

    if(percentual1 > percentual2)
        printf("\nA chapa 1 foi a vencedora! Com um percentual igual a: %f", percentual1);

    if(percentual2 > percentual1)
        printf("\nA chapa 2 foi a vencedora! Com um percentual igual a: %f", percentual2);
    if(chapa1 == chapa2)
        printf("\nEmpate");

    return 0;
}
