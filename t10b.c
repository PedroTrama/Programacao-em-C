#include<stdio.h>
#include<stdlib.h>

int simetria(int **matriz, int i, int j){
    
    int x;
    int transposta;
    if (i==j){
        for(transposta=0;transposta<i;transposta++){
            for(x=0;x<j;x++){
                if((matriz[transposta][x])!= (matriz[x][transposta]))
                    return 0;
            }
        }
        return 1;
    }
    else return 0;
}

int main(){
    
    int i;
    int j;
    int x;
    int transposta;
    int resultado;
    int **matriz;

    scanf("%d %d",&i,&j);
    matriz = (int*) malloc(i*sizeof(int*));
    
    for (x=0; x<i; x++){
        matriz[x] = (int*) malloc(j*sizeof(int));
    }
   
    for(transposta=0;transposta<i;transposta++){
        for(x=0;x<j;x++){
            scanf("%d",&matriz[transposta][x]);
        }
    }
    
    resultado = simetria(matriz,i,j);
    if(resultado == 1){
        printf("Eh simetrica\n");
    }
    else printf("Nao eh simetrica\n");
}