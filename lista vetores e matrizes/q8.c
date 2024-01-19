#include <stdio.h>
#include <stdlib.h>

int main() {
	double altura[6];
	int i, j;
	for (i = 0; i < 6; i++) {
		scanf("%lf", &altura[i]);
	}
	double maior = 0.0, menor = 10.0;
	int posicaomaior, posicaomenor; 
	for (i = 0; i < 6; i++) {
		if (altura[i] > maior) {
			maior = altura[i];
			posicaomaior = i;
		}
		if (altura[i] < menor) {
			menor = altura[i];
			posicaomenor = i;
		}
	}
	printf("O maior eh: %.2lf\n sua posicao eh: %d\n", maior, posicaomaior + 1);
	printf("O menor eh: %.2lf\n sua posicao eh: %d\n", menor, posicaomenor + 1);
	   for (i = 0; i < 6 - 1; i++) {
        for (j = i + 1; j < 6; j++) {
            if (altura[i] > altura[j]) {
                double temp = altura[i];
                altura[i] = altura[j];
                altura[j] = temp;
            }
        }
    }
	 printf("Alturas em ordem crescente:\n");
    for (i = 0; i < 6; i++) {
        printf("%.2lf\n", altura[i]);
    }
    return 0; 
}
