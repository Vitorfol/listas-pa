#include <stdio.h>

int main(){
	
	int contador = 1, i, j, matriz[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			matriz[i][j] = contador;
			contador++;
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 5; i++) {
	int	soma = 0;
		for (j = 0; j < 5; j++) {
			soma += matriz[i][j];
		}
		printf("A soma da linha %d eh: %d\n", i+1, soma);
	}
	
	int diagonal[5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) {
				diagonal[i] = matriz[i][j];
			}
		}
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d ", diagonal[i]);
	}
	
	return 0;
}
