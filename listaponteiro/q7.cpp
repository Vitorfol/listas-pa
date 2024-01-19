#include <stdio.h>
#include <stdlib.h>

struct usu {
	int idade;
	char nome[50];
};

typedef usu informacao;

int main () {
	int n, i, j;
	scanf("%d", &n);
	informacao *p = (informacao *)malloc(n*sizeof(informacao));
	for (i = 0; i < n; i++) {
		scanf("%d", &p[i].idade);
		scanf("%s", p[i].nome);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			if (p[j].idade > p[j+1].idade) {
			informacao ord = p[j];
			p[j] = p[j+1];
			p[j+1] = ord;
		   }
		}
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%s ", p[i].nome);
		printf("%d\n", p[i].idade);
	}
	free(p);
}

