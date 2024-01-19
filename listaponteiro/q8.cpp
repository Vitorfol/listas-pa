#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, j, *p;
	int mat[3][3];
	int contador = 0;
	printf("Aloc estatica:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			contador++;
			p = &contador;
			mat[i][j] = *p;
			printf("%d ", *p);
		}
		printf("\n");
	}
	printf("\n");
	contador = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			contador++;
			p = &mat[i][j];
			printf("O endereco da posicao %d eh: %p\n", contador, (void *)&mat[i][j]);
		}
	}
	printf("\n");     // alocacao estatica
	
	
	
	printf("Aloc dinamica:\n");
	int contador2 = 0;
	int **p1 = (int **)malloc(3*sizeof(int*));
	for (i = 0; i < 3; i++) {
		p1[i] = (int *)malloc(3*sizeof(int));
		for (j = 0; j < 3; j++) {
			contador2++;
			p1[i][j] = contador2;
			printf("%d ", p1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("O endereco da posicao %d eh: %p\n", p1[i][j], (void *)&p1[i][j]); 
		}
	}
	for (i = 0; i < 3; i++) {
		free(p1[i]);
	}
	free(p1);
}
