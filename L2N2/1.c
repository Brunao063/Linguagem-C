#include<stdio.h>

int num1(int numQ){
    return numQ;
}

int main(){

    int numQ;

    printf("Digite o numero para saber se e nulo: ");
    scanf("%d", &numQ);

    int numero = num1(numQ);

    if(numero == 0 || numero < 0){
        printf("Esse numero e nulo");
    }else{
        printf("Esse numero e positivo");
    }

    return 0;
}