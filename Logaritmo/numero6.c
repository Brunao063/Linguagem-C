#include<stdio.h>

int main(void){

int num = 0;
int cont = 0;

printf("Digite o numero inteiro:\n");
scanf("%d", &num);

while(num != 0){
    num /= 10;
    cont++;
}

printf("O numero tem %d digitos\n", cont);

return 0;
}