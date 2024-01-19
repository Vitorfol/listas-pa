#include <stdio.h>

int somaprimos() {
	
	int soma = 0;
	int auxiliar; 
	for (auxiliar = 1; auxiliar <= 1000; auxiliar++) {
		int contador = 0;
		int i; 
		for (i = auxiliar; i > 0; i--) {
			if (auxiliar % i == 0) {
				contador++;
			}
		}
		if (contador == 2) {
			soma += auxiliar;
		}
	}
	return soma;
}

int main(){
	int resultado;
	resultado = somaprimos();
	printf("%d", resultado);
	return 0;	
}
