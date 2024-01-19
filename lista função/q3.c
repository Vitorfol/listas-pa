#include <stdio.h>

int intervalo (int x, int y) {
	if (x > y) {
		int i = x; 
		int x = y;
		int y = i;
	}
	int z, soma= 0;
	for (z = x; z <= y; z++) {
		soma += z;
	}
	return soma;
}

int main(){
	int i, j, result;
	scanf("%d %d", &i, &j);
    result = intervalo(i, j);
	printf("%d", result);
	return 0;
}
