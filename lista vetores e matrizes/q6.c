#include <stdio.h>

int main(){
	int i;
	double notas[15];
	double media, somanotas = 0;
	printf("Insira as notas:\n");
	for (i = 0; i < 15; i++) {
		scanf(" %lf", &notas[i]);
		somanotas += notas[i];
	}
	media = somanotas / 15;
	if (media > 8.0) {
		media = 10.0;
	}
	printf("A media eh: %.1lf\n", media);
	return 0;
}
