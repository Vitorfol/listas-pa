#include <stdio.h>
int main(){
	
	double soma = 0.0, faturamento[8];
	int lucro = 0, i; 
	for (i = 0; i < 8; i++) {
		scanf(" %lf", &faturamento[i]);
	}
	for (i = 0; i < 8; i++) {
		soma += faturamento[i];
		if (faturamento[i] > 0) {
			lucro++;
		}
	}
	printf("A soma eh: %.3lf\n", soma);
	printf("Numero de filiais com lucro: %d", lucro);
	return 0;
}
