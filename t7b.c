//Tarefa 13: Conferindo palíndromos
#include <stdio.h>
#include <string.h>
#define N 20
int main(){

	char palavra [N];	
	char palindromo [N];					
	int pos;
	int posp = 0;						

	scanf("%s", palavra);

	for(pos = strlen(palavra); pos-1 >= 0; pos--){
		if(palavra[pos-1] >= 'A' && palavra [pos-1] <= 'Z'){
			palavra[pos-1] = ((palavra[pos-1] - 'A') + 'a');
		}
		palindromo[posp] = palavra[pos-1];
		posp++;
	}

	palindromo[posp] = '\0';		

	if(strcmp(palavra, palindromo) == 0){
		printf("Esta palavra e um palindromo");
	}
	else{
		printf("Esta palavra nao e um palindromo");
	}

	printf("\n");

return 0;	
}