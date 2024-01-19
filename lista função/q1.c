	#include <stdio.h>

int mdc(int x, int y) {
	if (y > x) {
		int ord = x;
		x = y;
		y = ord;
	}
	
	if (x % y == 0) {
		return y;
	}
	return mdc(x-y, y);
}

int main() {
	int i, j, result = 0;
	scanf("%d %d", &i, &j);
	result = mdc(i, j);
	printf("%d", result);
	return 0;
}
