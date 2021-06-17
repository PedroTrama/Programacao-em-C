//Fazendo a Transposta de Matrizes
#include <stdio.h>
#define N 20

int main() {
	int m1[N][N];
	int l; 
	int c; 
	int NUM_LIN; 
	int NUM_COL;

	scanf("%d %d",&NUM_LIN,&NUM_COL); 				//Recebendo o numero de linhas e colunas
	
	for (l=0; l < NUM_LIN; l++){					//Criando a Matriz
		for (c=0; c < NUM_COL; c++){
		scanf("%d",&m1[l][c]);
		}
	}
	if (NUM_LIN == NUM_COL){						//Condicao para separar matrizes quadradas e nao quadradas
		for (l=0; l < NUM_LIN; l++){				//Se for quadrada so inverte as linhas e colunas
			printf("\n");
			for (c=0; c < NUM_COL; c++){
				printf("%d ",m1[c][l]);				//invertendo local das linhas e colunas
			}
		}
	}
	else{											//Se nao for quadrada comparamos linha e colunas invertendo
		for (l=0; l < NUM_COL; l++){
			printf("\n");
			for (c=0; c < NUM_LIN; c++){
				printf("%d ",m1[c][l]);
			}	
		}
	}
	printf("\n");
return 0;
}
