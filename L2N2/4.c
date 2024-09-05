#include <stdio.h>

int num1(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int maior = num1(a, b);

    printf("O menor numero e: %d", maior);

    return 0;
}