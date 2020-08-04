#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Verificacao da existencia de um triangulo\n");
    printf("Tamanho do primeiro lado \n");
    scanf("%f", &a);
    printf("Tamanho do seguundo lado \n");
    scanf("%f", &b);
    printf("Tamanho do terceiro lado \n");
    scanf("%f", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Corresponde a um triangulo\n");

        if (a == b && b == c) {
            printf("Triangulo equilatero");
        }else if (a == b && b != c) {
            printf("Triangulo isosceles");
        }else if (a == c && c != b) {
            printf("Triangulo isosceles");
        }else if (b == c && c != a) {
            printf("Triangulo isosceles");
        }else if (a != b && b != c && a != c) {
            printf("Triangulo escaleno");
        }//fim if
    }//fim if

    if(a + b < c){
        printf("Nao corresponde a um triangulo");
    }else if(a + c < b){
        printf("Nao corresponde a um triangulo");
    }else if(b + c < a){
        printf("Nao corresponde a um triangulo");
    }//fim if

    return 0;
}
