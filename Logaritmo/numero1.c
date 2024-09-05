#include <stdio.h>

int main(void){

int num = 0;
int num1 = 1;

printf("Digite um numero para verificar se ele e primo\n");
scanf("%d", &num);

do{
    for(int num2 = 2; num2 <= num / 2; num2++){
        if(num % num2 == 0){
            num1 = 0;
            break;
        }
    }

    if (num1 && num > 1) {
            printf("%d e um numero primo.\n", num);
        } else {
            printf("%d nao e um numero primo.\n", num);
        }
        break;
}while(1);

return 0;
}