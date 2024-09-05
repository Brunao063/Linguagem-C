#include<stdio.h>
#include<stdlib.h>
int main(void) {

    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int numD, i, j;

    printf("Digite o numero para multiplicar a matriz: ");
    scanf("%d", &numD);

    printf("\n\nimprimindo a primeira linha: \n");
    for(i = 0; i < 3; i++){
        printf("%d", mat[0][i]);
    }

    printf("\n\nimprimindo a primeira coluna: \n");
    for(j = 0; j < 3; j++){
        printf("%d", mat[j][0]);
    }

    printf("\n\nimprimindo a matriz toda: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nimprimindo a multiplicacao da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        mat[i][j] *= numD;
        printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}