//T8a - Calcular a distancia entre 2 pontos e verificar se ocupam o mesmo espaco
#include <stdio.h>
#include <math.h>
int main(){
    struct p1{
      float x;
      float y;
    }p1;

    struct p2{
      float xl;
      float yl;
    }p2;

  scanf("%f %f", &p1.x, &p1.y);
  scanf("%f %f", &p2.xl, &p2.yl);
  
  float diferenca_x;
  float diferenca_y;
  float potencia_x;
  float potencia_y;
  float soma;
  float raiz;

  diferenca_x = p1.x - p2.xl;
  diferenca_y = p1.y - p2.yl;

  potencia_x = pow(diferenca_x,2);
  potencia_y = pow(diferenca_y,2);

  soma = potencia_x + potencia_y;

  raiz = sqrt(soma);

  if (raiz < 0.0000001){
    printf("os pontos sao iguais\n");
  }
  else{
    printf("os pontos nao sao iguais\n");
  }

return 0;
}