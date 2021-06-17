//Calculadora com Ifs e elses
#include <stdio.h>
int main() {
    float a;
    float b;
    char c;
    scanf("%f%c%f",&a,&c,&b);   
    	if(c=='+')   
       		printf("%.3lf+%.3lf=%.3lf\n", a, b, a+b);
       	else
       		if(c=='-')   
       		printf("%.3lf-%.3lf=%.3lf\n", a, b, a-b);
       	else
       		if(c=='*')   
       		printf("%.3lf*%.3lf=%.3lf\n", a, b, a*b);
       	else
       		if(c=='/')   
       		printf("%.3lf/%.3lf=%.3lf\n", a, b, a/b);
       	else  
       		printf("Operador invalido\n");     
    return 0;
}