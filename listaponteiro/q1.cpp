#include <stdio.h>

void mystrcat(char *str1, char *str2) {
	while ((*str1) != '\0') {
		str1++;
	}
	while ((*str2) != '\0') {
		(*str1) = (*str2);
		str1++;
		str2++;
	}
	(*str1++) = '\0';
}

int main () {
	char frase1[50], frase2[50];
	gets(frase1);
	gets(frase2);
	mystrcat(frase1, frase2);
	printf("\n%s", frase1);
}

