//t9ab - Usando modularizacao para calcular notas
#include <stdio.h>
#include <math.h>

float media(char caractere,float nota1, float nota2);

int main (){
    
    char caractere;
	float nota1, nota2;
	
	scanf("%c", &caractere);
	scanf("%f %f", &nota1, &nota2);
	
	printf("%.3f\n", media(caractere, nota1, nota2));

return 0;
}

float media(char caractere,float nota1,float nota2){
	
	switch (caractere)
	{
		case 'A':
			return ((nota1+nota2)/2);
			break;
		
		case 'B':
			return (sqrt(nota1*nota2));
			break;
			
		default:
			return 0;
			break;
	}
}