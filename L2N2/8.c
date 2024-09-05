#include <stdio.h>

int num1(int a, float C, float F){
    if(a == 1){
        return C = (F-32) / 1.8;
    }else if (a == 2){
        return F = C * 1.8 + 32;
    }
}

int main(){

    int num = 0;
    float a = 0;
    float F = 0;
    float C = 0;

    printf("Digite o numero que deseja fazer a transformacao: ");
    scanf("%f", &a);

    printf("Digite para qual temperatura deseja fazer a transformacao:\n (1)Fahrenheit\n (2)Celsius\n");
    scanf("%d", &num);

    int resultado = num1(num, C, F);

    switch(num){
        case 1:
            printf("Fahrenheit: %f\n", resultado);
            break;
        case 2:
            printf("Celsius: %f\n", resultado);
            break;
            default:
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}