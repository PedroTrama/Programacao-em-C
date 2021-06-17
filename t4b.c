//Calculadora de combinacao
#include <stdio.h>
int main(){
	int n, s, x, C;
	long fatorialn, fatorials, fatorialx;
	scanf("%d", &n);
	scanf("%d", &s);
	x = (n-s);
	fatorialn = 1;
	while(n > 1)		//Fatorial do primeiro valor
		fatorialn *= n--;
	fatorials = 1;
	while(s > 1) 		//Fatorial do segundo valor
		fatorials *= s--;
	fatorialx = 1;
	while(x > 1)		//Formula de combinacao
		fatorialx *= (x)--;
	C = (fatorialn)/((fatorials)*(fatorialx));
	printf("%d\n",C);

return 0;
}