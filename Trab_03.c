//Trab_03 - A Lambanca de Serv Idor
//Pedro Trama Fernandes Pereira. RA: 254344

#include <stdio.h>
#include <math.h>
#define N 10
int main(){

//Declaracao de variaveis:
	int mapeamento[N][N];		//Matriz do mapeamento original
	int correcao[N][N];			//Matriz para corrigir as posicoes
	int final[N][N];		    //Maztriz resultante da correcao
	int n;						//Variavel que recebe o tamanho "n" da matriz quadrada
	int x;						//Variavel que recebe o fator de correcao "x"
	int linhas, colunas;		//Variaveis para linhas e colunas das matrizes que o usuario digita
	int linhas2, colunas2;		//Variaveis para linhas e colunas das matrizes que o programa calcula
	int controle;				//Variavel de controle para que o fator de correcao possa ser usado
	double soma[N]; 	   		//Vetor de soma
	double media[N];			//Vetor de media
	double desvio[N];			//Vetor de desvio padrao
	double somatoria[N];		//Vetor de somatoria para a formula do desvio padrao

//Leitura de entradas:

	scanf("%d", &n);			//lendo a entrada do tamanho da matriz
	scanf("%d", &x);			//lendo a entrada do fator de correcao

	for(linhas = 0; linhas < n; linhas++){				 //laco para linhas da matriz original
		for(colunas = 0; colunas < n; colunas++){		 //laco para colunas da matriz original
			scanf("%d", &controle);						 //leitura da variavel de controle
			mapeamento[linhas][colunas]=(controle * x);  //construcao da efetiva da matriz
		}
	}

	for(linhas = 0; linhas < n; linhas++){				//O procedimento dessa eh similar ao anterior, porem,
		for(colunas = 0; colunas < n; colunas++){		//serve para receber a matriz de correcao das posicoes
			scanf("%d", &correcao[linhas][colunas]);	
		}
	}

//Correcao da matriz. Nessa etapa as matriz original(mapeamento) é assimilada pelo compilador, assim como a matriz de correcao.
//Essa etapa tem como funcao organizar as entradas lidas anteriormente

	for(linhas2 = 0; linhas2 < n; linhas2++){			
 		for(colunas2 = 0; colunas2 < n; colunas2++){
			mapeamento[linhas2][colunas2];				
 		}
 	}

 	for(linhas2 = 0; linhas2 < n; linhas2++){
 		for(colunas2 = 0; colunas2 < n; colunas2++){
 			correcao[linhas2][colunas2];
 		}
 	}

//Saida da Matriz Corrigida:
//Essa etapa aplica o fator de correcao na matriz mapeamento para imprimir na tela a matriz final corrigida

 	printf("Matriz Corrigida\n");
 	for(linhas2 = 0; linhas2 < n; linhas2++){
 		for(colunas2 = 0; colunas2 < n; colunas2++){
 			final[colunas2][linhas2] = mapeamento[colunas2][correcao[linhas2][colunas2]];		//definicao da matriz final corrigida
 		}
 	}

 	for(linhas2 = 0; linhas2 < n; linhas2++){
 		for(colunas2 = 0; colunas2 < n; colunas2++){
 			printf("%d\t", final[linhas2][colunas2]);											//impressao da matriz corrigida
 		}
 		printf("\n");
 	}
//A partir desse ponto a matriz esta corrigida e em seu formato correto.
//Iremos efetuar os tres calculos a seguir com os valores de suas colunas. 
//Somas
 	for(linhas2 = 0; linhas2 < n; linhas2++){
 		for(colunas2 = 0; colunas2 < n; colunas2++){
 			soma[colunas2] += final[linhas2][colunas2];
 		}
 	}

//Medias
 	for(linhas2 = 0; linhas2 < n; linhas2++){
 		for(colunas2 = 0; colunas2 < n; colunas2++){
 			media[colunas2] = soma[colunas2] / n;
 		}
 	}

//Desvios
  	for(colunas2 = 0; colunas2 < n; colunas2++){
  		somatoria[colunas2] = 0;					//somatoria eh um vetor de controle para facilitar o calculo do desvio
  		desvio [colunas2] = 0;						//esses dois vetores sao iniciados como 0 para nao haver problemas de compilacao
  		for(linhas2 = 0; linhas2 < n; linhas2++){	
  			somatoria[colunas2] += pow(final[linhas2][colunas2]-media[colunas2],2);	//essa parte da formula fica dentro da raiz e ajuda a organizar as etapas do laco
 		}
 		desvio[colunas2] = sqrt(somatoria[colunas2]/n); //resultado final aplicando a raiz quadrada ao calculo anterior
 	}
 	
 	
 //Saida das Contas
	printf("Somas::");
 	for (colunas2 = 0; colunas2 < n; colunas2++){
 		printf("%.2lf\t", soma[colunas2]);
 	}
 	printf("\n");

 	printf("Medias::");
 	for (colunas2 = 0; colunas2 < n; colunas2++){
 		printf("%.2lf\t", media[colunas2]);
 	}
 	printf("\n");

 	printf("Desvios::");
 	for (colunas2 = 0; colunas2 < n; colunas2++){
 		printf("%.2lf\t", desvio[colunas2]);
 	}
 	printf("\n");

 return 0;
}