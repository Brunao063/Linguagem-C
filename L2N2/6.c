#include <stdio.h>

int num1(int a, int b, int c){
    if (a < b && a < c) {
        return a;
    } else if(b < a && b < c){
        return b;
    }else if(c < a && c < b){
        return c;
    }
}

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    int maior = num1(a, b, c);

    printf("O menor numero e: %d", maior);

    return 0;
}