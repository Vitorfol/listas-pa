#include <stdio.h>
#include <stdlib.h>
void inverte(int *n);
int main() {
    int x;
    printf("Informe o numero:\n");
    scanf("%d", &x);
    inverte(&x);
    printf("%d", x);
    return 0;
}
void inverte(int *n) {
    int result = 0;
    int temp = *n;
    while (temp > 0) {
        result = result * 10 + temp % 10;
        temp /= 10;
    }
    *n = result;
}
