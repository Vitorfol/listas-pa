#include <stdio.h>
#include <stdlib.h>

int main () {
	int i;
	float v1[10];
	float *pv1;
	printf("Alocacao estatica:\n");
	for (i = 0; i < 10; i++) {
		pv1 = &v1[i];
		printf("%p\n", (void *)pv1);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
	    v1[i] = i;
	    pv1 = &v1[i];
	    printf("%f\n", *v1);
	}  // alocacao estatica
	
	printf("\nAlocacao dinamica:\n");	 
    float *p = (float *) malloc(10*sizeof(float));
    float *plinha;
    if (p == NULL) {
    	printf("Erro na memoria");
    	exit(1);
	}
	for (i = 0; i < 10; i++) {
		p[i] = i;
		plinha = &p[i];
		printf("%p\n", (void *)plinha);
	}
	printf("\n");
	for (i = 0; i < 10; i++) {
		p[i] = i;
		plinha = &p[i];
		printf("%f\n", *plinha);
	}
	free(p); // alocacao dinamica 
}

