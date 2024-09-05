#include<stdio.h>
int main(void){

int Qtdnums = 0;
float num = 0;
int j = 1;
float NumSoma = 0;


printf("Digite a quantidade de alunos para fazer a media:\n");
scanf("%d", &Qtdnums);

while(Qtdnums >= j){
    printf("Digite a nota desejada:\n");
    scanf("%d", &num);
    j++;

   printf("A somatoria das notas e: %.2f\n", NumSoma = NumSoma + num);
}
printf("A media dessas notas e: %.2f", NumSoma / Qtdnums);

return 0;
}