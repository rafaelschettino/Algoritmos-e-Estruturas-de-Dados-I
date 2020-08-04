#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura;
    float peso;
    float altura2;
    float imc;
    printf("Calculo do Indice de Massa Corporal\n");
    printf("Determine o peso em kg\n");
    scanf("%f", &peso);
    printf("Determine a altura em metros\n");
    scanf("%f", &altura);

    altura2 = pow(altura, 2);
    imc = peso / altura2;

    if(imc < 16){
        printf("Magreza grave");
    }
    else if(imc >= 16 && imc < 17){
        printf("Magreza moderada");
    }
    else if(imc >= 17 && imc < 18.5){
        printf("Magreza leve");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Saudavel");
    }
    else if(imc >= 25 && imc < 30){
        printf("Sobrepeso");
    }
    else if(imc >= 30 && imc < 35){
        printf("Obesidade Grau I");
    }
    else if(imc >= 35 && imc < 40){
        printf("Obesidade Grau II");
    }
    else if(imc > 40){
        printf("Obesidade Grau III");
    }


    return 0;
}
