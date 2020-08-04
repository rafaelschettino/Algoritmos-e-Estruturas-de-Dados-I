#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int i;
    int a_i;

    printf("\t\t Serie de Fetuccine\n");
    printf("Cem primeiros termos\n");
    printf("\nDetermine o primeiro numero da serie: ");
    scanf("%d", &num1);
    printf("\nDetermine o segundo numero da serie: ");
    scanf("%d", &num2);

    printf("%d", num1);
    printf("\n%d\n", num2);

    for(i = 3; i < 100; i++){
        if(i % 2 == 0){
            a_i = num2 - num1;
        }//fim if
        if(i % 2 == 1){
            a_i = num2 + num1;
        }//fim if
        printf("%d\n", a_i);
        num1 = num2;
        num2 = a_i;
    }//fim for
    printf("\nFIM DA SERIE\n");

    return 0;
}
