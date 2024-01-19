#include <stdio.h>

int main(){
	int i, j, matriz[3][3];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf(" %d", &matriz[i][j]);
			if (matriz[i][j] % 2 == 0) {
				matriz[i][j] = 1;
			}
			else {
				matriz[i][j] = -1;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
