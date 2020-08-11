#include <stdio.h>
#include <stdlib.h>

void leArranjo(int c[]);
void deslocaMaiorParaFinal(int a[]);

int main(){
	int a[] = {6, 5, 4, 3, 2, 1};
	int b[] = {3, 1, 6, 4, 2, 5};
	int c[6];
	leArranjo(c);  // Preenche todo o arranjo com valores lidos
	deslocaMaiorParaFinal(a);   // Desloca o maior valor do arranjo para a última posição
	printf("%d\n", a[5]);
}//fim main()
void leArranjo(int c[])
{
	int i;
	printf("Preencha o arranjo:\n");
	for(i = 0; i < 6; i++){
		scanf("%d", &c[i]);
	}//fim for
}//fim leArranjo()

void deslocaMaiorParaFinal(int a[])
{
	int aux;
	int maior;
	maior = a[0];
	int i;
	for(i = 1; i < 6; i++){
		if(a[i] > maior){
			a[i] = maior;
			aux = a[i - 1];
			a[i - 1] = a[i];
			a[i] = aux;
		}//fim if
	}//fim for
}//fim deslocaMaiorParaFinal()
