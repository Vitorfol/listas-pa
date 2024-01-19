#include <stdio.h>

int main(){
	
	int linha, i, j, soma = 0, matriz[3][3];
	double media;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			scanf(" %d", &matriz[i][j]);
		}
	}
	printf("\nInforme uma linha: \n"); 
	scanf("%d", &linha);
	for (j = 1; j <= 3; j++) {
		soma += matriz[linha][j];
	}
	media = soma / 3.0
	printf("A media eh: %.1lf", media);
	return 0; 
}
