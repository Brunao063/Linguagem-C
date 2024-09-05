#include<stdio.h>

int num1(int a, int b, int c){
    return b*b-4*a*c;
}

int main(){

    int a, b ,c;

    printf("Digite um numero para 'a':");
    scanf("%d", &a);

    printf("Digite um numero para 'b':");
    scanf("%d", &b);

    printf("Digite um numero para 'c':");
    scanf("%d", &c);

    int delta = num1(a, b, c);

    printf("O valor de delta e: %d", delta);

    return 0;
}