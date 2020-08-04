#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    float denominador1 = 100.0;
    float numerador1 = 1.0;
    float denominador2 = 2.0;
    float numerador2 = 97.0;

    printf("Determine o numero de termos da sequencia\n");
    scanf("%d", &n);

    for(i = 1; i <=n; i++){
        if(i % 2 != 0){
            printf("%f \\ %f \n", numerador1, denominador1);
            denominador1 = denominador1 - 6;
            numerador1 = numerador1 + 2;
        }
        if(i % 2 == 0){
            printf("%f \\ %f \n", numerador2, denominador2);
            denominador2 = denominador2 + 2;
            numerador2 = numerador2 - 6;
        }

    }


    return 0;
}
