#include<stdio.h>
int main(void){

int p[] = {10, 20, 30, 40, 50};
float soma = 0;
int tamanho = sizeof(p) / sizeof(p[0]);

printf("Tamanho vetor: %d\n", tamanho);

for(int i = 0; i < tamanho; i++){
    soma += p[i];
}

printf("A media dos valores e: %.2f", soma / tamanho);

return 0;
}