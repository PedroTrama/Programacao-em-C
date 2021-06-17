//loop para ler 10 numeros inteiros e imprimir na tela qnts sao par ou impar
#include <stdio.h>
int main(){
	int x = 1;
	int n = 0;
	int par = 0;
	int impar = 0;
	for(x=1;x<=10;x++){
		scanf("%d", &n);
		if(n%2 == 0){
			par+=1;
		}
		else{
			impar+=1;
		}
}
printf("%d pares, %d impares\n",par,impar);
return 0;
}