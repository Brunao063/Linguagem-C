#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(NULL));
    int mat[4][4];
    int i, j, num1, num2;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            mat[i][j] = rand() % 10 + 1;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma de cada linha:\n");
    for (i = 0; i < 4; i++) {
        num1 = 0;
        for (j = 0; j < 4; j++) {
            num1 += mat[i][j];
        }
        printf("Linha %d: %d\n", i+1, num1);
    }

    printf("\nSoma de cada coluna:\n");
    for (j = 0; j < 4; j++) {
        num2 = 0;
        for (i = 0; i < 4; i++) {
            num2 += mat[i][j];
        }
        printf("Coluna %d: %d\n", j+1, num2);
    }

    return 0;
}