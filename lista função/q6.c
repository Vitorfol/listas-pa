#include <stdio.h>

void mybub(int *v, int n) {
	int i, j;
	for (j = 0; j < n; j++) { 
		for (i = 0; i < n-1; i++) {
			if (v[i] > v[i+1]) {
				int aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
}

int main() {
	int x;
	int j;
	scanf("%d", &x);
	int vetor[x];
	for (j = 0; j < x; j++) {
		scanf("%d", &vetor[j]);
	}
	mybub(vetor, x);
	for (j = 0; j < x; j++) {
		printf("%d ", vetor[j]);
	}
	return 0;
	
}
