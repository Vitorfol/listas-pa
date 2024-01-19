#include <stdio.h>

int mypow(int x, int y) {
	if (y == 0) {
		return 1;
	}
	return x * mypow(x, y-1);
}

int main () {
	int i, j, result = 0;
	scanf("%d %d", &i, &j);
	result = mypow(i, j);
	printf("%d", result);
	return 0;
}
