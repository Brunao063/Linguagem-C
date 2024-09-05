#include<stdio.h>
int main(void){

int num;

printf("Digite um numero: ");
scanf("%d", num);

if(num == 0){
    printf("Esse numero e zero");
}else if(num > 0){
    printf("Esse numero e positivo");
}else if(num < 0){
    printf("Esse numero e negativo");
}

return 0;
}