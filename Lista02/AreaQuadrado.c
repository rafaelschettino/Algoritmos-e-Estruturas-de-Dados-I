#include <stdio.h>
#include <stdlib.h>

int main(){
	double lado;
	double area;
	printf("Programa que calcula a area de um quadrado!\n");
	printf("Entre com o valor do lado do quadrado: ");
	scanf("%lf", &lado);
	area = lado * lado;
	printf("A area desse quadrado vale: %lf", area);
	return 0;
}
