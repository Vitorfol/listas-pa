#include <stdio.h>

int resto(int x, int y) {
	if (x == y) {
		return 0;
	}
	
	if (x < y) {
		return x;
	}
	return resto(x-y, y);
}

int main () {
	int i, j, result = 0;
	scanf ("%d %d", &i, &j);
	result = resto(i, j);
	printf("%d", result);
	return 0;
}
