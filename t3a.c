//Programa que calcula se um numero eh par ou impar
#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a%2 == 0)// o sinal de % pega o resto da divisao de a por 2
		printf ("par\n");
	else
		printf("impar\n");
	return 0;
}