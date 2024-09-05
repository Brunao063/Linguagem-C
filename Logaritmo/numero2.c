#include<stdio.h>

int main(void){

int F[30];
int num = 0;
int i = 0;

printf("Digite a quantidade de numeros da sequencia de Fibonacci desejada\n");
scanf("%d", &F[1]);

printf("Digite o numero para poder fazer a sequencia de Fibonacci\n");
scanf("%d", &num);

for(i = 2; i < num; i++){
    F[i] = F[i - 1] + F[i - 2];
}

for(i = 0; i < num; i++){
    printf("%d ", F[i]);
}

return 0;
}