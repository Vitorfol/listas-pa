#include <stdio.h>

int main(){
	
	int i, j, matriz[3][3];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			matriz[i][j] = i + j;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
