#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int num1;
    int num2;
    printf("Determine o primeiro valor da sequencia\n");
    scanf("%d", &num1);
    printf("\nDetermine o ultimo valor da sequencia\n");
    scanf("%d", &num2);
    for(c = 1; c <= num2; c ++){
        printf("%d\n", num1);
        num1 ++;
    }
    return 0;
}
