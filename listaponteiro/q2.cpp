#include <stdio.h>

int potval(int x, int y);
int potref(int x, int y, int *z);

int main () {
	int n, p, t;
	scanf("%d %d", &n, &p);
	potval(n, p);
	printf("%d\n", potval(n, p));
	potref(n, p, &t);
	printf("%d", potref(n, p, &t));
}

int potval(int x, int y) {
	int z = 1;
	while (y > 0) {
		z *= x;
		y--;
	}
	return z;
}

int potref(int x, int y, int *z) {
	*z = 1;
	while (y > 0) {
		(*z) *= x;
		y--;
	}
	return *z; 
}

