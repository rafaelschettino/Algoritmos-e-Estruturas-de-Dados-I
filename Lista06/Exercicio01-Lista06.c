#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 10;
    do{
        printf("%d\n", c);
        c -= 1;
    }
    while( c >= 1);
    printf("\nFIM");
    return 0;
}
