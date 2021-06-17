//t10a
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   
    int n;
    int grau;
    float* coeficiente;
    float x;
    float funcao = 0;

    scanf("%d", &grau);

    coeficiente = (float*)malloc((grau+1)*sizeof(float));

    for (n = 0; n < grau+1; n++){
        scanf("%f", &coeficiente[n]);
    }

    scanf("%f", &x);

    for (n = 0; n < grau+1; n++){
        funcao = funcao + coeficiente[n]*(pow(x, n));
    }
    
    printf("%.2f\n", funcao);

return 0;
}