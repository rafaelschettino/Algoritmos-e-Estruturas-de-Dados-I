#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Identificar se um numero e par\n");
    printf("Determine o numero\n");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Esse numero e par");
    }
    else if(num % 2 != 0){
        printf("Esse numero nao e par");
    }

    return 0;
}
