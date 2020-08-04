#include <stdio.h>
#include <stdlib.h>

void leValor(float *x);
void SegundoMaior(float a, float *b, float c, float *aux);
void escreva(float b);

int main()
{
    float a;
    float b;
    float c;
    float aux;
    leValor(&a);
    leValor(&b);
    leValor(&c);
    SegundoMaior(a, &b, c, &aux);
    escreva(b);

}//fim main()

void leValor(float *x)
{
    printf("Entre com valor:\n");
    scanf("%f", x);
}//fim leValor()

void SegundoMaior(float a, float *b, float c, float *aux)
{
    if(a > *b){
        *aux = a;
        a = *b;
        *b = *aux;
    }//fim if
    if(*b > c){
        *aux = *b;
        *b = c;
        c = *aux;
    }//fim if
    if(a > *b){
        *aux = a;
        a = *b;
        *b = *aux;
    }//fim if
}//fim SegundoMaior()

void escreva(float b)
{
    printf("\nO segundo maior valor = %f", b);
}//fim escreva()


