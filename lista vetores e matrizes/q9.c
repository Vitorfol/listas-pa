#include <stdio.h>

int main(){
	
	double filiais[10];
	int contadorpreju = 0, i;
	for (i = 0; i < 10; i++) {
		scanf(" %lf", &filiais[i]);
		if (filiais[i] < 0) {
			contadorpreju++;
		}
	}
	printf("\n Dao prejuizo: %d\n", contadorpreju);
	return 0;
}
