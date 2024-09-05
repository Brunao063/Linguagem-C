#include<stdio.h>

int main(void){

float num = 0;
float num1 = 0;

printf("Digite o numero que deseja transformar: ");
scanf("%f", &num1);

printf("Digite uma das opcoes para realizar a transformacao:\n (1)Celsius\n (2)Fahrenheit\n");
scanf("%f", &num);

switch((int)num){
        case 1:
    printf("Celsius:\n");
    printf("%.2f", (num1-32) / 1.8);
    break;
        case 2:
    printf("Fahrenheit:\n");
    printf("%.2f", num1 * 1.8 + 32);
    break;
        default:
    printf("Opcao Invalida");
}


return 0;
}