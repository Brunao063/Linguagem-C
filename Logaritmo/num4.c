#include<stdio.h>
int main(void){

int p[] = {10, 20, 30, 40, 50};
int tamanho = sizeof(p) / sizeof(p[0]);

for(int i = (tamanho - 1); i >= 0; i--){
    printf("%d ", p[i]);
}

return 0;
}