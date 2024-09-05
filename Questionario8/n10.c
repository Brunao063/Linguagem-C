#include<stdio.h>
int main(void){

int num = 0;

printf("Digite o numero desejado\n");
scanf("%d", &num);

if(num %= 4){
    printf("Esse ano nao e bissexto");
}else {
    printf("Esse ano e bissexto");
}


return 0;
}