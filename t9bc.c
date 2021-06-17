//t9bc
#include <stdio.h>

void busca(int *A, int N, int i, int *maior, int *menor){
    int j;
    int controle;
    for (i = N-1; i > 0; i--){
        for (j=0; j < i; j++){
            if (A[j] > A[j+1]){
                controle = A[j];
                A[j] = A[j+1];
                A[j+1] = controle;
            }
        }
    }
*maior = A[N-1];
*menor = A[0];
}

int main(){
    
    int N; 
    scanf("%d", &N);

    int A[N];
    int i;
    int maior;
    int menor;

    for (i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    busca(A, N, i, &maior, &menor);

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

return 0;
}