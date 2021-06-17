//Ler 20 notas digitadas pelo usuario e armazenar em um vetor para dizer se ela exsite ou nao
#include <stdio.h>
int main(){
	float notas[20];
	float i=1;
	int n;
	for(n=0; n<20; n++){				//lendo as notas
		scanf("%f", &notas[n]);
	}
	while(i>=0){						
		scanf("%f", &i);
		if(i<0){						//Parar de ler se uma nota for menor que 0
			break;
		}
		for(n=0; n<20; n++){			//Verificao
		
			if(i == notas[n]){
				printf("existe\n");
				break;
			}
			if(i != notas[n] && n==19){
				printf("nao existe\n");			
			}	
		}
	}
	return 0;
}