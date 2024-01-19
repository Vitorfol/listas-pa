#include <stdio.h>

double pesoideal(int x) {
	double altura;
	printf("digite sua altura\n");
	scanf("%lf", &altura);
	switch (x) {
		case 1: 
		return (72.7 * altura) - 58;
		break;
		case 2: 
		return (62.1 * altura) - 44.7;
	}		
}

int main() {
	printf("digite 1 para homem\ndigite 2 para mulher\n");
	int i;
	scanf("%d", &i);
	printf("O seu peso ideal eh: %.2lf\n", pesoideal(i));
	return 0;
}
