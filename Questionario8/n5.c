#include <stdio.h>

int main(void) {
int n, i, j, soma = 0;

printf("Digite a ordem da matriz quadrada: ");
scanf("%d", &n);

int mat[n][n];

printf("\nDigite os elementos da matriz:\n");
for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        scanf("%d", &mat[i][j]);
    }
}

printf("\nMatriz lida:\n");
for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}

for (i = 0; i < n; i++) {
    soma += mat[i][i];
}

printf("\nSoma dos elementos da diagonal principal: %d\n", soma);

return 0;
}