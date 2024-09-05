#include<stdio.h>
int main(void){

int p[] = {10, 9, 20, 30, 50};
int maior = 0;

for(int i = 0; i < 5; i++){
    if(p[i]){
        maior = p[i];
    }
}

printf("A soma do vetor e: %d\n", maior);

return 0;
}