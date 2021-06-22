//Trab_04 - Prepare-se para o Show do Miltao!
//Pedro Trama Fernandes Pereira. RA: 254344
#include <stdio.h>
#include <string.h>
#define N 200

int main(){
//declaracao de variavaeis linha por linha para ficar mais claro
char tipo [6];
char tipo2 [6];
char integer[] = {'I','N','T','\0'};
char floating[] = {'F','L','O','A','T','\0'};
char end[] = "FIM";
char perguntaI[N][200];
char perguntaF[N][200];
int alternativa1I[N];
int alternativa2I[N];
int alternativa3I[N];
float alternativa1F[N];
float alternativa2F[N];
float alternativa3F[N];
int gabaritoI[N];
int gabaritoF[N];
int respostaI;
int respostaF;
int i = 0;
int f = 0;
int n;

	while(1){//Loop infinito que para quando o usuario entrar com "FIM"

		scanf("%s", tipo);//Recebendo o tipo de resposta (int ou float)
		getchar();

		if(strcmp(tipo, end) == 0){//parada do laco
        	break;
        }		

		if(strcmp(tipo, integer) == 0){//respostas do tipo INT

			fgets(perguntaI[i], 200, stdin);
			perguntaI[i][strlen(perguntaI[i])-1] = '\0';
			scanf("%d ", &alternativa1I[i]);
      	  	scanf("%d ", &alternativa2I[i]);
        	scanf("%d", &alternativa3I[i]);
        	scanf("%d", &gabaritoI[i]);
        	i++;
        }	

        if(strcmp(tipo, floating) == 0){//respostas do tipo FLOAT

			fgets(perguntaF[f], 200, stdin);
			perguntaF[f][strlen(perguntaF[f])-1] = '\0';
			scanf("%f ", &alternativa1F[f]);
      	  	scanf("%f ", &alternativa2F[f]);
        	scanf("%f", &alternativa3F[f]);
        	scanf("%d", &gabaritoF[f]);
        	f++;
        }

	}

	printf("Prepare-se para o Show do Miltao!\n");//Comeca o show do Miltao!

	for(;strcmp(tipo2, end) != 0; scanf("%s", tipo2)){

		scanf("%d", &n);

		if(strcmp(tipo2, integer) == 0){
			printf("Pergunta: %s\n", perguntaI[n]);
			printf("Alternativa 0: %d\n", alternativa1I[n]);
			printf("Alternativa 1: %d\n", alternativa2I[n]);
			printf("Alternativa 2: %d\n", alternativa3I[n]);
			scanf("%d", &respostaI);

				if(respostaI == gabaritoI[n]){
					printf("Parabens, voce acertou!\n");
				}
				
				if(respostaI != gabaritoI[n]){
					printf("Resposta errada, voce perdeu!\n");

					return 0;
				}
		}

		if(strcmp(tipo2, floating) == 0){
			printf("Pergunta: %s\n", perguntaF[n]);
			printf("Alternativa 0: %.2f\n", alternativa1F[n]);
			printf("Alternativa 1: %.2f\n", alternativa2F[n]);
			printf("Alternativa 2: %.2f\n", alternativa3F[n]);
			scanf("%d", &respostaF);

				if(respostaF == gabaritoF[n]){
					printf("Parabens, voce acertou!\n");
				}
				if(respostaF != gabaritoF[n]){
					printf("Resposta errada, voce perdeu!\n");

					return 0;
				}	
		}
	}

return 0;
}