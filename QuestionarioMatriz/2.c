#include<stdio.h>
int main(void){

    int mat1[2][2] = {{1,2}, {3,4}};
    int mat2[2][2] = {{5,6}, {7,8}};
    int mat3[2][2];
    int i, j;

    printf("\n\nMatriz 1: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz 2: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSoma das matrizes: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}