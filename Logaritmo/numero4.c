#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

srand(time(NULL));
int numAl = rand() % 10 + 1;
int numAd = 0;

do{
    printf("Digite qualquer numero\n");
    scanf("%d\n", &numAd);

    if(numAd > numAl){
        printf("e maior que o numero aleatorio\n");
    }else if(numAd < numAl){
        printf("e menor que o numero aleatorio\n");
    }
}while(numAd != numAl);
    printf("Voce acertou");

return 0;
}