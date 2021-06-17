#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dados{
        char nome[101];
        int RA;
        float nota_P1;
        float nota_P2;
    };

int main(){
    
    int n;
    int i;
    
    scanf("%d", &n);
    struct dados* alunos;

    alunos = (struct dados*)malloc(n*sizeof(struct dados));

    for (i = 0; i < n; i++){
        getchar();
        scanf("%[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].RA);
        scanf("%f", &alunos[i].nota_P1);
        scanf("%f", &alunos[i].nota_P2);
    }
    
    for (i = 0; i < n; i++){
       printf("%d\t%s\t%.2f\n",  alunos[i].RA, alunos[i].nome, (alunos[i].nota_P1+alunos[i].nota_P2)/2);
    }

    return 0;
    
}