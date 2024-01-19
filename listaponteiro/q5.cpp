#include <stdio.h>
#include <stdlib.h>

int main () {
	int vet[5];
	int i;
	int *p;
	for (i = 0; i < 5; i++) {
		scanf("%d", &vet[i]);
	}
	system("cls");
	printf("Endereco dos valores pares:\n");
	for (i = 0; i < 5; i++) {
		if (vet[i] % 2 == 0) {
			p = &vet[i];
			printf("%d: %p\n", *p, (void *)p);
		}
	}
	return 0;
}
