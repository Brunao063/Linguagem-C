#include <stdio.h>

int main(void){
int Qtdnums = 0;
int num = 0;
int j = 1;
float NumSoma = 0;


printf("Digite a quantidade de numeros desejada:\n");
scanf("%d", &Qtdnums);

while(Qtdnums >= j){
    printf("Digite o numero desejado\n");
    scanf("%d", &num);
    j++;

   printf("A somatoria dos numeros e: %.2f\n", NumSoma = NumSoma + num);
}
printf("A media desses numeros e: %.2f", NumSoma / Qtdnums);

}