//t9ac - Usando modularizacao para calcular notas
#include <stdio.h>
#include <math.h>

float calculo(char op, float x, float y);

int main (){

    char op;
	float x, y;
	
	scanf("%f%c%f", &x, &op, &y);
	printf("%.3f\n", calculo(op, x, y));

	return 0;
}

float calculo(char op, float x, float y){
	
	switch (op){

		case '+':
			return (x+y);
			break;
		
		case '-':
			return (x-y);
			break;
			
		case '*':
			return (x*y);
			break;
		
		case '/':
			return (x/y);
			break;
			
		case '^':
			return (pow(x, y));
			break;
			
		default:
			return 0;
			break;
	}
	
}



