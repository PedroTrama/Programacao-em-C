//Interpolador de vetores
#include <stdio.h>
int main(){
	int vetora[10];
	int vetorb[10];
	int a = 0;
	int b = 0;
	int c = 0;
		for(a=0; a<10; ++a){				//Vetor A
			scanf("%d", &vetora[a]);
		}
		for(b=0; b<10; ++b){				//Vetor B
			scanf("%d", &vetorb[b]);
		}
		for(c=0; c<10; ++c){				//Interpolador de A e B
			printf("%d", vetora[c]);
			printf("|%d|", vetorb[c]);
		}
		printf("\n");
	return 0;
}