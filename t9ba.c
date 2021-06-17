//t9ba
#include <stdio.h>

void cubo(int *A, int *B, int i){
    for (i = 0; i <= 9; i++){
		B[i] = A[i]*A[i]*A[i];
        printf("%d\n", B[i]);
    }
}

int main(){
    int A[10], B[10], i;
	for (i = 0; i <= 9; i++){
        scanf("%d", &A[i]);
    }
	cubo(A,B,i);

return 0;
}