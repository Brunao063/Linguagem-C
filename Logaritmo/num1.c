#include<stdio.h>
int main(void){

int p[] = {10, 9, 20, 30, 50};
int soma = 0;

for(int i = 0; i < 5; i++){
    soma += p[i];
}

printf("A soma do vetor e: %d\n", soma);

return 0;
}