#include<stdio.h>
int main(void){

char frase[1024];
int comprimento;

printf("Digite o que desejar: ");
fgets(frase, sizeof(frase), stdin);

frase[strcspn(frase, "\n")] = '\0';

comprimento = strlen(frase);

printf("O comprimento da frase ou palavra desejada e: %d\n", comprimento);

return 0;
}