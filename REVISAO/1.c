#include<stdio.h>

int main(){

    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d", a+b);
    printf("\nSubtracao: %d", a-b);
    printf("\nDivisao: %d", a/b);
    printf("\nMultiplicacao: %d", a*b);

    return 0;
}