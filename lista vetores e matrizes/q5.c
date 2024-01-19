#include <stdio.h>

int main() {
	
	int matrizA[2][3];
	int matrizB[2][3];
	int matrizC[2][3];
	int i, j; 
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d" ,&matrizB[i][j]);
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d ", matrizC[i][j]);
			}
			printf("\n");
		}
				for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d ", matrizB[i][j]);
			}
			printf("\n");
		}
			for (i = 0; i < 2; i++) {
			for (j = 0; j < 3; j++) {
				printf("%d ", matrizA[i][j]);
			}
			printf("\n");
		}
}
