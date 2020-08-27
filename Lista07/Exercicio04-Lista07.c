#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int a = 0;
    int b = 1;
    int f = a + b;
    
    printf("Determine o numero de termos da sequencia\n");
    scanf("%d", &n);
    
    printf("\nSequencia de Fibonacci\n");
    for(i = 1; i <= n; i++){
        if(i == 1){
            printf("%d\n", a);
        }else if(i == 2){
            printf("%d\n", b);
        }else{
            f = a + b;
            a = b;
            b = f;
            printf("%d\n", f);
         }//fim if
    }//fim for i
    return 0;
}
