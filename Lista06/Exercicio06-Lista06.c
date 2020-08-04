#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int r;
    int t;
    int n;
    printf("Progressao Aritmetica\n");
    printf("Determine o numero de termos dessa PA\n");
    scanf("%d", &n);
    printf("Determine o primeiro termo da PA\n");
    scanf("%d", &t);
    printf("\nDetermine a razao\n");
    scanf("%d", &r);
    for(c = 0; c < n; c++){
        printf("\n%d", t);
        t = t + r;
    }

    return 0;
}
