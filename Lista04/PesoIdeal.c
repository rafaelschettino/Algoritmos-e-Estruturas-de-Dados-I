#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Calculo de peso ideal\n");
    printf("Identifique o genero\n");
    double h;
    double h1;
    double a;
    double b;
    double c;
    double d;
    double g;
    double w;
    char gen[15];
    scanf("%s", gen);

    if(gen[0] == 'M' || gen[0] == 'm'){
        printf("Digite a altura\n");
        scanf("%lf",&h);
        a = 72.7;
        c = 58.0;
        g = (a * h) - c;
        printf("O peso ideal é:%lf\n", g);
    }else if(gen[0] == 'F' || gen[0] == 'f'){
        printf("Digite a altura\n");
        scanf("%lf",&h1);
        b = 62.1;
        d = 44.7;
        w = (b * h1) - d;
        printf("O peso ideal é:%lf\n", w);
    }else{
        printf("Genero nao identificado\n");
    }

    return 0;
}
