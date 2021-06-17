//t8c
#include <stdio.h>
#define N 20

int main(){

	float imc;

	struct corpo{
		float altura;
		float peso;
		char nome [N];
	}c;

	scanf("%f", &c.altura);
	scanf("%f", &c.peso);
	scanf("%s", &c.nome[N]);


	imc = c.peso/(c.altura*c.altura);

	printf("%.3f\n", imc);


return 0;
}