//Trabalho 02 - Triângulo de Floyd: Pedro Trama RA:254344
#include <stdio.h>
int main()
{
	int n; //n é a variável de entrada equivalente ao número de linhas(n) do triangulo;
	int a; //a é a variável equivalente ao número da atual linha enquanto o laço roda;
	int b; //b é uma variável de controle usada no segundo laço aninhado e faz o mesmo papel que "a" fez no primeiro;
	int x; //x é a variável equivalente a quantos números o triângulo tem no total;
	scanf("%d", &n); //Detectando a entrada;
		//A partir daqui faço o uso de laços. O primeiro "for" gera as linhas e o segundo "for" repete os "0" ou "1" de cada linha uma quantidade de vezes = a
		for (a=1;a<=n;a++){ //Aqui começamos o laço. O começo da repetição é a=1, ou seja, linha a é 1. A condição a<=n é o critério de parada pois
		                    //queremos que o programa pare após gerar n linhas. O incremento a++ faz com que "a" aumente em 1 a cada repetição
		                    //pois cada repetição deve ser uma linha nova;
			for (b=1;b<=a;b++){ //Esse segundo laço gera a repetição dos números por linha e segue a mesma lógica do anterior;
				//Aqui temos uma condição para que nas linhas "a" pares todos números sejam 0 e nas ímpares 1.
				//A distinção entre pares e ímpares é feita comparando o resto da divisão com 0 usando os comandos matemáticos % e ==;		
				if(a%2==0){
					printf("0");//Par;
				}	
				else{
					printf("1");//Ímpar;
				}
			}
		if(a%2!=0){ //Essa parte do programa coloca a quantidade de números que existem nas linhas ímpares usando a mesma lógica da condicional anterior;
			printf("=%d",b-1);//Por algum motivo o valor sempre dava um acima do que de fato havia na linha, então, ao invés de "b" usei "b-1";
		}
		printf("\n");//Pulando a última linha;
		}
	x = n*(n+1)/2; //Fórmula que calcula o número de elementos x;		
	printf("%d\n", x); //Escrevendo, ao fim da saída, o valor x calculado acima. 
	return 0;
}