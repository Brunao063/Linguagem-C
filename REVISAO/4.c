#include<stdio.h>
int main(){

    int p[5];
    int num = 5;

    for(int i = 0; i < num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &p[i]);
    }

    for(int i = (num - 1); i >= 0; i--){
        printf("%d ", p[i]);
    }

    return 0;
}