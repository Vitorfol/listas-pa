#include <stdio.h>


void funcao(int *a, int b) {
	(*a) += b;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("o valor de x antes da passagem eh:");
	printf("%d\n", x);
	funcao(&x, y);
	printf("o valor de x depois da passagem eh: %d", x);
}
