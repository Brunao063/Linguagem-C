#include<stdio.h>
int main(void){

int i = 0;
int soma = 0;

do{
    printf("Digite o numero:\n");
    scanf("%d", &i);

    printf("A soma dos numeros e: %d\n", soma += i);
} while(i != 0);


return 0;
}