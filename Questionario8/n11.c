#include<stdio.h>
int main(void){

int i = 0;

printf("Digite um numero de 1 a 7:\n");
scanf("%d", &i);

switch(i){
        case 1:
    printf("Hoje e Domingo");
    break;
        case 2:
    printf("Hoje e Segunda");
    break;
        case 3:
    printf("Hoje e Terca");
    break;
        case 4:
    printf("Hoje e Quarta");
    break;
        case 5:
    printf("Hoje e Quinta");
    break;
        case 6:
    printf("Hoje e Sexta");
    break;
        case 7:
    printf("Hoje e Sabado");
    break;
    default:
    break;
}

return 0;
}