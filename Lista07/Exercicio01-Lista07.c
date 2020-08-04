#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double h = 0;
    double denominador = 100;
    int n;
    printf("Determine o numero de termos\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        h = h + (1 / (double)denominador);
        denominador = denominador - 3;

    }
    printf("\nA soma desses termos vale: %lf", h);
    return 0;
}
