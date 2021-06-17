//Tarefa 12 - Invertendo uma String
#include <stdio.h>
#include <string.h>
int main(){				

	char palavra [81];							//String
	char pos;									//Variavel para a posicao de um caractere na string
																				
	fgets(palavra, 81, stdin);
	palavra[strlen(palavra)-1] = '\0';			//removendo o \n 
	
	for(pos = strlen(palavra)-1; pos >= 0; pos--){
			printf("%c", palavra[pos]);
	}
	
	printf("\n");

return 0;	
}