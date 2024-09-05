#include<stdio.h>
int main(void){

int tabuada = 0;

printf("Escreva a tabuada do numero desejada\n");
scanf("%d", &tabuada);

for(int i = 1; i <= 10; i++){
printf("%d X %d = %d\n", tabuada, i, tabuada * i);
}


return 0;
}