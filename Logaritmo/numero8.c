#include<stdio.h>
int main(void){

float num = 0;
int p = 0;
float c = 0;

printf("Digite o valor que queira converter:\n");
scanf("%f", &num);

printf("Digite a taxa de conversao:\n");
scanf("%f", &c);

printf("Digite uma das opcoes para realizar a conversao:\n (1)MoedaA\n (2)MoedaB\n");
scanf("%d", &p);

switch((int)p){
    case 1:
printf("MoedaA\n");
printf("%.2f", num * c);
break;
    case 2:
printf("MoedaB\n");
printf("%.2f", num / c);
break;
}

return 0;
}