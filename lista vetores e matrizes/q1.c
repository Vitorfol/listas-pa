#include <stdio.h>
int main(){
	int i;
	double nota[10];
	double somatotal = 0.0; 
	double media = 0;
	for (i = 0; i < 10; i++) {
		scanf("%lf", &nota[i]);
		if (nota[i] > 4) {
			somatotal += nota[i];
		}
	}
	media = somatotal / 10; 
	printf("A media eh: %.1lf", media);
	return 0;	
}
