#include<stdio.h>
int main(void){

int idade;
char nome[100];

printf("Digite seu nome: ");
scanf("%s", nome);

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Seu nome e %s e sua idade e %d", nome, idade);

return 0;
}