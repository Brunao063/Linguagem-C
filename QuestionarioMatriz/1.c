#include<stdio.h>

int main(void) {

    int mat[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nPrimeira linha: \n");
    for(i = 0; i < 3; i++) {
        printf("%d ", mat[0][i]);
    }

    printf("\n\nPrimeira coluna: \n");
    for(j = 0; j < 3; j++) {
        printf("%d\n", mat[j][0]);
    }

    printf("\nImprimindo a matriz toda: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}