//t9bb
#include<stdio.h>

void soma(int a,int b,int c,int d){

    int real;
    int imaginaria;

    real = a+c;
    imaginaria = b+d;

    printf("%d + %di\n", real, imaginaria);

}

void multiplicacao(int a,int b,int c,int d){

    int real;
    int imaginaria;

    real = (a*c) - (b*d);
    imaginaria = (a*d) + (b*c);

    printf("%d + %di\n", real, imaginaria);
}

int main(){

    int a,b,c,d;
    char operador;

    scanf("%d %d %c %d %d",&a,&b,&operador,&c,&d);

    if (operador == '+')
        soma(a,b,c,d);
    else
        multiplicacao(a,b,c,d);

return 0;
}