//Calculadora de lucros e quantidade de materiais vendidos
#include <stdio.h>
int main(){
	float quantidade[10];
	float valor[10];
	float qntd=0;
	float lucro;
	float soma;
	int n;
		for(n=0; n<10; n++){
			scanf("%f", &quantidade[n]);
		}
		for(n=0; n<10; n++){
			scanf("%f", &valor[n]);
		}
		for(n=0; n<10; n++){
			qntd += quantidade[n];
		}
		for(n=0; n<10; n++){
			soma = quantidade[n]*valor[n];
			lucro += soma;
		}
		printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %0.f\n", lucro, qntd);

	return 0;
}