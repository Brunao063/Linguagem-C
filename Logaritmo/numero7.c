#include<stdio.h>
int main(void){

int num = 0;
int p[30];
int i = 0;
int pot = 0;

printf("Digite o numero que deseja fazer a potencia\n");
scanf("%d", &num);

printf("Digite a quantidade de potencias que ela sera feita\n");
scanf("%d", &pot);

for(i = 1; i <= pot; i++){
    p[i] = 1;
    for(int j = 0; i > j; j++){
    p[i] = p[i] * num;
    }
}

for(i = 1; i <= pot; i++){
    printf("%d ", p[i]);
}

return 0;
}